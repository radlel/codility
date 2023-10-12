import os, sys, enum


class OperationType(enum.Enum):
    CREATE = 1
    UPDATE = 2


def create_file_from_template(op_type, template_name, file_name, file_path, replacement=None) -> None:
    if op_type == OperationType.CREATE:
        """ New file should be created, check if specifified file exists """
        if os.path.isfile(path_dir_exercise + '\\' + file_name):
            raise FileExistsError('File already exist. It cannot be created: {}'.format(file_path + '\\' + file_name))
    elif op_type == OperationType.UPDATE:
        """ File should be updated, check if specifified file exists """
        if not os.path.isfile(path_dir_exercise + '\\' + file_name):
            raise FileExistsError('File does not exist. It cannot be updated: {}'.format(file_path + '\\' + file_name))
    else:
        raise ValueError('Invalid OperationType: {}'.format(op_type))

    with open('templates\\' + template_name, 'r+') as template:
        """ Read template file """
        lines = template.readlines()

        """ Update template file content if required """
        if (replacement is not None):
            for i in range(len(lines)):
                lines[i] = lines[i].replace('<name>', replacement)
                lines[i] = lines[i].replace('<NAME>', replacement.upper())

        """ Create/open file """
        with open(file_path + '\\' + file_name, 'a') as file:
            file.writelines(lines)

        if op_type == OperationType.CREATE:
            print('File created: {}\{}'.format(file_path, file_name))
        else:
            print('File updated: {}\{}'.format(file_path, file_name))


def create_directory(path) -> None:
    os.mkdir(path)


if __name__ == '__main__':
    if len(sys.argv) == 2:
        name = sys.argv[1]

        path_dir_exercise = '..\\..\\exercises\\' + name
        path_dir_tests = '..\\..\\tests'

        """ Check if exercise already exists """
        if not os.path.exists(path_dir_exercise):
            """ Create directory for new exercise """
            create_directory(path_dir_exercise)

            """ Create directories for header and source files """
            path_dir_include, path_dir_source = path_dir_exercise + '\\include', path_dir_exercise + '\\source'
            create_directory(path_dir_include)
            create_directory(path_dir_source)

            """ Create header file """
            create_file_from_template(op_type=OperationType.CREATE,
                                      template_name='header.template',
                                      file_name=name + '.h',
                                      file_path=path_dir_include,
                                      replacement=name)

            """ Create source file """
            create_file_from_template(op_type=OperationType.CREATE,
                                      template_name='source.template',
                                      file_name=name + '.cpp',
                                      file_path=path_dir_source,
                                      replacement=name)

            """ Create CMakeLists file """
            create_file_from_template(op_type=OperationType.CREATE,
                                      template_name='CMakeLists.template',
                                      file_name='CMakeLists.txt',
                                      file_path=path_dir_exercise)

            """ Create README file """
            create_file_from_template(op_type=OperationType.CREATE,
                                      template_name='README.template',
                                      file_name='README.md',
                                      file_path=path_dir_exercise,
                                      replacement=name)

            """ Create test file """
            create_file_from_template(op_type=OperationType.CREATE,
                                      template_name='test.template',
                                      file_name='test_' + name + '.cpp',
                                      file_path=path_dir_tests,
                                      replacement=name)

            """ Update exercises\CMakeLists.txt """
            create_file_from_template(op_type=OperationType.UPDATE,
                                      template_name='CMakeListsExeUpd.template',
                                      file_name='CMakeLists.txt',
                                      file_path=path_dir_exercise + '\\..',
                                      replacement=name)

            """ Update tests\CMakeLists.txt """
            create_file_from_template(op_type=OperationType.UPDATE,
                                      template_name='CMakeListsUtUpd.template',
                                      file_name='CMakeLists.txt',
                                      file_path=path_dir_exercise + '\\..\\..\\tests',
                                      replacement=name)
        else:
            raise FileExistsError('Exercise with name {} aleady exists.'.format(name))
    else:
        raise ValueError('Invalid number of cmd arguments. Exactly 1 argument expected, got {}'.format(len(sys.argv) - 1))

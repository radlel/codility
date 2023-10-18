# codility - exercises sulutions with tests
This project contains codility exercises with C++ solutions scored 100% correctness and 100% performance. For each solution there is set of tests included.

Exercises have their own README.md files which contains description and solution results, see example [here](exercises\binary_gap\README.md).

## Project structure
    .
    ├── build                           # Build files
    ├── exercises                       # All Exercises solutions
    │   ├── <exercise_name>             # Specific exercise sources
    │   │   ├── include                 # Exercise solution header file
    │   │   └── source                  # Exercise solution source file
    │   └── ...                         # Other exercises sources
    ├── lib                             # Libraries
    │   └── googletest                  # Googletest repository
    ├── resources                       # Resources used for MarkDown files
    │   ├── <exercise_name>             # Specific exercise resources
    │   └── ...                         # Other exercises resources
    ├── scripts                         # Scripts
    │   └── add_exercise                # Script add_exercise directory
    │       └── templates               # Templates used by add_exercise script
    └── tests                           # Tests for exercises solutions

## Setup
### Environment
Setup for this project was done on Windows. For compilation mingw64 with msys 1.0 and CMake is used. Tests use googletest framework. Scripts are written in Python 3.
### Download repository
```git
git clone git@github.com:radlel/codility.git
```

## Build and run tests
To build all solutions and run tests simply execute _make_run.bat_ script.
```batch
make_run.bat
```

It will remove old build remainings, generate CMake files, compile all solutions and execute tests.

## Add new exercise solution
To add new solution simply go to _scripts\add_exercise_ directory and execute python script _add_exercise.py_:
```python
python add_exercise.py <new_exercise_name>
```
Remember to replace _<new_exercise_name>_ with desired exercise name.

### Script:
- Creates template source and header file
- Created template gtest file
- Creates all required directories
- Updates CMakeLists.txt files

Use generated files to implement your solution and implement tests.


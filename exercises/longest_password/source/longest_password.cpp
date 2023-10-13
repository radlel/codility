#include <iostream>
#include <vector>
#include <sstream>
#include "longest_password.h"


const char DIGIT_MIN = '0';
const char DIGIT_MAX = '9';
const char LETTER_MIN = 'a';
const char LETTER_MAX = 'z';
const char LETTER_CAP_MIN = 'A';
const char LETTER_CAP_MAX = 'Z';


void split_string(std::string const &input_str,
                  const char delim,
                  std::vector<std::string> &output_vect) {
    /* Split string to substrings and append them to vector */

    std::stringstream sstream(input_str);
    std::string substr{};

    while (std::getline(sstream, substr, delim)) {
        output_vect.push_back(substr);
    }
}

int solution(std::string &S) {
    int result = 0;

    int digits_cnt = 0;
    int letters_cnt = 0;
    bool invalid = false;
    std::vector<std::string> passwords{};

    split_string(S, ' ', passwords);

    for (const std::string& password : passwords) {
        /* Check validity and length of every passowrd */

        for (const char& letter : password) {
            /* Examiny every letter in current password */

            if ((letter >= DIGIT_MIN) && (letter <= DIGIT_MAX)) {
                digits_cnt ++;
            } else if (((letter >= LETTER_MIN) && (letter <= LETTER_MAX)) ||
                       ((letter >= LETTER_CAP_MIN) && (letter <= LETTER_CAP_MAX))) {
                letters_cnt ++;
            } else {
                /* Character not allowed, discard password */
                invalid = true;
                break;
            }
        }

        if (false == invalid && (letters_cnt % 2 == 0) && (digits_cnt % 2 == 1)) {
            /* Update result */
            if (digits_cnt + letters_cnt > result) {
                result = digits_cnt + letters_cnt;
            }
        }

        digits_cnt = 0;
        letters_cnt = 0;
        invalid = false;
    }

    return ((0 != result) ? result : -1);
}

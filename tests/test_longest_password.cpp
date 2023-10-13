#include "gtest/gtest.h"
#include <string>
#include "longest_password.h"


TEST(TEST_LONGEST_PASSWORD, test_example1) {
    std::string S = "test 5 a0A pass007 ?xy1";
    int expected_result = 7;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_simple1) {
    std::string S = "asdf qwerty1 ?!a a vv 91";
    int expected_result = 7;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_simple2) {
    std::string S = "123 ??123asd 5ZAQW 3";
    int expected_result = 5;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_simple3) {
    std::string S = "asdf! 3ab qqqq adw3";
    int expected_result = 3;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_simple4) {
    std::string S = "'v?# rb587 :{1bQ!&)J TD;Wa $Os";
    int expected_result = 5;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_character1) {
    std::string S = "a";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_character2) {
    std::string S = "0";
    int expected_result = 1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_character3) {
    std::string S = "#";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_character4) {
    std::string S = "[ F";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_character5) {
    std::string S = "W i k ? 5 + a";
    int expected_result = 1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_word1) {
    std::string S = "zaq123edc";
    int expected_result = 9;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_word2) {
    std::string S = "zaq!2#edc";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_word3) {
    std::string S = "zxcasdqwe123";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_word4) {
    std::string S = "4adf4dsk45";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_word5) {
    std::string S = "qWeRtYuIoP97531";
    int expected_result = 15;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_word6) {
    std::string S = "<w-w9@s&!^p>XWBqzDYuUBPF:Z@P1";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_one_word7) {
    std::string S = "d7K758nU1K42d214804s53oJC5r289w";
    int expected_result = 31;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_even_letters1) {
    std::string S = "abcd0 abcd00 abcd000 abcd0000";
    int expected_result = 7;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_even_letters2) {
    std::string S = "9999 999 00 0";
    int expected_result = 3;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_even_letters3) {
    std::string S = "!a?d8 ad8 ?@8";
    int expected_result = 3;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_odd_digits1) {
    std::string S = "ab000 abc000 abcd000 abcde000";
    int expected_result = 7;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_odd_digits2) {
    std::string S = "0abd 0ab 0a 0";
    int expected_result = 3;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_odd_digits3) {
    std::string S = "!a?d0 ad0 ?@0";
    int expected_result = 3;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_odd_length1) {
    std::string S = "ab0_00 abc_00 ab+000 ab+c00 0a00b 0ad0b 0ab? 04d?";
    int expected_result = 5;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_odd_length2) {
    std::string S = "abc00 ab000 abc000 aded00";
    int expected_result = 5;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_all_alphanumerical1) {
    std::string S = "alsdk98jfla a234df38234 a49g3 1283asLd asdf48";
    int expected_result = 5;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_all_alphanumerical2) {
    std::string S = "ad8zSozu5e 3lG1G IDBCHL9Ppb 438 zTi5C 2mM4 uM2hci Qvq zR10177Sh z6eo28 JyVIXRYhvz 232 6t6lRA296 9 z";
    int expected_result = 9;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_all_alphanumerical3) {
    std::string S = "495H7r4 621 9Vcy9w7 3911443 08745724 5647 142 28 9963519 056 18883977 3188641556 780949 097M7771C p28n8RU68 81848028 16";
    int expected_result = 9;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_extra_characters1) {
    std::string S = "4 '(:,#>~_,!?_]=}|:*__?48tZXRQEmMyGpuEQeOQCG4bVnxk a0b";
    int expected_result = 3;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_extra_characters2) {
    std::string S = "{(*U073m753M1p 7vzk9X3lloIGvutil yRdiV1SHymCMcCYJ8o4*{`-,/LpU3vbT";
    int expected_result = 17;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_extra_characters3) {
    std::string S = "02864ex7p93DR1jGK0144C1132V )!~)_|?-#0nnWWHRL40vZ2a4";
    int expected_result = 27;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_extra_characters4) {
    std::string S = "word_that_suits_requirements_when_we_omit_special_characters1 2another-word-with-special-characters correctAnswerr13579 always_bad_answer!";
    int expected_result = 19;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_large_random1) {
    std::string S = "776 G PIsyltL6i 267 nZ5C x1p X eci5h32 s9XSD9qYj4 2 Uik0accdKz Oe7DY58T8Q qBTSzosnS td5 F6 E3wtyc 2 13822 CDcG7 pHYG 0xVCi Rz7AqcN 6Kw KCfWD2oCAU EjkLHMP i77QOe nJ335 HI";
    int expected_result = 9;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_large_random2) {
    std::string S = "G677XL`1 237516678 0dVh$W =<ejX+ 9sZ4 55h8L fiGfZ8BClM $tR `<#1|S!O 9f>y 938 nUm=jJv 7z@P6Lvem AgQdNTW/6~ 1 B> gZ77934 KDa0 [q 678y694T9 2r^g 08324 G1k:c";
    int expected_result = 9;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_large_random3) {
    std::string S = "6Nuz:tihNEOqy*utBvjPis2Rn@{Qvt4ha=czgYAZel<xZ#UrJn`LB+ALLDVspn;PWRLiI&wgXZ~QXP%yU$![W0Z0A:Zp5%lTGISUK=gwZ/U*Oyh,NL3_u4D]7up+z=U&d83:p6mmK";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_maximum1) {
    std::string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa 5 a444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444";
    int expected_result = 1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_maximum2) {
    std::string S = "{#Ou +/ _;A9H+H{ 5VD74 CTe7Dr1d8 x! i l5U52 3K530eS4V |S([XiPk 9 pd,Rr~yp 840 gT K,g1C%S uBS90N M'C~$V* $:=LYg 8968q1O 77 768 ^ 9 3 =,tD !~8z]Vk#qc eTMd]`7C %p2?$u 9 ,GYAR, \f&E 709 b,T Oq Wyho;0";
    int expected_result = 9;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_maximum3) {
    std::string S = "5i2ajG2Lj1ysypjRMH1tzEvZLv33Icq1rYJCL5DcaxbviGP5Mf8ADcdOsdaTzsQr5wa2Iu9e8FpuuuvHVrkPGk0EdnnlSNeYcLxeughrZy5wJe0IflYZ2TiX9p3YWXFHsvbhfFC1PGiXIY8aKUV9oozop9MbFvz4LatOyKZ4GLyeK5Zd0xvIcWXBDbZ8AlQso7CXXG79";
    int expected_result = -1;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_maximum4) {
    std::string S = "892o99889455807767e838080323163L4096322617471G911F7963T0354WP102C012268326Rh9Z7990X843n2d44U99662950824037Wk604455179rL537z87175812396676e33425g30p845j7E9553237139E846821611480f3M5668327999516K588751";
    int expected_result = 199;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_LONGEST_PASSWORD, test_maximum5) {
    std::string S = "}@6056998902196414120277695348331842561390371380189 U4D051178100N99x1Zj4KmN5I4E2666304C910d8D ~},<%*:-;-`-'[^qX0N9yMYeuXl4tv92A4Pm02k5hAvYR7J4 6R22z5855r9c20864p9t870b7i2OV9908cm652881%^+*,";
    int expected_result = 41;
    int result = 0;

    result = solution(S);

    EXPECT_EQ (result, expected_result);
}

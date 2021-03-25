#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm>
using namespace std;

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

TEST_CASE("Good snowman code"){
   
    CHECK(snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11111111) == string("\n _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(22222222) == string("\n  ___\n .....\n\\(o.o)/\n\\(] [)/ \n (\" \")"));
    CHECK(snowman(33333333) == string("\n   _ \n  /_\\ \n/(O_O)\\\n/(> <)\\\n (___)"));
    CHECK(snowman(44444444) == string("\n ___\n(_*_)\n(- -)\n(   )\n(   )"));
    CHECK(snowman(12341234) == string("\n _===_\n\\(O .)/\n\\(> <)/\n (   )"));
    CHECK(snowman(43214321) == string("\n  ___\n (_*_)\n/(o,-)\\\n/(] [)\\\n ( : )"));
    CHECK(snowman(12431243) == string("\n _===_\n\\(-_.)/\n\\(   )/\n (___)"));
    CHECK(snowman(34432112) == string("\n  _ \n /_\\\n(-_O)/\n( : )/\n (\" \")"));
    CHECK(snowman(23321441) == string("\n  ___\n .....\n/(O.,) \n/(   ) \n ( : )"));
    CHECK(snowman(12222222) == string("\n _===_\n\\(o.o)/\n\\(] [)/\n (\" \")"));
    CHECK(snowman(13333333) == string("\n _===_\n/(O_O)\\\n/(> <)\\\n (___)"));
    CHECK(snowman(14444444) == string("\n_===_\n(- -)\n(   )\n(   )"));
    CHECK(snowman(21111111) == string("\n  ___\n .....\n<(.,.)>\n<( : )>\n ( : )"));
    CHECK(snowman(23333333) == string("\n  ___\n .....\n/(O_O)\\\n/(> <)\\\n (___)"));
    CHECK(snowman(24444444) == string("\n ___\n.....\n(- -)\n(   )\n(   )"));
    CHECK(snowman(31111111) == string("\n   _ \n  /_\\\n (.,.)\n<( : )>\n<( : )>"));
    CHECK(snowman(32222222) == string("\n   _ \n  /_\\\n\\(o.o)/\n\\(] [)/ \n (\" \")"));
    CHECK(snowman(34444444) == string("\n  _ \n /_\\\n(- -)\n(   )\n(   )"));
    CHECK(snowman(41111111) == string("\n  ___\n (_*_)\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(42222222) == string("\n  ___\n (_*_)\n\\(o.o)/\n\\(] [)/\n (\" \")"));
    CHECK(snowman(43333333) == string("\n  ___\n (_*_) \n/(O_O)\\\n/(> <)\\\n (___)"));
    CHECK(snowman(12121212) == string("\n _===_\n\\(...)/\n\\( : )/\n (\" \")"));
    CHECK(snowman(13131313) == string("\n _===_\n/(._.)\\\n/( : )\\\n (___)"));
    CHECK(snowman(14141414) == string("\n_===_\n(. .)\n( : )\n(   )"));
    CHECK(snowman(23232323) == string("\n  ___\n .....\n/(o_o)\\\n/(] [)\\\n (___)"));
    CHECK(snowman(24242424) == string("\n ___\n.....\n(o o)\n(] [)\n(   )"));
    CHECK(snowman(34343434) == string("\n  _ \n /_\\\n(O O) \n(> <) \n(   )"));
    CHECK(snowman(43434343) == string("\n  ___\n (_*_)\n/(-_-)\\ \n/(   )\\ \n (___)"));
    CHECK(snowman(42424242) == string("\n  ___\n (_*_)\n\\(-.-)/\n\\(   )/\n (\" \")"));
    CHECK(snowman(41414141) == string("\n ___\n(_*_)\n(-,-)> \n(   )>\n( : )"));
    CHECK(snowman(31313131) == string("\n  _ \n /_\\\n(O,O)>\n(> <)>\n( : )"));
    CHECK(snowman(12332112) == string("\n _===_\n\\(O_o)>\n\\( : )>\n (\" \")"));
    CHECK(snowman(23443211) == string("\n  ___\n .....\n/(- O)/\n/( : )/\n ( : )"));
    CHECK(snowman(13222222) == string("\n _===_\n/(o.o)/\n/(] [)/\n (\" \")"));
}


TEST_CASE("You should enter only 8 indexes"){
    CHECK_THROWS(snowman(12344444));
    CHECK_THROWS(snowman(431234311));
    CHECK_THROWS(snowman(111111));
    CHECK_THROWS(snowman(22222222));
    CHECK_THROWS(snowman(432121234));
    CHECK_THROWS(snowman(12343));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(32));
    CHECK_THROWS(snowman(421111));
    CHECK_THROWS(snowman(131234));
    CHECK_THROWS(snowman(12313));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(2));
}


TEST_CASE("The number should be between 1 and 4 including"){
    CHECK_THROWS(snowman(98769987));
    CHECK_THROWS(snowman(12344325));
    CHECK_THROWS(snowman(11111886));
    CHECK_THROWS(snowman(74532132));
    CHECK_THROWS(snowman(18765456));
    CHECK_THROWS(snowman(38456789));
}

TEST_CASE("Invalid number"){
    CHECK_THROWS(snowman(-12341234));
    CHECK_THROWS(snowman(1-2321444));
    CHECK_THROWS(snowman(4-2213212));
    CHECK_THROWS(snowman(12-2-2342));
    CHECK_THROWS(snowman(1223214-2));
}
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "stack.h"

stack a;

TEST_CASE("Functions when Empty"){
    CHECK(a.isEmpty() == true);
    CHECK(a.pop() == false);
    CHECK(a.top() == -1);
    CHECK(a.toString() == "");
}

TEST_CASE("Push function/Top function"){
    a.push(2);
    CHECK(a.toString() == "2 ");
    CHECK(a.top() == 2);
    a.push(-8);
    CHECK(a.toString() == "2 -8 ");
    CHECK(a.top() == -8);
    a.push(17);
    CHECK(a.toString() == "2 -8 17 ");
    CHECK(a.top() == 17);
    a.push(9/3);
    CHECK(a.toString() == "2 -8 17 3 ");
    CHECK(a.top() == 3);
}

TEST_CASE("Pop function/Top function"){
    CHECK(a.pop() == true);
    CHECK(a.toString() == "2 -8 17 ");
    CHECK(a.top() == 17);
    CHECK(a.pop() == true);
    CHECK(a.toString() == "2 -8 ");
    CHECK(a.top() == -8);
    CHECK(a.pop() == true);
    CHECK(a.toString() == "2 ");
    CHECK(a.top() == 2);
}

TEST_CASE("Empty function"){
    CHECK(a.isEmpty() == false);
}
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "queue.h"

queue a;

TEST_CASE("Functions when Empty"){
    CHECK(a.isEmpty() == true);
    CHECK(a.dequeue() == false);
    CHECK(a.front() == -1);
    CHECK(a.toString() == ""); 
}

TEST_CASE("Enqueue function/Front function"){
    a.enqueue(3);
    CHECK(a.toString() == "3 ");
    CHECK(a.front() == 3);
    a.enqueue(25);
    CHECK(a.toString() == "3 25 ");
    CHECK(a.front() == 3);
    a.enqueue(-7);
    CHECK(a.toString() == "3 25 -7 ");
    CHECK(a.front() == 3);
    a.enqueue(18/9);
    CHECK(a.toString() == "3 25 -7 2 ");
    CHECK(a.front() == 3);
}

TEST_CASE("Dequeue function/Front function"){
    CHECK(a.dequeue() == true);
    CHECK(a.toString() == "25 -7 2 ");
    CHECK(a.front() == 25);
    CHECK(a.dequeue() == true);
    CHECK(a.toString() == "-7 2 ");
    CHECK(a.front() == -7);
    CHECK(a.dequeue() == true);
    CHECK(a.toString() == "2 ");
    CHECK(a.front() == 2);
}

TEST_CASE("Empty function"){
    CHECK(a.isEmpty() == false);
}
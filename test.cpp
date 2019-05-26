#include "catch.hpp"
#include "UnionFind.h"
#include <vector>

using namespace std;
SCENARIO("Test de Find "){
GIVEN("UnionFind test(4), se crea una estructura de 4 elementos (0,1,2,3) cada uno es padre de si mismo. Find(0) tendria que ser 0"){
UnionFind test(4);
REQUIRE(test.Find(0)==0);
}
}

SCENARIO("Test de Union"){
GIVEN("UnionFind test(4), se crea una estructura de 4 elementos (0,1,2,3) cada uno es padre de si mismo. Union(0,1) asigna el padre de 1 a 0, Find(0) tendria que ser 1"){
UnionFind test(4);
test.Union(0,1);
REQUIRE(test.Find(0)==1);
}
}

SCENARIO("Test de Union multiple"){
    GIVEN("UnionFind test(4), se crea una estructura de 4 elementos (0,1,2,3) cada uno es padre de si mismo. Union(0,1) asigna el padre de 1 a 0, Union(3,0) asigna el padre de 3 a 0.  Find(3) tendria que ser 1"){
        UnionFind test(4);
        test.Union(0,1);
        test.Union(3,0);
        REQUIRE(test.Find(3)==1);
    }
}

SCENARIO("Manual assing de padre"){
    GIVEN("UnionFind test(4), se crea una estructura de 4 elementos (0,1,2,3) cada uno es padre de si mismo. manual_set(3,2) asigna 2 como padre de 3.Find(3) tendria que ser 2"){
        UnionFind test(4);
        test.manual_set(3,2);
        REQUIRE(test.Find(3)==2);
    }
}

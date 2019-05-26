#include <iostream>
#include "UnionFind.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#ifndef CATCH_CONFIG_MAIN
using namespace std;
int main() {
   UnionFind a(4);
   a.Union(0,1);
   a.Union(3,0);
   a.Find(3);

    return 0;
}
#endif
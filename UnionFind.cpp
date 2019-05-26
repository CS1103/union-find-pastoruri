//
// Created by rodrigo.cespedes on 24/05/2019.
//
#include <iostream>
#include "UnionFind.h"
using namespace std;
UnionFind::UnionFind(int n) {
    this->n=n;
    for(int i=0;i<n;i++){

        matrix.push_back(node(i));
    }
}

void UnionFind::Find(int index) {
        if( matrix[index].is_papa==true){
            cout << matrix[index].value ;
        }
        else return Find( matrix[index].value );
}

void UnionFind::Union(int index1, int index2) {

        matrix[index1].value=matrix[index2].value;

}



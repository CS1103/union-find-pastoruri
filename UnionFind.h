//
// Created by rodrigo.cespedes on 24/05/2019.
//

#ifndef VIERNES24_UNIONFIND_H
#define VIERNES24_UNIONFIND_H

#include <vector>
#include <ostream>


using namespace std;
class node{
public:
    bool is_papa;
    int value;

    node(int value){this->value=value;is_papa=true;}
//    friend void operator >>( node &input, node &obj);

};
//void operator >>( node &input, node &obj){
//      obj.value=input.value ;
//}
class UnionFind {
public:
int n;
vector<node> matrix;

UnionFind(int n);
bool manual_set(int index,int n);
int Find(int index);
void Union(int index1,int index2);
    node operator[](int i){
        return matrix[i];
    }
};


#endif //VIERNES24_UNIONFIND_H

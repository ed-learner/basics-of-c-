//
// Created by amuteted on 24.11.19.
//
#include<iostream>

using namespace std;

void f(int &r){
    cout<< "r = " <<r<<endl;
    cout<< "&r = " << &r << endl;
    r=5;

    cout<<"r = " << r << endl;
}

int main() {

    int x = 47;
    cout<<"x = " <<x<< endl;
    cout <<"&x = "<<&x<< endl;

    f(x); //looks like pass by value but it is actually pass by reference

    cout<<" x=" << x <<endl;

}
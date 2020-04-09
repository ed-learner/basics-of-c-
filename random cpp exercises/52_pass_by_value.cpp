//
// Created by amuteted on 24.11.19.
//
#include<iostream>

using namespace std;

void f(int a){
    cout<<"a  print =" << a<< endl;
    a=5;
    cout<<"a is = " << a << endl;
}

int main(){
    int x = 47;

    cout<< "x = "<< x <<endl;

    f(x);

    cout <<"x = " << x << endl;

    return 0;
}


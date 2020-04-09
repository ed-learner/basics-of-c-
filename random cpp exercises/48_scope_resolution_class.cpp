//
// Created by amuteted on 26.11.19.
//
#include<iostream>

using namespace std;

class A {
public:
    //only declaration
    void fun();
};

//Definition outside of the class using ::
void A:: fun(){

    cout<< "fun () called"<<endl;
}

int main(){

    A a; // object creation

    a.fun();

    return 0;
}

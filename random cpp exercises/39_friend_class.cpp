//
// Created by amuteted on 07.01.20.
//
#include<iostream>

using namespace std;

class A{
private:
    int a;
public:
    A(){a=20;}
    friend class B;//Friend  class
};

class B{
private:
    int b;
public:
    void ShowA(A& x){
        cout<< "A::a="<<x.a<<endl;
    }
};


int main(){

    A a;
    B b;
    b.ShowA(a);

    return 0;
};
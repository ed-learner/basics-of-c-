//
// Created by amuteted on 08.01.20.
//
#include<iostream>

using namespace std;

int main(){
    int a;

    cout<<"Enter number: ";
    cin>>a;

    int *b=&a;

    cout<<"The pointer value is "<<*b<<" the memory address is: "<<b;

    return 0;
}

//
// Created by amuteted on 07.01.20.
//

#include<iostream>

using namespace std;

string read(){
    string name;
    cout<<"Enter  your name: ";
    cin>> name;
    cout<<"\n";
    return name;
}

int main(){

    string your_name;
    your_name=read();

    cout<<"Hello " <<your_name<<"!\n";
}
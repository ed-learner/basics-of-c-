//
// Created by amuteted on 26.11.19.
//
#include<iostream>

using namespace std;

int my_var =0;

int main(){
    int my_var =0;
    :: my_var =1; //set gloabl my_var to 1

    my_var =2; //set local my_var to 2

    cout<< :: my_var << ", "<<endl;

    cout<< my_var<< endl;



}

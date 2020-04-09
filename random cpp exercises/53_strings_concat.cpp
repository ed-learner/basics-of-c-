//
// Created by amuteted on 24.11.19.
//
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1, s2; //Empty strings

    string s3 = "Hello, world."; //Initialized
    string s4("I am"); //also initialized

    s2 = "Today"; //Assigning to a string

    s1 = s3 + " " + s4; //combining strings

    s1 += " 8 " ; //Appending to a string

    cout << s1 + s2 + "!" << endl;


    return 0;
}

//
// Created by amuteted on 15.11.19.
//
#include<iostream>

using namespace std;

class Animal{
public:
    void eat(){

        cout<<" Eating...";
    }
};

class Dog: public Animal {
public:
    void eat(){

        cout<<"Eating bread...";
    }
};

int main(){
  Dog d;

      d.eat();


      return 0;
}

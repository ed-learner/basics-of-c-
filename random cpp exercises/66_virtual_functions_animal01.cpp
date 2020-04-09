//
// Created by amuteted on 15.11.19.
//
#include<iostream>

using namespace std;

class Animal{
public:
    void my_features(){
        cout<<"I am an animal.";
    }
};

class Mammal : public Animal {

public:
    void my_features(){

        cout<<"\nI am a mammal.";
    }
};


class Reptile : public Animal{
public:
    void my_features(){
        cout<<"\nI am a reptile.";
    }

};

class Bird : public Animal{

public:
    void my_features(){
        cout<<"\nI am a bird.";

    }
};

int main(){
    Animal  *obj1 = new Animal;
    Mammal  *obj2 = new Mammal;
    Reptile *obj3 = new Reptile;
    Bird    *obj4 = new Bird;


    obj1->my_features();
    obj2->my_features();
    obj3->my_features();
    obj4->my_features();

    return 0;
}
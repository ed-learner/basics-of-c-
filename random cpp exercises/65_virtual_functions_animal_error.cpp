//
// Created by amuteted on 15.11.19.
//
#include <iostream>

using namespace std;

class Animal {

public:
    void my_features(){

        cout<<"I am an animal.";
    }
};

class Mammal : public Animal{
public:
    void my_features(){

        cout<<"\nI am a mammal.";
    }

};

class Reptile : public Animal {

public:
    void my_features(){

        cout<<"\nI am a reptile.";
    }
};

//intermediate function

void intermediate_func(Animal *al){

    al->my_features();
}

int main(){

    Animal *obj1= new Animal;
    Mammal *obj2 = new Mammal;
    Reptile *obj3 = new Reptile;


    intermediate_func(obj1);
    intermediate_func(obj2);
    intermediate_func(obj3);



    return 0;
}
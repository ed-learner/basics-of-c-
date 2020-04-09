//
// Created by amuteted on 19.11.19.
//

#include<iostream>

using namespace std;

class CDummy{

    float i, j;

};

class CAddition{
    int x, y;

public:
    CAddition (int a, int b){
        x=a;
        y=b;
    }

    int result() {
        return x+y;
    }
};

int main(){
    CDummy d;
    CAddition *padd; //pointer to CAddition class
    padd = (CAddition*) &d;// ERROR assigning the class pointer to a reference to an object of another incompatible type using explicit type_casting
    cout<<padd->result();

    return 0;
}
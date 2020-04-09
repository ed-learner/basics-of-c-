//
// Created by amuteted on 17.11.19.
//

#include<iostream>

using namespace std;

struct Complex{
    int real;
    float img;

};

int main(){
    //creating a complex structure variable
    Complex var1;

    //creating a pointer of complex type & assigning address of var1 to this pointer

    Complex *ptr;
    ptr = &var1;

    //assigning values to complex variable var1

    var1.real = 5;
    var1.img = 0.33;

    //accessing values var1 using pointer

    cout<<"Real part:"<<ptr->real<<endl;
    cout<<"Imaginary part:"<<ptr->img<<endl;

    //accessing values var1 with normal
    cout<<"Real part:"<<var1.real<<endl;
    cout<<"Imaginary part:"<<var1.img<<endl;

    return 0;
}


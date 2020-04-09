//
// Created by amuteted on 13.01.20.
//
#include<iostream>

using namespace std;

class Test{
public:
    void setX(int x){
        //The this pointer is used to retrieve the objects x//hidden by the local variable 'x'
        this->x =x;

        //left is the member variable x and right x is the local variable x
    }

    void print(){
        cout<<"x="<<x<<endl;
    }

private:
    int x;
};

int main(){
    Test obj;

    int x=20;
    obj.setX(x);
    obj.print();

    return 0;
}
//use of this pointer when the local variables names is same as the member variable name
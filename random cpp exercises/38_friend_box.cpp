//
// Created by amuteted on 07.01.20.
//
#include<iostream>

using namespace std;

class Box{
private:
    double width;
public:
    friend void printWidth(Box box);
    void setWidth(double wid){width=wid;}

};

void printWidth(Box box){
    cout<<"Width of box: "<<box.width<<endl;
}


int main(){

    Box box;

    box.setWidth(10.0);

    printWidth(box);

    return 0;
}

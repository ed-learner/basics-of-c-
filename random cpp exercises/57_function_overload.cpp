//
// Created by amuteted on 22.11.19.
//

#include<iostream>

using namespace std;

class printData{
public:
    void print(int i){
        cout<<"Printing int:"<< i<<endl;
    }
    void print(double f){

        cout<<"Printing float: "<<f <<endl;
    }

    void print(char const *c){
        cout<<"Printing character: "<<c <<endl;
    }

    //char  const *char pointer to constant char
    // char * const  constant pointer to a char
};

int main(void){
    printData pd;

    //call print to print integer

    pd.print(5);

    //call print to print float
    pd.print(500.263);

    //call print to print character
    pd.print("Hello c++");

    return 0;

}
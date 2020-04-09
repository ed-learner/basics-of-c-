
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    int *pc, c;

    c=5;

    cout<<"Address of c(&c): "<< &c <<endl;
    cout<<"Value of c (c): "<< c << endl;

    pc = &c; //pointer pc holds the memory address of variable c

    cout<<"Address that pointer pc holds (pc): "<< pc <<endl;
    cout<<"Content of the address pointer pc holds (*pc): "<<*pc<<endl;

    c = 11; //the content inside memory address &c is changed from 5 to 11
    cout<<"Address pointer pc holds (pc): "<< pc <<endl;
    cout<<"Content of the address pointer pc hold (*pc): "<< *pc <<endl;

    *pc = 2;

    cout << "Address of c (&c): "<< &c << endl;
    cout<< "Value of c (c): " << c <<endl;

    return 0;
}

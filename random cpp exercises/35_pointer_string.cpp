//
// Created by amuteted on 08.01.20.
//

#include<iostream>

using namespace std;

int main(void){
    char str[] = "A string.";
    char *pc = str;

    cout<<str[0]<<' '<< *pc << ' '<<pc[3]<<endl;

    pc+=2;

    cout<<*pc<<' '<<pc[2]<<' '<<pc[5]<<endl;

    return 0;
}
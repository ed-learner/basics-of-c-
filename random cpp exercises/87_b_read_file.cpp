//
// Created by amuteted on 11.01.20.
//

#include<iostream>
#include<fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){

    ifstream infile("graph");

    if (infile.is_open()){   //checking whether the file is open
        string point;
        while(getline(infile,point)){ //read data from file object and put it into string.
            cout << point << " next line"<<endl;
        }
        infile.close(); //close the file object.
    }

    return 0;
}
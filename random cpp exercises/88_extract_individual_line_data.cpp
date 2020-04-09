//
// Created by amuteted on 30.01.20.
//

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>


using namespace std;

int main(){
    ifstream infile("control_data_sorted.txt");
    string line;
    double a, b, c, d;

     if(infile.is_open()){
        // while(getline(infile,line)){
         getline(infile,line);
             istringstream iss(line);

             if(!(iss>>a >>b >>c>>d)) {cout<<"end of line"<<endl}

             else {
                 double x =b;
                 double y =c;
                 cout << x << " " << y << endl;
             }
         }

     //}
     infile.close();

    return 0;
}

//
// Created by amuteted on 29.01.20.
//
#include<iostream>
#include<string>

using namespace std;

int main(){


     string s = "scott = tiger % mushroom";

     string delimiter1 = "=";
     string delimiter2 = "%";

     size_t pos = 0;
     string token;

     while((pos =s.find(delimiter1)) != string::npos || (pos =s.find(delimiter2)) != string::npos ){

         token = s.substr(0,pos);
         //cout<<token<<endl;
         cout<<token<< " ";
         s.erase(0,pos + delimiter1.length());
         //s.erase(0,pos + delimiter2.length());
     }

     cout<<s<<endl;

    return 0;
}


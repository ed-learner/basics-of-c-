#include<iostream>

using namespace std;

int main(){

//A throw expression accepts one parameter
//parameter is passed as an argument to the exception handler

 try{

    throw 20;

 }

 //exception handler
 catch (int ex){

    cout<<"An exception occurred. Exception Nr."<< ex <<endl;

 }

}

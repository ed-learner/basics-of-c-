#include<iostream>

using namespace std;

double division(double a, double b){
 if(b == 0){

    throw "Error! division by zero";

 }

 return (a/b);

}

int main(){
 double x;
 double y;
 double z;

 cout<< "Enter two doubles: "<<endl;

 cin>> x >> y;


 try{
   z = division(x,y);

   cout<<"Division result: "<< z <<endl;

 } catch (const char* error_msg){

 cout<<error_msg<<endl;

 }
 return 0;
}

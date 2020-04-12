#include<iostream>

using namespace std;

int main(){

try{
    try{
      throw 10;
    }

    catch (int n){

     cout<<"Handle Partially the exception: "<< n<<endl;

     throw;

    }
}
catch (int n){

 cout<<"Handle the remaining :" << n << endl;

}


return 0;

}

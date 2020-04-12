#include<iostream>

using namespace std;

class con_des{
    public:
        con_des(){

            cout<<"Constructor of class"<<endl;

        }
        ~con_des(){

            cout<<"Destructor of class"<<endl;
        }
};

int main(){
 try {

    con_des test;

    throw 20;


 } catch(int a){

    cout<<"Caught "<< a <<endl;

 }

 return 0;

}

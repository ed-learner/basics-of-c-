#include<iostream>

using namespace std;

int main(){

int x = -1;

cout<<"Before try"<<endl;

try{
   cout<<"inside try"<<endl;

   if( x < 0){
    throw x;

    cout<<"After throw (code is never executed)"<<endl;

   }
}

catch (int x) {

    cout<<"Exception caught" <<endl;

}

cout<<"After catch (the program execution continues" <<endl;


return 0;
}

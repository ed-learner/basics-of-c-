#include<iostream>

using namespace std;

int main(){

    try{

        throw 10;

    }

    catch (char *excpt){

        cout<<"Caught "<< excpt;

    }

    catch (...){

     cout<<"Default Exception"<<endl;

    }

    return 0;
}

#include<iostream>

using namespace std;

//local variable is same as memmbers name

class Test {

private:
    int x;
public:
    // The 'this' pointer is used to retrieve the object's x
    // hidden by the local variable 'x'
    void setX(int x){

     this->x = x;

    }

    void print(){

    cout<<" x = " << x << endl;

    }
};

int main(){

Test obj;

int x = 100;

obj.setX(x);
obj.print();


return 0;

}

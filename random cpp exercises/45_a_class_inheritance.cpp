//
// Created by amuteted on 20.12.19.
//

#include<iostream>

using namespace std;

class C {
protected:
    int x;
public:
    void f(){cout<<"executes C::f()"<<'\n';}
    virtual void g() {cout <<"executes C::g()"<< "\n";}
};


class C1: public C {
protected:
    int x1;
public:
    void h(C*);
};

class C2: public C1 {
public:
    int x2;
};

class C3: public C {
protected:
    int x3;
public:
    void f(){ cout <<"executes C::f()"<< '\n';}
    void g() {cout <<"executes C3:: g()"<< '\n';}
};


void C1:: h(C *obj) {

    C2 *obj2 = new C2;
    C3 *obj3 = new C3;

    //obj->x =0;

    obj2->x =2;

    //obj3->x =3;

    cout<< "method obj->f() from C1::h: ";obj->f();
    cout<< "method obj->g() from C1::h: ";obj->g();
    cout<< "method obj3->f() from C1::h: "; obj3->f();

}


int main() {
    C1 obj1;
    obj1.x =0;
    cout<< "method obj1.f() from main: "; obj1.f();
    obj1.x1 =1;
    obj1.x2 =2;

    C3 o3;

    obj1.h(&o3);
}
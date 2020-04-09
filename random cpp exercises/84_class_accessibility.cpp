//
// Created by amuteted on 20.12.19.
//

class C{
protected: int x;
public : void f() {};

};

class C1: public C {
protected: int x1;
public: void h(C *obj) {};

};

class C2: public C1 {
public: int x2;
};

class C3:public C {
public: f() {...};
};


C1::h () {

    C2 *obj2;
    C3 *obj3;

    obj->f();

    //call C1:: h with a parameter (pointing to an object of class c3.  method  f executed, C:: f() or C3::f()? C::f() method is executed
    //if f is declared as virtual in C then C3::f() is executed ...why??


    obj-> x;  //not allowed in C1::h  because x is protected field of c. oBJ  could be replaced,
              // at run time by an object of subclass at run time by an object of a subclass not in the same branch of c1
    obj2-> x; // is allowed ...why??
    obj3->x;   //is not allowed because x is a protected field of C inherited as protected by C3

};



int main(){

    C1 obj1;

    obj1.x;       //not allowed in main as x is protected and cannot be accessed externally
    obj1.f();     //is allowed as f() is a public method inherited by C1
    obj1.x1();    //not allowed in main as X1 is protected field
    obj.x2;       //not allowed in main as X2 is not a member of C1





    return 0;
}




// Created by amuteted on 08.11.19.
//

#include<iostream>
#include<cstring>

using namespace std;

int main(){
     struct student {

         int roll_no;
         string name;
         int phone_number;

     };

    struct student p1={1, "Brown", 123443};
    struct student p2,p3;

    p2.roll_no =2;
    p2.name = "sam";
    p2.phone_number= 123456;


    p3.roll_no= 3;
    p3.name = "Andy";
    p3.phone_number = 1234566;



    cout<<"First student"<<endl;
    cout<<"roll no: "<<p1.roll_no<< endl;
    cout<<"name: "<<p1.name<<endl;
    cout<<"phone no: "<< p1.phone_number<<endl;

    cout<<"Second student"<<endl;
    cout<<"roll no: "<<p2.roll_no<< endl;
    cout<<"name: "<<p2.name<<endl;
    cout<<"phone no: "<< p2.phone_number<<endl;

    cout<<"Third student"<<endl;
    cout<<"roll no: "<<p3.roll_no<< endl;
    cout<<"name: "<<p3.name<<endl;
    cout<<"phone no: "<< p3.phone_number<<endl;




    return 0;
}


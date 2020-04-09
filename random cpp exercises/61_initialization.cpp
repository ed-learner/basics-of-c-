//
// Created by amuteted on 18.11.19.
//

#include<map>
#include<vector>
#include<string>

//initialization of a C array as attribute of a class
class Array{
public:
    Array(): myData{1,2,3,4,5} {}
private:
    int myData[5];

};


class MyClass{
public:
    int x;
    double y;

};

class MyClass2{
public:
    MyClass2(int fir, double sec): x{fir}, y{sec} {};

private:
    int x;
    double y;
};

int main(){
    //Direct Initialization of a Standard container

    int intArray[]={1, 2, 3, 4,5};

    std:: vector<int> intArray1{1,2, 3,4,5};

    std:: map<std::string, int> myMap{{"Scott",1976},{"Dijkstra",1972}};

    //initialization of const heap Array

    const float *pData = new const float[3]{1.1, 2.2,3.3};


    Array arr;

    //Default Initialization of arbitrary object

    int i{};  //i becomes 0

    std :: string s{}; //s becomes ""

    std :: vector<float> v{}; //v becomes an empty vector
    double d{};  //d becomes 0.0

    //initialization of an arbitrary object using public attributes

    MyClass2 myClass2{2011, 3.14};
    MyClass2 myClass3 ={2011, 3.14};


return 0;
}


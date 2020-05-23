/*use Class templates.

Make a template type class called Complex.
Contains two private variables:

The real and imaginary element of a complex number.
Has a constructor taking real and imaginary parts
a complex number as input and initializing those.

Has two other member functions:
    get_real(): returns the real part of the complex number.
    get_im(): returns the imaginary part of the complex number.
The code should be generalized hence should work for any data types.
*/

#include <iostream>
using namespace std;

template<typename T>
class Complex {
    public:
        Complex(T re, T im){
            real =  re;
            imaginary = im;
        }

        T get_real( ){
            return real;
        }

        T get_im( ){
             return imaginary;
        }

    private:
          T real;
          T imaginary;

};

int main()
{
    double x=500, y=100;
    Complex <double> comp(x,y);
    cout << "The complex number is: "<< x<< "+ "<<y<<"i"<<endl;
    cout <<"Real part of the complex number is: " << comp.get_real()<<endl;
    cout << "Imaginary part of the complex number is: "<< comp.get_im() <<endl;
}

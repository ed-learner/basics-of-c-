#include <iomanip>
#include<iostream>

using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;


    //hex: output the number in hexadecimal format
    //left: align output to the left
    //showbase: make sure hexadecimal number has a '0x' at the beginning
    //nouppercase: converts all alphabetic hexadecimal values to lowercase
    cout<< hex << left << showbase << nouppercase;
    cout<<(long long)A << endl;

    //dec: output number in decimal format
    //right: aligns values to the right
    //setw(15): sets a fixed width of 15
    //setfill('_'): change the padding from white spcaces to '-'
    //showpos: ensure a plus sign before any positive numbers
    //fixed: ensures that number is printed out entirely
    //setprecision(2): sets the number of decimal places to 2

    cout<< dec << right << setw(15)<<setfill('_') <<showpos <<fixed;
    cout<<setprecision(2);
    cout<< B <<endl;

    //scientific: output in scientific notation format
    //uppercase: ensures the capitalisation of letters
    //noshowpos: gets rid of the plus at the start of positive values
    //setprecision(9): Change the number of digits after the decimal point to 9

    cout<<scientific << uppercase <<noshowpos <<setprecision(9);
    cout<< C <<endl;

	}
	return 0;

}

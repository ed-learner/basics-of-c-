//
// Created by amuteted on 22.11.19.
//

#include<iostream>

using namespace std;

template <typename T, typename U>
bool are_equal (T a, U b) {
    return (a==b);
}

int main(){

    if (are_equal(10, 12.0))
        cout<<"x and y are equal\n";
    else
        cout<<"x and y are not equal\n";

    return 0;
}


//
// Created by amuteted on 22.11.19.
//

#include<iostream>
#include<vector>  //for 2D vector

using namespace std;

int main(){

    //initializing 2D VECTOR "vect" with different number of values in each row

    vector<vector<int>> vect {{1, 2},{4,5, 6}, {7, 8, 9, 10}};

    //Displaying the 2D vector

    for ( int i = 0; i < vect.size(); i++) {
        for (int j =0; j< vect[i].size(); j++)
            cout<<vect[i][j]<<" ";
        cout<< endl;

    }

    return 0;

}

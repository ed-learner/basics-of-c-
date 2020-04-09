//
// Created by amuteted on 22.11.19.
//

#include<iostream>
#include<vector> //for 2D vector

using namespace std;

int main(){
    //initializing 2d vctor vect with values

    vector<vector<int>> vect {{1, 2, 3}, {4, 5,6}, {7, 8, 9}};

    //Displaying the 2D Vector

    for (int i = 0; i< vect.size(); i++){

        for(int j=0; j< vect[i].size();j++)
            cout<< vect[i][j]<<" ";
            cout<<endl;
    }

    return 0;
}

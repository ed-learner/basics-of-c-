//
// Created by amuteted on 06.03.20.
//
#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main(){
    set<int>intset;

    for(int i = 0; i<25; i++)
        for(int j= 0; j< 10; j++){
            //try to insert multiple sets
            intset.insert(j);
        }
    ostream_iterator<int> os(cout, "\n");
    copy(intset.begin(), intset.end(), os);



    return 0;
}



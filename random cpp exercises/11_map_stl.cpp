//
// Created by amuteted on 31.01.20.
//

#include<iostream>
#include<iterator>
#include<map>

using namespace std;

int main(){
    //empty map container

    map<int, int> gquiz1;

    //insert elements in random order

    gquiz1.insert(pair<int, int>(1,40));
    gquiz1.insert(pair<int,int>(2,30));
    gquiz1.insert(pair<int,int>(3,60));
    gquiz1.insert(pair<int,int>(4,20));
    gquiz1.insert(pair<int,int>(5,20));
    gquiz1.insert(pair<int,int>(6,50));
    gquiz1.insert(pair<int,int>(7,50));
    gquiz1.insert(pair<int,int>(8,10));

    //printing map gquiz1
    map<int, int> :: iterator itr;

    cout<<"\nThe map gquiz1 is: \n";
    cout<<"\tKEY\tElement\n";

    for(itr = gquiz1.begin(); itr != gquiz1.end(); ++itr){
        cout<<'\t'<<itr->first
            <<'\t' <<itr->second << '\n';
    }
    cout<<endl;

    //assigning the elements from gquiz1 to gquiz2

    map<int, int> gquiz2(gquiz1.begin(),gquiz1.end());


    //print all elements of the map gquiz2
    cout<<"\nThe map gquiz2 after assigning from gquiz1 is: \n";

    //print all elements of the map gquiz2
    cout<<"\t KEY\tELEMENT\n";
    for(itr =gquiz2.begin(); itr != gquiz2.end(); ++itr){
        cout<<"\t" <<itr->first
            <<'\t' <<itr->second <<'\n';
    }
    cout<<endl;

    //remove all elements up to  element with key=3 in gquiz2

    cout<<"\ngquiz2 after removal of elements less than key=3: \n";

    return 0;

}
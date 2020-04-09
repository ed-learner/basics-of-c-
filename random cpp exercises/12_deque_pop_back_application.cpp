//
// Created by amuteted on 31.01.20.
//

#include<iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> mydeque, newdeque;

    mydeque.push_front(82);
    mydeque.push_front(73);
    mydeque.push_front(64);
    mydeque.push_front(57);
    mydeque.push_front(43);
    mydeque.push_front(39);
    mydeque.push_front(20);
    mydeque.push_front(1);

    //deque becomes 1, 20, 39, 43, 57, 64, 73, 82

    while(!mydeque.empty()){
        newdeque.push_back(mydeque.back());
        mydeque.pop_back();
    }

    for(auto it = newdeque.begin(); it != newdeque.end(); ++it){
        cout<< ' '<< *it;
    }

    return 0;
}
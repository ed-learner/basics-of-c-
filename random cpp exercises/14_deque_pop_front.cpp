//
// Created by amuteted on 31.01.20.
//
#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> mydeque{}, newdeque{};

    mydeque.push_front(8);
    mydeque.push_front(7);
    mydeque.push_front(6);
    mydeque.push_front(5);
    mydeque.push_front(4);
    mydeque.push_front(3);
    mydeque.push_front(2);
    mydeque.push_front(1);

    //deque becomes 1, 2, 3, 4, 5, 6, 7, 8

    while(!mydeque.empty()){
        newdeque.push_front(mydeque.front());
        mydeque.pop_front();
    }

    for(auto it = newdeque.begin(); it != newdeque.end(); ++it){
        cout<< ' '<<*it;
    }

    return 0;
}


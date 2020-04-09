//
// Created by amuteted on 31.01.20.
//

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> mydeque;

    mydeque.push_front(3);
    mydeque.push_front(2);
    mydeque.push_front(1);

    //deque becomes 1, 2, 3

    mydeque.pop_front();
    //deque becomes 2, 3

    //pop the front
    mydeque.pop_front();

    for(auto it = mydeque.begin(); it != mydeque.end(); ++it){
        cout<< ' '<<*it;
    }

    return 0;
}
//
// Created by amuteted on 31.01.20.
//

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> mydeque;

    mydeque.push_front(5);
    mydeque.push_front(4);
    mydeque.push_front(3);
    mydeque.push_front(2);
    mydeque.push_front(1);

    //deque becomes 1, 2, 3, 4,5

    mydeque.pop_back();
    //deque becomes 1, 2, 3, 4

    for(auto it = mydeque.begin(); it != mydeque.end(); ++it){
        cout<<' '<<*it;
    }


    return 0;
}
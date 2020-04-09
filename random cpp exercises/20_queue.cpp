//
// Created by amuteted on 21.01.20.
//

#include<iostream>

using namespace std;

#define size 5;

int A[size];
int front =-1;
int rear = -1;

//function to check if Queue is empty

bool isEmpty(){
    if(front == -1 && rear ==-1){
        return true;
    }
    else
        return false;
}

//function to insert element in the Queue

void enqueue (int value) {
    if (rear == size-1) {
        cout << "Queue is full\n";
    } else {
        if (front == -1) {
            front = 0;

            rear++;

            A[rear] = value;
        }
    }
}
//function to remove element from the queue
void dequeue(){
    if(isEmpty())
        cout<<"Queue is empty\n";
    else
        if(front==rear){
            front=
    }
}

//
// Created by amuteted on 17.01.20.
//
#include<iostream>

using namespace std;

struct Queue{
    //initialize the front and the rear
    int rear, front;

    //circular buffer
    int size;
    int *arr;

    Queue(int s){
        front = rear = -1;
        size =s;
        arr = new int[s];
    }

    void enQueue(int value);
    int deQueue();
    void displayQueue();
};

/*Function to create  circular queue */
void Queue::enQueue(int value){
    if((front ==0 && rear ==size-1) || (rear ==(front-1)%(size-1))){
        cout<<"\nQueue is Full";
    }

    else if(front==-1) //insert first element
    {
        front=rear=0;
        arr[rear]=value;
    }
    else if(rear == size-1 && front !=0){
        rear =0;
        arr[rear]=value;
    }
    else{
        rear++;
        arr[rear]=value;
    }
}
//Function to delete element from circular Queue
int Queue :: deQueue(){

    if (front == -1){
        cout<<"Queue is Empty";
        return 1;
    }

    int data = arr[front];
    arr[front] =-1;

    if(front == rear){
        front =-1;
        rear = -1;
    }

    else if (front == size-1)
        front =0;
    else
        front++;
    return data;
}

//Function displaying the elements of Circular Queue

void Queue :: displayQueue(){

    if(front == -1){
        cout<<"Queue is empty";
        return;
    }
    cout<<"\nElements in Circular Queue are: ";

    if(rear >= front){
        for(int i =front; i<= rear; i++){
            cout<<arr[i]<<" ";
        }
    }
    else {
        for(int i=front; i<size; i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
}


int main(){
    Queue q(5);

    //inserting elements in Circular Queue

    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);

    //Display elements present in Circular Queue
    q.displayQueue();

    return 0;
}
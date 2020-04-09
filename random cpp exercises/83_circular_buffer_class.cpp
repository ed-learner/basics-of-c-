//
// Created by amuteted on 19.01.20.
//
#include<iostream>

using namespace std;

class circularBuffer{
public:
    circularBuffer(): array(new double[size]){}
    ~circularBuffer() {delete [] array;}

    bool bufferEmpty();
    double bufferEnqueue(double value);
    void bufferDequeue();
    void bufferFront();
    void displayBuffer();
    double bufferSum(double arrayValue);
    double sum =0;
    double a;

private:
    int const size = 3;
    int front = -1;
    int rear = -1;
    double *array;
};

bool circularBuffer::bufferEmpty() {

    if(front ==-1 && rear ==-1){
        return true;
    }
    else
        return false;
}

double circularBuffer::bufferEnqueue(double value) {
    //double array[size];
    if((rear + 1)%size==front){
        cout<<"Queue is full\n"<<endl;


        cout<<"sum "<<a<<endl;
        circularBuffer::displayBuffer();
        cout<<"Delete first element\n"<<endl;
        circularBuffer::bufferDequeue();
        circularBuffer::displayBuffer();
        rear = (rear+1) % size;
        array[rear]= value;
        //circularBuffer::displayBuffer();
        cout<<"sum "<<a<<endl;
    }
    else{
        //first element inserted
        if(front == -1)
            front = 0;
        //insert element at the rear
        rear = (rear+1) % size;
        array[rear]= value;
    }

}

void circularBuffer::bufferDequeue() {

    if(circularBuffer::bufferEmpty()){
        cout<<"buffer is empty"<<endl;
    }
    else{
        //only one element
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%size;
        }
    }

}

double circularBuffer::bufferSum(double arrayValue){


    for (int i=1; i<=size;i++){
        sum += arrayValue;
    }

    return  sum;
}


void circularBuffer::bufferFront(){

    if(circularBuffer::bufferEmpty()){
        cout<<" Buffer is empty"<<endl;
    }
    else{
        cout<<"element at the front is "<<array[front]<<endl;
    }
}

void circularBuffer::displayBuffer() {

    if(circularBuffer::bufferEmpty()){
        cout<<" Queue is empty"<<endl;
    }
    else{
        int i;
        if(front <= rear){
            cout<<"The queue elements are:  ";
            for(i=front; i<= rear; i++)
                cout<<array[i]<<" ";
        }
        else{
            i=front;

            while(i<size){
                cout<<array[i]<<" ";
                i++;
            }
            i=0;
            while(i<=rear){
                cout<<array[i]<<" ";
                i++;
            }
        }

    }
}

int main(){
    circularBuffer a;

    for(int i=1; i<=4;i++) {
        a.bufferEnqueue(i);
    }
    //a.bufferEnqueue(2);
    //a.bufferEnqueue(3);
    //a.displayBuffer();
    //a.bufferEnqueue(4);

    //
    // cout<< a.bufferEnqueue(17);

    //a.bufferFront();
    //a.displayBuffer();

    return 0;
}


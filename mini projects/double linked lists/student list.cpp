#include<iostream>
#include "student_double_list.h"
#include<string>
#include<iomanip>

using namespace std;

void doublelist :: insert_at_start_of_list(string name = "John Doe", int marks = 00){

	node *temp = new node();

	temp->student = name;
	temp->score = marks;
	temp->prev = NULL;
	temp->next = head;

	if(head == NULL){
		tail = temp;
	}

	else{
		head->prev = temp;
	}

	head = temp;
}

void doublelist :: insert_at_end_of_list(string name = "John Doe", int marks = 00){
	node *temp = new node();
	temp->student = name;
	temp->score = marks;
	temp->prev = tail;
	temp->next = NULL;

	if(head == NULL){
		tail = temp;
	}

	else{
		tail->next = temp;
	}

	tail = temp;
}

void doublelist :: print_list_from_last_to_first(){

	node *temp = new node();
	temp = tail;

	while(temp != NULL){
			cout<<temp->student<<setw(20)<<temp->score<<endl;
			temp = temp->prev;
	}
}

void doublelist :: print_list_from_first_to_last(){
	node *temp = new node();
	temp = head;

	while(temp != NULL){
			cout<<temp->student<<setw(20)<<temp->score<<endl;
			temp = temp->next;
	}
}

void doublelist :: insert_at_given_position_of_list(int pos, string name, int marks){

	node *temp = new node();
	node *prevnode = new node();
	node *currnode = new node();

	currnode = head;

		for(int i = 1; i < pos; i++){
			prevnode = currnode;
			currnode = currnode->next;
		}

		temp->student = name;
		temp->score = marks;

		prevnode->next = temp;
		temp->prev = prevnode;
		currnode->prev = temp;
		temp->next = currnode;

}


int  doublelist :: count_students_in_list(){

	node *temp = new node();
    temp = head;
    int count = 0;
	if(head == NULL){
		return count;
	}
	else{
		while(temp != NULL){
			count++;
			temp = temp->next;
	}
    }
return count;

}


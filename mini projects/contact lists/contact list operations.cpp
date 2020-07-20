#include<iostream>
#include<iomanip>
#include "contact.h"

using namespace std;

void list::createcontact(string value = "John Doe", int num = 0000){
	contact*temp = new contact();
	temp-> data = value;
	temp->phonenumber = num;
	temp->next = NULL;

	if(head == NULL){
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else{
		tail->next = temp;
		tail = temp;
	}
}

void list::display(){
	contact *temp = new contact();
	temp = head;
	cout<<"Name"<<setw(25)<<"Phone Number"<<endl;
	cout<<"------------------------------------"<<endl;
	while(temp != NULL){
		cout<<temp->data<<setw(10)<<temp->phonenumber<<endl;
		temp = temp->next;
	}
}

void list::insert_start_contactlist(string value, int num){
	contact *temp = new contact();
	temp->data = value;
	temp->phonenumber = num;
	temp->next = head;
	head = temp;
 }

void list::insert_contact_at_position(int pos = 0, string value = "John Doe", int num = 0000){
	contact* prevnode = new contact();
	contact* curnode = new contact();
	contact* tempnode = new contact();

	curnode = head;

		for(int i=1; i<pos; i++){
			prevnode = curnode;
			curnode = curnode->next;
		}

		tempnode->data = value;
		tempnode->phonenumber = num;
		prevnode->next = tempnode;
		tempnode->next = curnode;

}

void list::delete_first_contact(){
	contact *temp = new contact();
	temp = head;
	head = head->next;
	delete temp;
}

void list::delete_last_contact(){
	contact *currcontact = new contact();
	contact *prevcontact = new contact();

	currcontact = head;

	while(currcontact->next != NULL){
		prevcontact = currcontact;
		currcontact = currcontact->next;
	}

	tail = prevcontact;
	prevcontact->next = NULL;
	delete currcontact;
}

void list::delete_contact_at_position(int pos = 0000){
	contact *currcontact = new contact();
	contact *prevcontact = new contact();
	currcontact = head;

		for(int i = 1; i<pos; i++){
			prevcontact = currcontact;
			currcontact = currcontact->next;
		}

		prevcontact->next = currcontact->next;
}

int list::number_of_contacts(){

	int numberofcontacts = 0;

	contact *currentcontact = new contact();
	currentcontact = head;

	while (currentcontact != NULL){
		numberofcontacts++;
		currentcontact = currentcontact->next;
	}

	return numberofcontacts;
}





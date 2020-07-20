#include<iostream>
#include<string>
#include<sstream>
#include"contact.h"

using namespace std;

int main(){

	string name;
	int number;

	list contact;

	cout<<"Select your operation: \n"
		<<"------------------------------------------\n"
		<<"1: Create new contact \n"
		<<"2: Create a new contact at start of the list\n"
		<<"3: Insert new contact at a given position\n"
	    <<"4: Delete last contact in the list\n"
		<<"5: Delete first contact in list\n"
		<<"6: Delete contact at a given position\n"
		<<"7: Display contact list \n"
	 	<<"8: Exit program \n"<<endl;


	int run = true;
	string oper = "0";
	int operation = 0;
	int numberofcontacts = contact.number_of_contacts();

	while(run){
		//Ensure all entries are integers
		cout<<"\nEnter your operation: ";
		cin>>oper;
		stringstream ss(oper);
		ss>> operation;

		switch(operation){
			case 1:
					cout<<"\nCreating a new contact"<<endl;
					cout<<"----------------------"<<endl;
					cout<<"Enter contact name: ";
					cin.ignore();
					getline(cin,name);
					cout<<"\nEnter phone number: ";
					cin>> number;
					contact.createcontact(name,number);
					break;

			case 2:
					cout<<"\nCreating a new contact at start of the list"<<endl;
					cout<<"----------------------------------------------"<<endl;
					cout<<"Enter contact name: ";
					cin.ignore();
					getline(cin,name);
					cout<<"Enter phone number: ";
					cin>> number;
					contact.insert_start_contactlist(name,number);
					break;

			case 3:
					 cout<<"\nInserting new contact at a given position"<<endl;
					 cout<<"--------------------------------------------"<<endl;
					 cout<<"Enter the position in the list to insert new contact: "<<endl;
					 int position;
					 cin>>position;
					 if (position > numberofcontacts){
					 	   cout<<"Position does not exist in the list"<<endl;
					    }
					 else{
						 cout<<"Enter contact name: ";
						 cin.ignore();
						 getline(cin,name);
						 cout<<"Enter phone number: ";
						 cin>> number;
						 contact.insert_contact_at_position(position,name,number);
					 }
					 break;

			case 4:
					cout<<"\nDeleting last contact created: "<<endl;
					cout<<"----------------------------------"<<endl;
					contact.delete_last_contact();
					break;

			case 5:
					cout<<"\nDeleting first contact in list: "<<endl;
					cout<<"-----------------------------------"<<endl;
					contact.delete_first_contact();
					break;

			case 6:
					cout<<"\nDeleting contact at a given position: "<<endl;
					cout<<"------------------------------------------"<<endl;
					cout<<"Enter the position in the list to delete contact: ";
					int pos;
					cin>>pos;
					if (pos> numberofcontacts){
						cout<<"Contact does not exist in the list"<<endl;
					}
					else{
						contact.delete_contact_at_position(pos);
					}
					break;

			case 7:
					cout<<"\nPrinting the contact list"<<endl;
					cout<<"-------------------------------"<<endl;
					contact.display();
					break;
			case 8:
				   run = false;
				   cout<<"Exiting menu..."<<endl;
				   break;

			default:
				cout<<"\nEnter operation from the menu below"<<endl;
				cout<<"------------------------------------------\n"
					<<"1: Create new contact \n"
					<<"2: Create a new contact at start of the list\n"
					<<"3: Insert new contact at a given position\n"
					<<"4: Delete last contact in the list\n"
					<<"5: Delete first contact in list\n"
					<<"6: Delete contact at a given position\n"
					<<"7: Display contact list \n"
					<<"8: Exit program \n"<<endl;
		}
	}

	return 0;
}



#include<iostream>
#include<sstream>
#include "student_double_list.h"

using namespace std;

int main(){

	string name, oper;
	int score, operation, position, number;

	doublelist student;

	int enterdetails = true;


	cout<<"Student list Operation Menu"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"1: Enter student score at the start of the list"<<endl;
	cout<<"2: Enter student score at the end of the list"<<endl;
	cout<<"3: Print student scores entered Last in list First Out"<<endl;
	cout<<"4: Print student scores entered First in list First Out"<<endl;
	cout<<"5: Insert student score at a given position in the list"<<endl;
	cout<<"6: Count number of students in the list"<<endl;

while(enterdetails){
	cout<<"\nEnter your list operation: "<<endl;

	cin>>oper;
	stringstream ss(oper);
	ss>>operation;

	switch(operation){

	case 1:
		cout<<"Inserting student name and score at start of the list"<<endl;
		cout<<"Enter the name of the student: "<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"Enter the score of the student"<<endl;
		cin>>score;
		while( cin.fail()) {
			cout << "Error: Enter integer as score" <<endl;
			cin.clear();
			cin.ignore(256,'\n');
			cin >> score;
		}
		student.insert_at_start_of_list(name,score);
		break;

	case 2:
		cout<<"Inserting student name and score at end of the list"<<endl;
		cout<<"Enter the name of the student: "<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"Enter the score of the student: "<<endl;
		cin>>score;
		while( cin.fail()) {
			cout << "Error: Enter integer as score" <<endl;
			cin.clear();
			cin.ignore(256,'\n');
			cin >> score;
		}
		student.insert_at_end_of_list(name,score);
		break;

	case 3:
		cout<<"Printing student scores entered from last in list first out..."<<endl;
		student.print_list_from_last_to_first();
		break;

	case 4:
		cout<<"Printing student scores entered from first in list first out..."<<endl;
		student.print_list_from_first_to_last();
		break;

	case 5:
		cout<<"Inserting student score at a given position in the list"<<endl;
		cin>>position;
			number = student.count_students_in_list();

			if(position > number){
				cout<<"Position not in the list"<<endl;
			}
			else{
			cout<<"Enter the name of the student: "<<endl;
				cin.ignore();
				getline(cin,name);
				cout<<"Enter the score of the student: "<<endl;
				cin>>score;
				while( cin.fail()) {
					cout << "Error: Enter integer as score" <<endl;
					cin.clear();
					cin.ignore(256,'\n');
					cin >> score;
				}
			student.insert_at_given_position_of_list(position,name,score);
			}
		break;

	case 6:
		cout<<"Counting number of students in the list"<<endl;
		number = student.count_students_in_list();
		cout<<"There are "<<number<<" students in the list"<<endl;
		break;

	default :
		cout<<"Invalid list operation selected; please select from the menu below:"<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
		cout<<"1: Enter student score at the start of the list"<<endl;
		cout<<"2: Enter student score at the end of the list"<<endl;
		cout<<"3: Print student scores entered Last in First Out"<<endl;
		cout<<"4: Print student scores entered First in Last Out"<<endl;
		cout<<"5: Insert student score at a given position in the list"<<endl;
		cout<<"6: Count number of students in the list"<<endl;
	}
}

	return 0;
}

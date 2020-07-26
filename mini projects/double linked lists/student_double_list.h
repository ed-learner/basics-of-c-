#ifndef STUDENT_DOUBLE_LIST_H_
#define STUDENT_DOUBLE_LIST_H_
#include<iostream>

using namespace std;

struct  node{
	node *prev;
	node *next;
	string student;
	int score;

};

class doublelist{

public:
	doublelist():head(NULL), tail(NULL){};
	~doublelist(){};
	void insert_at_start_of_list(string name, int score);
	void insert_at_end_of_list(string name, int score);
	void print_list_from_last_to_first();
	void print_list_from_first_to_last();
	void insert_at_given_position_of_list(int pos, string name, int score);
	int  count_students_in_list();
	void delete_student_details(int pos);

private:
	node *head;
	node *tail;
};

#endif /* DOUBLELIST_H_ */

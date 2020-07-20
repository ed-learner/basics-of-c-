#ifndef CONTACT_H_
#define CONTACT_H_
#include<string>

using namespace std;

struct contact{
  string data;
  int phonenumber;
  contact *next;

};

class list{
 private:
  	contact *head;
  	contact *tail;
 public:
  	list ():head(NULL),tail(NULL) {}
  	~list(){}

  	void createcontact(string value, int num);
  	void display();
  	void insert_start_contactlist(string value, int num);
  	void insert_contact_at_position(int pos, string value, int num);
  	void delete_first_contact();
  	void delete_last_contact();
  	void delete_contact_at_position(int pos);
  	int number_of_contacts();
};

#endif /* CONTACT_H_ */

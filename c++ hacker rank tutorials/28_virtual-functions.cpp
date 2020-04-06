#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Person {

    public:
        virtual void getdata() {
            cin >> name >>age;
        }
        virtual void putdata() {
            cout << name << " " <<age << endl;
        }

    protected:
        string name;
        int age;
};

class Professor: public Person{
   public:
        Professor() {
                cur_id = ++id;
            }

        void getdata() override {
            cin>>name>>age>>publications;
        }
        void putdata () override{
            cout<<name <<" "<<age<<" "<<publications<<" "<<cur_id <<endl;
        }

    private:
        static int id;
        int cur_id = 0;
        int publications = 0;

};

class Student: public Person{

    public:
        Student() {
            cur_id = ++id;
        }

    void getdata() override{
        cin>>name>>age;
        for(int i =0; i<6;i++){
            cin>>marks[i];
        }
    }
    void putdata() override{
        int sum_marks = 0;
        for(int i = 0; i<6; i++){
            sum_marks += marks[i];
        }
        cout<<name<<" "<<age<<" "<<sum_marks<<" "<<cur_id <<endl;
    }

    private:
        static int id;
        int cur_id = 0;
        int marks[6] = {0};
};

int Professor::id = 0;
int Student::id = 0;


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.

    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

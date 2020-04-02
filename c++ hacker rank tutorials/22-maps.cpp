#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    map<string, int> marks;  //map <key_type, data_type> map of marks with string as key                              //type and integers as data type
    int size_of_map;
    string student_name;
    int mark = 0;
    int querry = 0;

    cin>> size_of_map;

    for (int i = 0; i < size_of_map; i++ ){

        cin>>querry>>student_name;

        switch(querry){

            case 1:
                cin>>mark;
                marks[student_name] += mark; //Add the marks to the student name
                break;

            case 2:
               marks.erase(student_name); //Erase the marks of the student
               break;

            case 3:
               cout<< marks[student_name] <<endl;
               break;
        }
    }

    return 0;
}


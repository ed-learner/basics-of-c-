/* Write a C++ class called Student with private member variables:
   name(string type), mark1 and mark2 (float type)

And member functions:
    GetMarks(int marknumber),
    a function which should return mark1 if marknumber equals 1 and mark2 otherwise.
    calc_average() function should take the two marks entered and return their average.

Also define two constructors:
    A default constructor that takes no parameters and initializes mark numbers to zeros and the name to null.
    A constructor that takes the three private variables and sets them to given values.
*/

class Student{
  public:
         Student() {
           name = "null";
           mark1 = 0;
           mark2 = 0;
         }
         Student(string na, float ma1,float ma2){
           name = na;
           mark1 = ma1;
           mark2 = ma2;
         }

         int GetMarks(int marknumber){
           if (marknumber == 1){
             return mark1;
           }
           else
              return mark2;
         }

         float calc_average(){
           return (mark1 + mark2)*0.5;
         }

    private:
        string name;
        float mark1, mark2;
};

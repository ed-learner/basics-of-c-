/*  Define a parent class named Animal.
    Inside it define: name (protected), age (protected)
    set_data(int a,string b) a function (public) that
    takes age and name parameters and sets them to given values.

    Then there are two derived classes: Zebra, Dolphin.
    The derived classes should have a function that returns
    a string containing a message telling the age and the name as well
     as information about place of origin of that animal.
*/


class Animal{
    protected:
       string  name;
       int age;

    public:
      void set_data (int a, string b){
            age = a;
            name = b;
      }
};

class Zebra:public Animal{
    public:
        string message_zebra(string str){
            str = "The zebra named " + name + " is " + to_string(age) + "years old. The zebra comes from Africa.";
            return str;
        }
};

class Dolphin: public Animal {
    public:
        string message_dolphin(string str){
            str = "The dolphin named " + name + " is " + to_string(age) + "years old. The dolphin comes from New Zeland.";
            return str;
        }
};

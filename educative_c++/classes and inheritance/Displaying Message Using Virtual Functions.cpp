/*You will first build three classes:
    Mammal (parent class), Dog (derived class), Cat (derived class)
    Dog and Cat class will inherit from Mammal.
Mammal class:
    Has one protected variable for age of the mammal.
    A constructor that takes the age of mammal as input and sets it.
    The function Eat() that displays “Mammal eats food”.
    Function Speak() that displays “Mammal speaks mammalian!!”.
    Function get_Age() which returns the age of the mammal.

Dog class:
    Inherits all the members from Mammal class.
    Implement all member functions of Mammal class for Dog class.
    Eat() should display “Dog eats meat”.
    Speak() should display “Dog barks: ruff! ruff!”.
    get_Age() should return Dog’s age.

Cat class:
    Inherits all the members from Mammal class.
    Implement all member functions of Mammal class for Cat class.
    Eat() should display “Cat eats meat”.
    Speak() should display “Cat meows: Meow! Meow!”.
    get_Age() should return Cat’s age.
*/

#include <iostream>
using namespace std;

class Mammal{
    public:
      Mammal(int a){
        age = a;
      }
      virtual void Eat(){
        cout<<"Mammal eats food"<<endl;
      }
      virtual void Speak(){
        cout<<"Mammal speaks mammalian!!"<<endl;
      }
     virtual  int get_Age(){
        return age;
      }

    protected:
      int age;

};

class Dog :public Mammal{
  public:
    Dog(int age=0) : Mammal(age) {}
    void Eat() {
      cout<< "Dog eats meat"<<endl;
    }

    void Speak() {
      cout<< "Dog barks: woof! woof!"<<endl;
    }

    int get_Age() {
      return age;
    }
};

class Cat : public Mammal{

  public:
    Cat(int age = 0) : Mammal(age){}
    void Eat(){
      cout<< "Cat eats meat"<<endl;
    }

    void Speak(){
      cout<<"Cat meows: Meow! Meow!"<<endl;
    }

    int get_Age(){
      return age;
    }
};


int main() {
  Mammal *m;
  Dog d(10);
  Cat c(20);

  cout << "Calling Dog class functions"<<endl;
  m = &d;
  m->Eat();
  m->Speak();

  cout << "Dog's age is: "<<m->get_Age()<<endl;
  cout << "Calling Cat class functions"<<endl;

  m = &c;
  m->Eat();
  m->Speak();
  cout << "Cat's age is: "<<m->get_Age()<<endl;

  return 0;
}

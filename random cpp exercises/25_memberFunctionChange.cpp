//
// Created by amuteted on 13.01.20.
//
class zooAnimal;

class cageAssignment{
private:
    int enclosure;
public:
    inline cageAssignment(int num){
        enclosure =num;
    }; //constructor

    inline ~cageAssignment(){};//destructor function
    void changeCage(zooAnimal&);
    int reptCage(zooAnimal &);
};

class zooAnimal{
    int cageNumber;
};

//member function to move the animal another cage

void cageAssignment :: changeCage(zooAnimal & animalia){
    animalia.cageNumber = enclosure++;
}

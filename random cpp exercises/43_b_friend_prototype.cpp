//
// Created by amuteted on 13.01.20.
//

class zooAnimal;

class cageAssignment{
    int reptcage(zooAnimal&);
};

class zooAnimal{
public:
    zooAnimal(char *, int, int , int); //constructor function
    ~zooAnimal();//destructor function
    void changeWeight(int pounds);
    char *reptName();
    int reptWeight();
    int daysSinceLastWeighed(int today);
    friend int CageAssignment :: reptCage(zooAnimal &);
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
};
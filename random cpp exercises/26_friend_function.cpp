//
// Created by amuteted on 13.01.20.
//
//Declare the class cage assignment is a friend class to zooAnimal

class zooAnimal {
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;

public:
    zooAnimal(char *, int, int,int);//constructor function
    ~zooAnimal();// destructor  function
    void changeWeight(int pounds);
    char *reptName();
    int reptWeight();
    int daysSinceLastWeighed(int today);
    friend class cageAssignment;
};

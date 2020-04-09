//
// Created by amuteted on 13.01.20.
//
class zooAnimal{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;

public:
    zooAnimal(char *who, int whichCage, int weighDay, int pounds);//constructor function
    operator int();//member conversion function
    inline ~zooAnimal(){}; //destructor function
    void changeWeight(int pounds);
    char *reptName();
    int reptWeight();
    int daysSinceLastWeighed(int today);
};

//member conversion function  that converts a type zooAnimal to produce a value of type int
zooAnimal ::operator int(){

    return cageNumber;

}



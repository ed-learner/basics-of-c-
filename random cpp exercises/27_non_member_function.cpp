//
// Created by amuteted on 13.01.20.
//
class zooAnimal{
private:
    char *name;
    int cageNumber;

public:
    static int oldestWeightDate;
    zooAnimal(char *, int, int, int)//constructor function
    void changeOldestWeightDate(int date);
    char * reptName();
    int reptWeight();
    static int reptOldestWeightDate();
    int daysSinceLastWeighed(int today);
};

int zooAnimal::oldestWeightDate; //define static member at global scope

//non member function

int reptOldestZooAnimalWeightDate(){
    return zooAnimal::oldestWeightDate;
}
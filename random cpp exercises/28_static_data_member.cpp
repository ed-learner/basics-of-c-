//
// Created by amuteted on 13.01.20.
//
class zooAnimal{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    static int oldestWeightDate;
public:
    zooAnimal(char *, int , int, int);//constructor function
    void changeWeight(int pounds);
    char *reptName;
    int reptWeight;
    int daysSinceLastWeighed(int today);
    static void changeOldestWeightDate(int);

};

//Define Static at a global scope

int zooAnimal::oldestWeightDate;

void zooAnimal::changeOldestWeightDate(int x){
      oldestWeightDate = x;
};
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
    zooAnimal(char* name, int cageNumber, int WeightDate);
    ~zooAnimal(); //destructor function

    void ChangeWeight (int pounds);
    char * reptName();
    int reptWeight();

    int daysSinceLastWeighed(int today);
};

zooAnimal::zooAnimal(char *who, int whichCage, int weighDay, int pounds){

    char *name = new char[20]; //dynamically allocate the name field 20 characters
    strcpy(name, who); // copy the character string parameter into the name field
    cageNumber = whichCage; //assign  whichCage to cageNumber
    weightDate = weighDay;  //assign weighDay to weightDate
    weight = pounds;  // assign pounds to weight

}


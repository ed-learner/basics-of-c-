//
// Created by amuteted on 14.01.20.
//

class zooAnimal{
private:
    char * name;
    int cageNumber;
    int weightDate;
    int weight;
public:
    zooAnimal(char*, int, int, int);//constructor function
    inline ~zooAnimal(){delete [] name;}; //destructor function
    void changeWeight (int pounds);
    char * reptName();
    int reptweight ();
    int daysSinceLastWeighed(int today);
};

//member function to return the animal name
char *zooAnimal::reptName(){
    return name;
}

class LargeAnimal :

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
    zooAnimal (char*, int, int, int);//constructor function
    inline ~zooAnimal(){delete [] name;};//destructor function
    void changeWeight(int pounds);
    char* reptName();
    virtual char *reptName(); //virtual ensures that all calls to the zooAnimal member function reptName  are passed //
                            //to the matching function in the derived type when called for an object of the derived type
    int reptWeight();
    int daysSinceLastWeighed(int today);
}

class LargeAnimal:public zooAnimal{
private:
    char* species;
    float cageMinimumVolume;
public:
LargeAnimal( char*, int, int, int, float);//constructor function
inline ~LargeAnimal(){delete [] species;};//destructor function
float reptCageMinimumVolume();
char *reptName();
};
//member function to return large Animal Species
char * LargeAnimal::reptName(){
    return species;
}

// an application to use the large animal class
void main(){
    zooAnimal bozo;
    LargeAnimal gonzo;

    cout<<bozo.reptName()<<endl;
    cout<<gonzo.reptName()<<endl; //reptName is large animal member function hence returned by large animal class
    cout<<gonzo.zooAnimal::reptName()<<endl; //reptName is zooAnimal member function hence returned by zooAnimal class
}
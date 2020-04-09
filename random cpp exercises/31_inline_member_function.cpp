//
// Created by amuteted on 13.01.20.
//
enum scale (ounces, kilograms);

class zooAnimal{
private:
    char *name;
    int  cageNumber;
    int  weightDate;
    int  weight;
    zooAnimal *mother;
public:
    void Create (char * who,int whichCage, int weighDate, int weight );//create function
    void Destroy();//destroy function
    void ChangeWeight(int pounds);
    inline void ChangeWeightDate(int today){
        weightDate = today;
    }
    char *reptName();
    int  reptWeight();
    void reptWeight(scale which);
    inline int reptWeightDate();
    void isMotherof(zooAnimal &animals);

};

inline int zooAnimal::reptWeightDate(){
    return weightDate;
}

zooAnimal:: isMotherof(zooAnimal &animals){

    animals.mother = this; //make mother data member of ZooAnimal object parameter a pointer to the zoo Animal object for which this function is called

}






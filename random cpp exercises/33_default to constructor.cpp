// provide parameter default values
// Created by amuteted on 13.01.20.
zooAnimal::zooAnimal(xhar *who="Nameless", int whichCage = 9999, int weighDay=101, int pounds=100){
    char *name = new char[20];
    strcpy(name,who);

    cageNumber = whichcage;
    weightDate = weighDay;
    weight = pounds;
}

//
// Created by amuteted on 13.01.20.
//
class zooAnimal {
public:
    class nutrition{
        int numberMeals;
        int maxPoundsFed;
        float avgNutrValue;

    public:
        inline nutrition(){
            numberMeals =4;
            maxPoundsFed = 75;
            avgNutrValue = 38.21;} //constructor function
            inline float reptMealNutrition(){
            return numberMeals*avgNutrValue;};
        }
    };

    zooAnimal(char *, int, int, int); //constructor function
    float repNutrition();
    private:
        nutrition nutr; //nutr is an object of nutrition class type
};

//member function to return typical nutrition value

float zooAnimal ::reptNutrition(){
    return nutr.reptMealNutrition(); //use object to access the inline function reptMealNutrion
}



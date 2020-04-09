//
// Created by amuteted on 06.01.20.
//

#include<iostream>

using namespace std;

enum e_acompany{
    Audi = 4,
    BMW = 112,
    Cadillac =11,
    Ford =44,
    Jaguar=45,
    Lexus=24,
    Maybach =55,
    RollsRoyce =65,
    SAAB = 111
};

int main(){
    e_acompany my_car_brand;
    my_car_brand = RollsRoyce;

    if (my_car_brand == RollsRoyce){
        cout<<"Hello, RollsRoyce owner!"<<endl;
    }

    return 0;
}


#include <iostream>

using namespace std;

//When a class uses public member access specifier to derive from a base
// all public members of the base class are accessible as public members of the derived class
// and all protected members of the base class are accessible as protected members of
// the derived class (private members of the base are never accessible unless friended)


class Weapon{

public:
    void loadFeatures(){
    cout << "Loading weapon features.\n";
    }
};


class Bomb : public Weapon{

public:
    void loadFeatures(){
     cout << "Loading bomb features.\n";
    }
};


class Gun : public Weapon{

public:
    void loadFeatures(){

    cout << "Loading gun features.\n";

    }
};

int main(){

    Weapon *w = new Weapon;
    Bomb *b = new Bomb;
    Gun *g = new Gun;

    w->loadFeatures();
    b->loadFeatures();
    g->loadFeatures();

    return 0;
}

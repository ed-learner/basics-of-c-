#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Spell {
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell {
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell {
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell {
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
};

string SpellJournal::journal = "";


void counterspell(Spell *spell) {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Fireball *counter_spell_1   = dynamic_cast<Fireball*>(spell);
    Frostbite *counter_spell_2  = dynamic_cast<Frostbite*>(spell);
    Waterbolt *counter_spell_3  = dynamic_cast<Waterbolt*>(spell);
    Thunderstorm *counter_spell_4 = dynamic_cast<Thunderstorm*>(spell);


    if(counter_spell_1 != NULL) {
        counter_spell_1->revealFirepower();
    }

    else if(counter_spell_2 != NULL) {
        counter_spell_2->revealFrostpower();
    }

    else if(counter_spell_3 != NULL) {
        counter_spell_3->revealWaterpower();
    }

    else if(counter_spell_4 != NULL) {
        counter_spell_4->revealThunderpower();
    }

    //Longest Common Subsequence
    else {
        string a = spell->revealScrollName();
        string b = SpellJournal::read();

        vector< vector<int> > dp(a.size() + 1, vector<int> (b.size() + 1));

        for (int i = 0; i <= a.size(); i++) {

            for (int j = 0; j <= b.size(); j++) {

                if (i == 0 || j == 0)
                    dp[i][j] = 0;

                else if (a[i-1] == b[j-1])

                    dp[i][j] = dp[i-1][j-1] + 1;

                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }

        cout << dp[a.size()][b.size()] << endl;

    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            }
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;

    Wizard Arawn;

    while(T--) {

        Spell *spell = Arawn.cast();
        counterspell(spell);

    }

    return 0;
}

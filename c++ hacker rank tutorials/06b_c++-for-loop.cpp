#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;

    cin>>a >>b;

    string number_in_words[9] ={"one","two","three","four","five","six",
                            "seven","eight","nine"};

    for(int i = a;i <= b; i++){

        if (i <= 9){

            cout<< number_in_words[i-1] <<endl;

        }

        else if (i > 9 && i%2 == 0){

            cout<< "even" <<endl;
        }

        else if (i > 9 && i%2 == 1){

            cout<<"odd"<<endl;

        }

    }

    return 0;
}

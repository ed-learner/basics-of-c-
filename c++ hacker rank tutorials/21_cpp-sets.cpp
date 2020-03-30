#include <iostream>
#include <set>


using namespace std;

int main() {
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int number_of_queries;
    int type_of_querry, number;

    set<int> s;

    cin>> number_of_queries;


     for(int i = 0; i<number_of_queries; i++){
         cin>> type_of_querry>> number;

         switch(type_of_querry){
             case 1:
                s.insert(number);
                break;

            case 2:
                s.erase(number);
                break;
            case 3:
                set<int>::iterator itr = s.find(number); //Gives the iterator to the
                                    //element val if it is found otherwise returns s.end()

                if (itr != s.end()){

                    cout << "Yes" << endl;
                    }

                else {
                    cout << "No" << endl;
                }
         }
     }

return 0;

}




#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
   vector <int> extracted_ints;
   stringstream input_string(str); //create a new stream that is
                                   //a stringstream with a  string as source

   int temp_int;
   char comma;

   while(input_string >>temp_int){

       extracted_ints.push_back(temp_int);
       input_string >>comma; //to skip the commas
   }

   return extracted_ints;
}


int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++) {

        cout << integers[i] <<endl;

    }

    return 0;
}

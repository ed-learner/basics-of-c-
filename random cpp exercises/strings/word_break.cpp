//Given a dictionary of words and an input string tell
//whether the input string can be completely segmented into dictionary words.

#include<iostream>
#include<unordered_set>

using namespace std;


bool segment_string(string str, unordered_set<string> & dictionary){

   for(int i = 0; i <= str.length(); i++){

   //string substr (size_t pos, size_t len) const;

    string first_word = str.substr(0,i);
    //set_name.find(element) If element is not found,
    //the iterator points to the position just after the last element in the set.

    if(dictionary.find(first_word) != dictionary.end()){

    //Copy substring after pos i
        string second_word = str.substr(i);

        if( second_word.empty() || dictionary.find(second_word) != dictionary.end()
            || segment_string(second_word, dictionary)){

            return true;
        }
    }
   }

   return false;

}



int main() {

 string str = "thisisit";

 unordered_set<string> dictionary = {"this", "is", "it"};

 if(segment_string(str, dictionary)){

   cout<<"string can be segmented" <<endl;
 }

 else

    cout<< endl<< "string can not be segmented"<<endl;


 return 0;

}

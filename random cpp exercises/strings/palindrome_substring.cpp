#include<iostream>
#include<string>


using namespace std;


bool palindrome(string &str, int i, int j){

    while( j > i){
     if(str[i] != str[j]){

       return false;
     }

     i++;
     j--;
    }

return true;
}


int find_palindrome_substrings(string &str){

    int nr_palindromes = 0;

    for(int i = 0; i< str.size(); i++){

      for(int j = i+1; j < str.size(); j++){

         if (palindrome(str, i, j)){

           string substring = str.substr(i, j-i+1);
           cout<< substring << endl;
           nr_palindromes++;
        }

      }

    }

return nr_palindromes;
}


int main() {

  string str = "sssaaaas";

  cout << "number of palindrome substrings are: "<< endl << find_palindrome_substrings(str) << endl;


  return 0;
}

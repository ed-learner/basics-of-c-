#include <iostream>
#include <map>
#include <string>
#include <sstream>


using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    map<string,string> keyValuePair;

    int number_of_lines, number_of_querries;

    cin >> number_of_lines >> number_of_querries;

    cin.ignore();

    string tagAccessor = "";

    for(int i = 0 ;i < number_of_lines ; i ++){

        string input;
        string word;
        string key = "";

        getline(cin,input);

        stringstream ss(input);

        while(getline(ss, word,' ')){

            char firstCharacter = word[0];

            if(firstCharacter == '='){

                continue;

            }

            if (firstCharacter == '<' && word[1] == '/'){

                //npos a non-position = -1
                //It's returned by method .find when the pattern was not found.

                if(tagAccessor.find(".") == string::npos) {

                    tagAccessor = "";
                    continue;

                }

                tagAccessor = tagAccessor.substr(0, tagAccessor.length() - (word.length() - 3) - 1);

            }

            else if (firstCharacter == '<'){

                string tagId = word.substr(1, word.length() - 1);

                if(tagId.find(">") != string::npos){

                    tagId = tagId.substr(0,tagId.length() - 1);

                }

                if(tagAccessor.compare("") == 0){

                    tagAccessor = tagId;

                }
                else {

                    tagAccessor += "." + tagId;

                }

            }

            else if (firstCharacter == '"'){
                string val = "";

                if(word.find(">") == string::npos){

                    val = word.substr(1, word.length() - 2);

                }

                else{

                    val = word.substr(1, word.length() - 3);

                }

                keyValuePair[key] = val;
            }

            else {

                key = tagAccessor + "~" + word;

            }
        }
    }


    for(int i = 0 ; i< number_of_querries ; i ++){

        string query;

        getline(cin, query);


        auto it = keyValuePair.find(query);


        if(it == keyValuePair.end()){

            cout << "Not Found!" << endl;

            continue;
        }

        cout << it->second << endl;
    }


    return 0;
}

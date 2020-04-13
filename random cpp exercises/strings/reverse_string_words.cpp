#include<string>
#include<iostream>


using namespace std;

void reverse_chars( char *string_start, char *string_end){

  char temp;

  while( string_start < string_end){

    if( string_start != nullptr && string_end != nullptr){
        temp = *string_start;
        *string_start = * string_end;
        *string_end = temp;
      }

   *string_start++;
   *string_end--;

  }

}


void reverse_words( char *str){

   char * word_begin = str;
   char * temp_holder = str;

   while( *temp_holder){

        temp_holder++;

        if(*temp_holder == '\0'){

            reverse_chars(word_begin,temp_holder-1);

        }

        else if(*temp_holder == ' '){

           reverse_chars(word_begin, temp_holder -1);
           word_begin = temp_holder + 1;

        }
   }
  //reverse the whole string
  reverse_chars(str, temp_holder-1);

}


int main(){

 char str[] = "This is a string";

 char *temp = str;

 cout<<"String before word reversal"<<endl;
 cout<<str<<endl;

 reverse_words(str);

 cout<<endl;
 cout<<"String after word reversal"<<endl;
 cout<<str<<endl;

return 0;

}

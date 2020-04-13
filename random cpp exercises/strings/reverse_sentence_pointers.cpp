#include<iostream>
#include<cstring>


using namespace std;

int main() {

//char str[100] = "Hello world";

char str[100] = "";


int string_len = strlen(str);


  if (str == nullptr || string_len < 2) {

    cout<<"No string defined"<<endl;

  }

  char *string_start = str;
  char *string_end = str + string_len - 1;

  while (string_end > string_start) {

    if (string_start != nullptr && string_end != nullptr) {

      char temp = * string_start;
      *string_start = *string_end;
      *string_end = temp;

    }

    string_start++;
    string_end--;
  }

  cout<<str<<endl;

 return 0;
}

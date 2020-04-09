#include<iostream>
#include<map>

using namespace std;

int main(){

map<int,string> map1{{1,"ed"}, {2,"learner"}, {3,"Ned"}};

cout<<"key 1: "<<map1.at(1)<<endl; //prints value associated with key 1 i.e ed
cout<<"key 2: "<<map1.at(2)<<endl; //prints value associated with key 2 i.e learner

//the parameters in the at() are the keys and not the index
cout<<"key 3: "<<map1[3]<<endl; //prints the values associated with key 3

cout<<endl;
cout<<"After change: "<<endl;

map1.at(1) = "king"; //changes the value associated with key 3

map1[2] = "kong"; //changes the value associated with the key 2

cout<<"key 1: "<< map1.at(1)<<endl;
cout<<"key 2: "<<map1.at(2)<<endl;


return 0;

}

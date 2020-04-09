#include<iostream>
#include<iterator>
#include<map>

using namespace std;

int main(){

//empty map container
map<int,int> m;

//insert elements in random order

m.insert(pair<int,int>(1,40));
m.insert(pair<int,int>(2,30));
m.insert(pair<int,int>(3,60));
m.insert(pair<int,int>(4,50));
m.insert(pair<int,int>(5,80));

//printing the map
map<int,int> :: iterator itr;
cout<<"\nThe map is: "<<endl;
cout <<"\tKEY\tElement\n";

for(itr = m.begin(); itr != m.end(); ++itr){
  cout<<"\t"<< itr->first <<"\t"<<itr->second << endl;

}
cout<<endl;

//assigning the elements from m to m1

map<int,int> m1(m.begin(),m.end());
//printing the second map
cout<< "new map 2"<<endl;

for(itr = m1.begin(); itr != m1.end(); itr++){

    cout<< "\t"<<itr->first << "\t"<<itr->second <<endl;
}
cout<<endl;

//remove all elements up to element with key 3

cout<<"m1 after removal of elements less than key = 3: "<<endl;
m1.erase(m1.begin(), m1.find(3));

for(itr = m1.begin(); itr != m1.end(); itr++){

 cout<<"\t"<<itr->first <<"\t"<<itr->second <<endl;

}

//remove all elements with key = 4
int num;

num = m1.erase(4);

cout<<"\nm1.erase(4): "<<endl;
cout<< num <<" removed"<<endl;

cout<<"\tKEY\tElement"<<endl;

for(itr = m1.begin(); itr != m1.end(); ++itr){

    cout<<"\t"<<itr->first <<"\t"<<itr->second<<endl;

}
cout<<endl;
//lower bound and upper bound for map m key = 5

cout<<"\tm.lower_bound(5): " <<"\t KEY";
cout<<"\t"<<m.lower_bound(5)->first <<"\t";
cout<<"\tElement = "<< m.lower_bound(5)->second<<endl;

cout<<"\t"<<"m.upper_bound(5): " <<"\tKEY";
cout<<"\t"<<m.upper_bound(5)->first<<"\t";
cout<<"\tElement = " <<m1.upper_bound(5)->second<<endl;

return 0;

}

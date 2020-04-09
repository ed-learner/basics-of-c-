#include<iostream>
#include<map>

using namespace std;

int main(){

map<int,int> m{{1,2}, {2,3}, {3,4}};

m.insert(pair<int,int>(4,5));
//inserts a new entry of key = 4 and value = 5 in map m
//make_pair can also be used for creating map entries
m.insert(make_pair(5,6));
//inserts a new entry of key = 5 and value = 6

map<int,int>::iterator i;
map<int,int>::iterator j;
map<int,int>::iterator k;
i = m.find(2);  //points to entry having key = 2
j = m.find(5); //points to entry having key = 5

map<int,int> new_m;

new_m.insert(i,j);
//inserts all the entries which are pointed by iterator i to iterator j

m.insert(make_pair(3,6));
//do not insert the pair as map m already contain key = 3

cout<<"Key: "<<"\t"<<"Element"<<endl;

for(k = m.begin(); k != m.end(); k++ ){

cout<<k->first<<"\t"<<k->second<<endl;
}

return 0;
}

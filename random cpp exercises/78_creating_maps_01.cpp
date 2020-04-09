#include <iostream>
#include <map>

using namespace std;

int main (){

    map<int,int> m{ {1,2} , {2,3} , {3,4} };
    /* creates a map m with keys 1,2,3 and
        their corresponding values 2,3,4 */

    map<string,int> map1;
    /*  creates a map with keys of type character and
      values of type integer */

    map1["abc"]=100;    // inserts key = "abc" with value = 100
    map1["b"]=200;      // inserts key = "b" with value = 200
    map1["c"]=300;      // inserts key = "c" with value = 300
    map1["def"]=400;    // inserts key = "def" with value = 400

    map<string,int> map2 (map1.begin(), map1.end());
    /* creates a map map2 which have entries copied
        from map1.begin() to map1.end() */

    map<int,int> map3 (m);
    /* creates map map3 which is a copy of map m */

    map<int,int> ::iterator itr;

    map<string,int> :: iterator itr1;

    for(itr = m.begin(); itr != m.end(); itr++){

        cout<<itr->first<<"\t"<<itr->second<<endl;
    }

    cout<<endl;

    for(itr1 = map2.begin(); itr1 != map2.end(); itr1++){

        cout<<itr1->first <<"\t"<<itr1->second<<endl;

    }

    for(itr = map3.begin(); itr != map3.end(); itr++){
        cout<<itr1->first
    }



    return 0;
}

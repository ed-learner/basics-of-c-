#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number_of_integers;
    cin>> number_of_integers;

    vector<int> arr(number_of_integers,0);

    for(int i=0; i<number_of_integers;i++){
        int number;
        cin>>arr[i];
        //cin>>number;
        //arr.push_back(number);
    }
    sort(arr.begin(), arr.end());

    int number_of_querries;
    int querry;

    cin>> number_of_querries;

    for(int i= 0; i < number_of_querries; i++){
         cin >> querry;

         vector<int>::iterator low_b;
         low_b = lower_bound(arr.begin(), arr.end(), querry);

         int index_of_lower_bound = (low_b - arr.begin());

         if(arr[index_of_lower_bound] == querry){

            cout<<"Yes "<<index_of_lower_bound + 1<<endl;
          }

          else{

              cout<<"No " << index_of_lower_bound + 1<<endl;
          }
    }

    return 0;
}


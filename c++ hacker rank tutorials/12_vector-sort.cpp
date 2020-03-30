#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int number;

    cin>>n;

    vector<int> arr(0,n);

    for(int i = 0; i< n; i++){

     cin>>number;

     arr.push_back(number);

    }

    sort(arr.begin(),arr.end());

    for(int i = 0; i< n; i++){

        cout<<arr[i]<<" ";

    }

    return 0;
}

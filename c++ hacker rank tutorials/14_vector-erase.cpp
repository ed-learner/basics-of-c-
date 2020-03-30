#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int number_of_elements = 0;
    int first_element_delete, range_start, range_end;

    cin >> number_of_elements;

    vector<int>arr(number_of_elements,0);

    for(int i = 0; i < number_of_elements; i++){

        cin>>arr[i];

    }

    cin >> first_element_delete;
    arr.erase(arr.begin() + first_element_delete - 1);

    cin >> range_start >> range_end;
    arr.erase( arr.begin() + range_start - 1, arr.begin() + range_end - 1);

    cout << arr.size() << endl;

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<" ";
    }

    return 0;
}

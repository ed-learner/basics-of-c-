#include <iostream>
#include <algorithm>


using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // get length of 2D array and number of queries
    int length_of_array_2d = 0;
    int length_of_array_1d = 0;
    int number_of_queries = 0;

    cin >> length_of_array_2d >> number_of_queries;

    // create 2D array
    int** arr = new int*[length_of_array_2d]();

    // fill 2D array with 1D subarrays
    for (int i = 0; i < length_of_array_2d; i++) {
        // get the length of the 1D array at a[i]
        cin >> length_of_array_1d;

        // create the 1D subarray with the given length
        int* sub_arr = new int[length_of_array_1d]();

        // fill the subarray with values that are equal to length_of_array_1d specified
        for (int j = 0; j < length_of_array_1d; j++) {
            cin >> sub_arr[j];
        }

        // store the subarray in a
        arr[i] = sub_arr;
    }

    // run queries on array
    for (int querie_nr = 0; querie_nr < number_of_queries; querie_nr++) {
        // use i, j as the 'query index' to get a value from array
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }

    // delete 2D array (each subarray must be deleted)
    for (int i = 0; i < length_of_array_2d; i++) {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}

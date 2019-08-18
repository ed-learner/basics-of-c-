/* Binary search algorithm  using a while loop to search a specific number in a sorted array of integers and
   returning the position of the number in the array and -1 if it is not found.
   
   The main idea behind binary search algorithm is to keep dividing the array in half until the array element being searched is found or
   all the array elements are exhausted.The array middle value is compared with the value being searched and if the two match a bool value
   of true is returned. If the middle value is greater than the value being searched , the search is performed in the left sub-array and 
   If the middle value is less than the value being searched , the search is performed in the right sub-array of the middle value.
   A precondition of this method is that the array on which the search is performed has to be sorted in order from the lowest value to 
   the highest value.
 */

#include<iostream>

using namespace std;

int binary_search(int sortedarray[], int search_number, int sortedarray_len ){
  int low_value_position = 0;
  int high_value_position = sortedarray_len -1;

  while (low_value_position  <= high_value_position ){
    int mid_value = low_value_position  + ((high_value_position -low_value_position )/2);

    if( sortedarray[mid_value] == search_number ){
        return mid_value;
    }

    if (search_number < sortedarray[mid_value]){
        high_value_position  = mid_value - 1;
    }
    else{
       low_value_position  = mid_value + 1;
    }
  }
return -1;
}



int main() {
    int array1[] = {1,2,4,7,8,12, 13,14};
    int array2[] = {1,2,3,4,5,6,7,8,9,10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    cout<<" Binary number search in first array."<<endl;
    for (int i =0; i<=size1 ; i++){
    cout<<" "<< array1[i];
    }
    cout<<"\n Number 7 found at position: "<<binary_search(array1,7,size1)<<endl;
    cout<<" Number 9 found at position: "<<binary_search(array1,9,size1)<<endl;

    cout<<"\n Binary number search in second array."<<endl;
    for (int k =0; k<=size1 ; k++){
    cout<<" "<<array2[k];
    }
    cout<<"\n Number 1 found at position: "<<binary_search(array2,1,size2)<<endl;
    cout<<" Number 11 found at position: "<<binary_search(array2,11,size2)<<endl;

    return 0;
}

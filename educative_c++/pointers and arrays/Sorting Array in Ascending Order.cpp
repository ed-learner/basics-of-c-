/*C++ function called sortAsc to sort an array of ten integer values in ascending order.
  Function sortAsc will accept two arguments, a pointer that points to the array and the second to the array size.
  The function sortAsc returns a pointer that points to the sorted array​.
*/

int *sortAsc(int *arr, int n) {
  int j, k;

  for(j = 0; j<n; j++){
     for(k =j +1; k<n; k++){

        if(*(arr + j) >*(arr + k)){
           int temp = *(arr + j);
           *(arr + j) = *(arr + k);
           *(arr + k) = temp;
        }
     }

  }
    return arr;
}


/*Define a Template Class type function index_of_smallest
that will generalize the function such that it finds
minimum value index for both int and double type array input values.
*/

template<typename T>
int index_of_smallest(T a[], size_t start_index, size_t size){

   int index = start_index;

  for(int i = start_index + 1; i<size; i++ ){

    if(a[i] < a[start_index]){
      a[start_index] = a[i];
      index = i;
    }

  }

  return index;
}

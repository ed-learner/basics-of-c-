/*define a Template Class type function called sort that will
 generalize the function such that it sorts values for
 both int and double type input values
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


template< typename T>
void swap_values(T &v1, T &v2){
   T temp = v1;
   v1 = v2;
   v2 = temp;
}

template<typename T>
void sort( T a[], size_t size){

   for(int i = 0; i < size - 1; i++)
    {
        int index_of_next_smallest = index_of_smallest(a,i, size);
        swap_values(a[i], a[index_of_next_smallest]);
    }

}

//Testing code
string test(int a[], double b[]) {

    string str="";
    sort(a,5);
    sort(b,5);

    for (int i=0; i<5; i++){
      str += to_string(a[i]) + " ";
   }

    for (int i=0; i<5; i++){
      str += to_string(b[i]) + " ";
    }

  return str;

}

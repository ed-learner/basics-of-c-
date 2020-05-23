/*Define a Template Class type function called array_max
that will generalize the function such that it finds
maximum value for both int and double type array input values.
*/

template<typename T>
T array_max( T data[], size_t n) {

    for(int i= 0; i<=n; i++ )
      if(  data[i+1] > data [0]){
          data[0] = data[i+1];
      }

return data[0];
}

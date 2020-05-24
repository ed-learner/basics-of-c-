/*Write a C++ program to display a table that represents a Pascal triangle of any size.
    In Pascal triangle,first and the second rows are set to 1.
    Each element of the triangle (from the third row downward)
    is the sum of the element directly above it and the element
    to the left of the element directly above it.
*/

void printPascalTr(int size) {
   int arr[size][size];

   for (int i = 0; i< size; i++){
     for(int j = 0; j <= i; j++){

       if(i == j || j == 0){

          arr[i][j] = 1;

       }
       else
          arr[i][j] = arr[i-1][j-1] + arr[i-1][j];

          cout<<arr[i][j]<<" "<<flush;
     }

     cout<<endl;
    }

}

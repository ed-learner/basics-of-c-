/*write C++ program to display the matrix with
  0 on the diagonals, 1 on the upper triangle and -1 on the lower triangle.
*/

void test(int n)

   int arr[n][n];

   for (int i = 0; i<n; i++){
       for(int j = 0; j<n; j++){

         if ( i == j){
             arr[i][j] = 0;
         }
         else if( i< j){
             arr[i][j] = 1;
         }
         else if(i> j){
             arr[i][j] = -1;
         }

         cout<<arr[i][j]<<" "<<flush;
       }

       cout<<endl;
   }

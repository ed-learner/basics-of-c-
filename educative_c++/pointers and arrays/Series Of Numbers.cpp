/*write C++ program to display numbers
  from 1 to 25 using a 5 by 5 2D array
*/

void test(int n){

  int arr[n][n];
  int k = 1;

  for (int i = 0; i< n;i++ ){
    for(int j = 0; j<n; j++){

        arr[i][j] = k;
        k++;
        cout<<arr[i][j]<<" " <<flush;
    }

       cout<<endl;
  }
}

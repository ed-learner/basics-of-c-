
void plusMinus(vector<int> arr) {

  int arr_size = arr.size();

  double postiveCount = 0;
  double negativeCount = 0;
  double zerosCount = 0;

   for(int i = 0; i < arr_size; i++){

      if(arr[i] > 0){

          postiveCount ++;
      }

      if(arr[i]<0){

          negativeCount ++;
      }
      if(arr[i] == 0){

          zerosCount++;
      }
   }

   cout<<(postiveCount/arr_size)<<endl;
   cout<<(negativeCount/arr_size)<<endl;
   cout<<(zerosCount/arr_size)<<endl;
}

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar) {

  int maxHeight = *max_element(ar.begin(),ar.end());

  int count = 0;

  for(int i=0; i<= ar.size(); i++){

     if(ar[i] == maxHeight){

         count++;
     }
  }

  return count;
}

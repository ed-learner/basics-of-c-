// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(vector<int> arr) {
 //sort arr

  sort(arr.begin(),arr.end());
  int vect_len = arr.size();

//consider diff between the first pair as minimum
  int minimum = abs(arr[1] - arr[0]);

//compare all consecutive pairs of minimum with the previous to get least minimum
  for(int i= 0; i<vect_len-1; i++ ){

       if (minimum > abs(arr[i+1] - arr[i]) ) {

            minimum = abs(arr[i+1]- arr[i]);

            }
  }

  return minimum;

}

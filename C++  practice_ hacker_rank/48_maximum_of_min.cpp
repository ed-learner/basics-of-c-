// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {

    //sort array
    sort(arr.begin(), arr.end());

    int minimum_value = INT_MAX; //maximum value that int can hold

    for(int i = 0; i < arr.size() - k+1; i++){

        //if the result is smaller than the fairness = max(subarr)- min(subarr)
        //fairness = value of new subgroup

        if((arr[i+k-1] - arr[i]) < minimum_value) {

            minimum_value = ((arr[i+k-1] - arr[i]));
        }
    }

    return minimum_value;

}

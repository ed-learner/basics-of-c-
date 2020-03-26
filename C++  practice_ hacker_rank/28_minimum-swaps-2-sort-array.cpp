int minimumSwaps(vector<int> arr) {

    int numberofSwaps = 0;
    int temp_holder = 0;

    for (int i = 0; i < arr.size(); i++){

        if((i+1) != arr[i]){ //possible because array consists of consecutive numbers

            temp_holder = arr[i];
            arr[i] = arr[arr[i]-1]; //actual swapping
            arr[temp_holder - 1] = temp_holder;
            numberofSwaps++;
            i = 0; //rest counter for the next iteration swap
        }
    }

    return numberofSwaps;
}

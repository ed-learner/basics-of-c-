// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {

    long long maximum_number = 0;
    long long sum = 0;

    long long *arr_sum = NULL;
    arr_sum = new long long [n+2];


    for(int i = 0; i <  queries.size(); i++) {
        long long a = queries[i][0];
        long long b = queries[i][1];
        long long k = queries[i][2];

        arr_sum[a]   += k;
        arr_sum[b+1] -= k;
    }


    for(int i = 1; i <= n; i++) {

        sum = sum + arr_sum[i];

        if (maximum_number < sum) {

            maximum_number = sum;
        }
    }

    return maximum_number;
}

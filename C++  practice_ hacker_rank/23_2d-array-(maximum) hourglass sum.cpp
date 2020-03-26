int hourglassSum(vector<vector<int>> arr) {

    vector<int> hg_sums;
    int hg_sum;

    for (int k = 0; k <= 3; k++){

        for (int j = 0; j <= 3; j++){

            int hg_sum = 0;

            for (int i = 0; i <= 2; i++){ //first row of hour glass

                hg_sum += arr[k][j + i];

            }

            hg_sum += arr[k + 1][j+1];   //middle row of hour glass

            for (int i = 0; i <= 2; i++){ // third row of hour glass

                hg_sum += arr[k + 2][j + i];

            }

            hg_sums.push_back(hg_sum);

        }

    }

    int max_hg_sum = hg_sums[0];

    for (int i = 1; i < 16; i++){

        if (hg_sums[i] > max_hg_sum)
            max_hg_sum = hg_sums[i];

    }

    return max_hg_sum;
}

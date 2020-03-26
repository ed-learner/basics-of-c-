int luckBalance(int k, vector<vector<int>> contests) {

    vector<int>important_contests;
    int luck = 0;

    for (int i = 0; i < contests.size(); i++){

        if (contests[i][1]){

            important_contests.push_back(contests[i][0]);
            luck -= contests[i][0];
        }

        else
            luck += contests[i][0];

    }

    //sort in descending order
    sort(important_contests.begin(), important_contests.end(), greater<int>());

    int n = min(k, (int)important_contests.size());

    for (int i = 0; i < n ; i++){

        luck += 2*important_contests[i];

    }

    return luck;
}

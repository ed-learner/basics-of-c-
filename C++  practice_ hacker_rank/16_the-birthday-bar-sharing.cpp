int birthday(vector <int> s, int d, int m){

    int totalBars = 0;

    int sum = 0;

    for(auto i = s.begin(); i != s.end(); i++){

        if(d == (accumulate(i, (i+m), sum)))

            totalBars++;
    }

    return totalBars;
}

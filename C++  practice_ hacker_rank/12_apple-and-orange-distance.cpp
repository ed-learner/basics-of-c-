void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    int countApples = 0;
    int countOranges = 0;

    for(int i = 0; i < apples.size(); i++){
        if(apples[i] + a >= s && apples[i] + a <= t){
            countApples++;
        }
    }

    for (int i = 0; i < oranges.size(); i++){

        if(oranges[i] + b <= t && oranges[i] + b >= s){
            countOranges++;
        }
    }

    cout<<countApples<<endl;
    cout<<countOranges<<endl;
}

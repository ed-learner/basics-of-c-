int countingValleys(int n, string s) {

    int number_of_valleys = 0 ;
    int level = 0;

    for(int i = 0 ; i < n ; i++){

        if(s[i] == 'U'){
         level ++;
        }

        if(s[i] == 'D'){
            level --;
        }

        if(level == 0 && s[i] == 'U'){
            number_of_valleys ++;
        }
    }

    return number_of_valleys;
}

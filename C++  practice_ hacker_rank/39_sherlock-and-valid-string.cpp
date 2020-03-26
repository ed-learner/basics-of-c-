// Complete the isValid function below.
string isValid(string s) {
    vector<int> fren(26,0);

    for(auto c:s )
        ++fren[c- 'a'];

    for(int i = 0; i < 26; i++){

        for(int j = i+1; j<26; j++)

          if(fren[i] > fren[j]){

            swap(fren[i], fren[j]);
            }
    }

    int i = 0;

    while( fren [i] == 0)
    i++;

    int min = fren [i];
    int max = fren[25];

    if(min == max) {
      return ("YES");
    }

    else if ( (max - min) == 1 && (max > fren[24]))
           return ("YES");

    else if (min == 1 && fren[i+1]==max){
          return ("YES");
    }

    else return "NO";

}

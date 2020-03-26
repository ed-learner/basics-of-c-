// Complete the commonChild function below.
int commonChild(string s1, string s2) {
    //dynamic programming

    int length_string1 = s1.size();
    int length_string2 = s2.size();

    vector<vector<int>> results (length_string1 + 1, vector<int>(length_string2 +1, 0));

    for(int i = 0; i < length_string1; i++){

        for(int j = 0; j < length_string2; j++){

            if(s1[i] == s2[j]) {

                results[i+1][j+1] = 1 + results[i][j];
            }

            else{

                results[i+1][j+1] = max(results[i+1][j], results[i][j+1]);
            }

        }
    }

    return results[length_string1][length_string2];
}

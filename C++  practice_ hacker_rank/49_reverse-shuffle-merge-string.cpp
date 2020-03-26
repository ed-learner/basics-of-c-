// Complete the reverseShuffleMerge function below
//adapted from https://medium.com/@carlosbf/reverse-shuffle-merge-solution-cfc99de8d5e8
//s=eggegg
//we iterate s right to left
//G is required We add G   Sol:{g_0}
//G is required We add G   Sol:{g_0, g_1}
// E is required We add E   Sol:{e_0}
// we backtrack pop g_1, pop g_0
//G is required We add G   Sol:{e_0, g_1}
//G is required We add G   Sol:{e_0, g_1, g_2}
//E is not required        Sol:{e_0, g_1, g_2}
//return Sol

string reverseShuffleMerge(string s){

    static int wrd_count[26]={};
    static int rem_count[26]={};
    static int sol_count[26]={};

    static char sol[10001];

    int n = s.size();
    int j = 0;

    const char* s_chars = s.c_str();

    for(int i = 0; i < n ; i++){
        wrd_count[s[i]-'a']++;
    }

    memcpy(rem_count, wrd_count,26*(sizeof(int)) );

    for(int i = 0; i < 26 ; i++){
        wrd_count[i]/=2;
    }


    char l_char;
    int  l_char_indx;

    for(int i = n-1; i >= 0; i--){

        l_char = s_chars[i];
        l_char_indx = l_char - 'a';

        if(i == n-1){
            sol[j] = l_char;
            j++;
            rem_count[l_char_indx]--;
            sol_count[l_char_indx]++;
            continue;
        }

        if(sol_count[ l_char_indx ] < wrd_count[l_char_indx]){

            if( l_char >= sol[j-1] ){
                sol[j] = l_char;
                j++;
                rem_count[l_char_indx]--;
                sol_count[l_char_indx]++;
            }else{
                while( j>0 && (l_char < sol[j-1]) &&
                sol_count[sol[j-1]-'a']-1+ rem_count[sol[j-1]-'a'] >=
                (wrd_count[sol[j-1]-'a'])){

                    sol_count[sol[--j]-'a']--;
                }
                sol[j] = l_char;
                j++;
                rem_count[l_char_indx]--;
                sol_count[l_char_indx]++;
            }

        }else{
            rem_count[l_char_indx]--;
        }

    }

    sol[j] = '\0';
    string sol_str(sol);

    return sol_str;
}

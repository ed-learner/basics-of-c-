long substrCount(int n, string s) {

    long special_substrings_count;
    string curr_string;
    char curr_char;
    const char* s_chars;

    vector<int> ocurr(n);

    curr_char= '\0';
    s_chars =  s.c_str(); //c_str returns a const char*

    int str_index = -1;

    //case a: The middle character is different but the rest are the same
    //case b: All the characters are the same.

    for(int i = 0; i < n ; i++){

        if(i == 0 || s_chars[i] != curr_char){
            str_index++;
            curr_char = s_chars[i];
            curr_string.append(1, curr_char);
        }

        ocurr[ str_index ]++;
    }

    for(int i = 0; i < curr_string.size(); i++){

        special_substrings_count += (ocurr[i]*(ocurr[i]+1))/2; //count all substrings  that match case a

    }

    for(int i = 1; i < curr_string.size()-1 ; i++){

        if( ocurr[i] == 1  && curr_string[i-1] == curr_string[i+1] ){

                special_substrings_count += min(ocurr[i-1], ocurr[i+1]); //count all substrings  that match case b

        }
    }

    return special_substrings_count;
}

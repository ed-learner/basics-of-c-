/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int total_page_turns = n/2;
    int right_page_turns = p/2;
    int left_page_turns  = total_page_turns - right_page_turns;

    if(right_page_turns > left_page_turns){

        return left_page_turns;
    }
    else{
        return right_page_turns;
    }

}

int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */
     int sum = 0;

     sum = accumulate(ar.begin(),ar.end(),sum);

     return sum;

}

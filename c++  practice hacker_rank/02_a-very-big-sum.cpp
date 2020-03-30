
long aVeryBigSum(vector <long> ar) {

  long long int sum = 0;

  sum = accumulate(ar.begin(), ar.end(), sum );

  return sum;
}

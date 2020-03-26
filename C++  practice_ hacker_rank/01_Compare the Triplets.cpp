
vector <int> compareTriplets(vector<int> a, vector<int> b) {
    int alicepoint = 0;
    int bobpoint = 0;

  for(int i = 0; i <= 2; i++){
       if (a[i]> b[i]){
           alicepoint++;
       }
       else if(b[i]>a[i]){
           bobpoint++;
       }
  }

  return {alicepoint, bobpoint};
}

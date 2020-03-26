// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {

    int count = 0;
    int i = 0;

    sort(ar.begin(),ar.end());

    while (i < (n-1)){

        if(ar[i] == ar[i+1]){

            count += 1;
            i += 2;
         }

        else
            i+=1;
    }

    return count;
}

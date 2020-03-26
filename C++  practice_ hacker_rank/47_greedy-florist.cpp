// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c) {

   //sort the cost from the highest to the lowest
    sort(c.begin(),c.end(), greater<int>());

    int total_min_cost = 0;

    for(int i = 0; i< c.size(); i++){

        int previousPurchases = (i/k);

        total_min_cost += (previousPurchases + 1) * c[i];
    }

    return total_min_cost;
}

// Complete the riddle function below.
vector<long> riddle(vector<long> arr) {

    const int n = arr.size();
    const int inf = INT_MAX;

    vector<long> min_of_max(n, -1);

    stack<int> st;
    vector<int> l(n, 0);

    arr.emplace_back(-inf);

    for (int i = 0; i <= n; i++) {

        while (!st.empty() && arr[i] < arr[st.top()]) {

            int j = st.top();
            st.pop();

            l[j] += i;

            if (!st.empty()){

             l[j] -= st.top() + 1;

            }
        }

        st.push(i);
    }

    for (int i = 0; i < n; i++){

        min_of_max[l[i] - 1] = max(min_of_max[l[i] - 1], arr[i]);

    }

    arr.pop_back();

    min_of_max[n - 1] = *min_element(arr.begin(), arr.end());

    for (int i = n - 2; i >= 0; i--){

        min_of_max[i] = max(min_of_max[i + 1], min_of_max[i]);

    }

return min_of_max;

}

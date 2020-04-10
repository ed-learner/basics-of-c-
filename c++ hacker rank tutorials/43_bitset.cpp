#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    unsigned int N, S, P, Q;

    vector<unsigned int> v;
    vector<unsigned int>::iterator itr;

    cin >> N >> S >> P >> Q;

    //change the vector size automatically when an element is inserted or deleted
    v.resize(N);

    v[0] = S % ((unsigned int)pow(2,31));

    for (int i = 1; i < N; i++){

        v[i] = (v[i-1]* P+Q) % ((unsigned int)pow(2,31));

    }

    //unique removes duplicates elements present consecutively in range[first, last)
    itr = unique(v.begin(), v.end());

    //distance(a, b) find total no. of elements between two iterators a and b
    v.resize(distance(v.begin(), itr));

    cout << v.size();
}

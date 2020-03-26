vector<int> rotLeft(vector<int> a, int d) {

rotate(a.begin(), a.begin()+ d, a.end());

return a;
}

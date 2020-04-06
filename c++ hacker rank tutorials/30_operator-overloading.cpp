#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Matrix{
    public:
        vector<vector<int>> a;//vector of vectors which is a matrix

        //type operator sign (parameters) { /*... body ...*/ }
        Matrix &operator + (const Matrix &M2){
            for(int i = 0; i< M2.a.size(); i++){

                for(int j = 0; j< M2.a[0].size(); j++){
                    this->a[i][j] = this->a[i][j] + M2.a[i][j];
                }
         }

        return *this;

        }

};

int main () {
   int cases,k;
   cin >> cases;

   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;

      cin >> n >> m;

      for(i=0;i<n;i++) {
         vector< int> b;

         int num;

         for(j = 0; j<m; j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }

      for(i = 0;i < n; i++) {

         vector<int> b;
         int num;

         for(j=0;j<m;j++) {
            cin >> num;

            b.push_back(num);
         }

         y.a.push_back(b);
      }

      result = x+y;

      for(i = 0; i < n; i++) {

         for(j = 0;j < m; j++) {

            cout << result.a[i][j] << " ";
         }

         cout << endl;
      }
   }

   return 0;
}

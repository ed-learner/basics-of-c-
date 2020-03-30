/* Enter your macros here */
#include <iostream>
#include <vector>

#define toStr(ans) #ans
#define io(value) cin >> value
#define INF 10000
#define foreach(value, pos) for(int pos = 0; i < value.size(); pos++)
#define FUNCTION(min_max, greater_less_than) void min_max(int& a, int b) { if (b greater_less_than a) a = b; }

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif


using namespace std;


FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}

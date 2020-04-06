#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>


using namespace std;

class Server {

private:
	static int load;

public:
	static int compute(long long A, long long B) {
		load += 1;

		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}

		vector<int> v(A, 0);

		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);

		return real + A - B*ans;
	}

	static int getLoad() {
		return load;
	}
};


int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;

		/* Enter your code here. */

        string output;

        int x;

        //If the compute function runs fine with the given arguments
        //then print the result of the function call
        try {

            x = Server::compute(A, B);
            output = to_string(x);

        }

        //Fails to allocate the memory that it needs
        //print Not enough memory.
        catch (bad_alloc& e) {

            output = "Not enough memory";

        }
        //other standard C++ exception occurs
        //print Exception: S where  is the exception's error message.
        catch (exception& e) {

            output = "Exception: " + (string)e.what();
            // what() Returns a null terminated character sequence
            //that may be used to identify the exception.

        }
        //non-standard exception occurs
        //print Other Exception.
        catch (int n) {
            output = "Other Exception";
        }

        cout << output << endl;

	}
	cout << Server::getLoad() << endl;
	return 0;
}

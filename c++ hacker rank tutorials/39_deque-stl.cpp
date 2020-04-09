#include <iostream>
#include <deque>

using namespace std;


void printKMax(int arr[], int n, int k){
    deque<int> double_ended_que;

    for (int i= 0; i< n; i++){
         // base case for first element
        if(double_ended_que.empty()){

            double_ended_que.push_back(i);

        }

        // remove elements outside the current window
        if(double_ended_que.front() <= (i-k)){

            double_ended_que.pop_front();

        }

        // move max element to the front
        while (!double_ended_que.empty() && arr[i] >= arr[double_ended_que.back()]){

            double_ended_que.pop_back();
        }

        double_ended_que.push_back(i);

        // print out only when the first window is completed
        if(i>=(k-1)){
            cout<< arr[double_ended_que.front()]<< " ";
        }
    }

    cout<<endl;
}


int main(){

	int t;
	cin >> t;

	while(t>0) {

		int n,k;
    	cin >> n >> k;

    	int i;

    	int arr[n];

    	for(i=0;i<n;i++){
      		cin >> arr[i];
        }
    	printKMax(arr, n, k);
    	t--;
  	}

  	return 0;
}

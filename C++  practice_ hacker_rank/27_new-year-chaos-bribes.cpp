void minimumBribes(vector<int> q) {

    int number_of_bribes = 0;

    for(int i = q.size()-1; i>=0; i--){

        if (q[i] - (i+1) > 2){
             // person bribed more than two times ie the difference betwen the ith
             //person and the i + 1 person is more than 2  meaning the ith person
             //has  bribed more than two people to be in his current position
            cout<< "Too chaotic" << endl;

            return;
        }

       //count number of people ahead of the you
        for(int j = max(0, q[i]-2); j < i; j++){
            if(q[j]>  q[i]){

            number_of_bribes++;

            }
        }

    }

    cout<< number_of_bribes<<endl;
}

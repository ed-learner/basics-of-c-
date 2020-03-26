int getTotalX(vector<int> a, vector<int> b){

    bool divisible = true;
    int count = 0;
    int a_lastValue = a.back();
    int b_firstValue = b.front();

    for(int i = a_lastValue; i <= b_firstValue; i++){

        for(vector<int>::iterator it = a.begin(); it != a.end(); it++){

            if(i % *it != 0){
                divisible = false;
                break;
            }
        }

        if(divisible == true){

            for(vector<int>::iterator it = b.begin(); it != b.end(); it++){

                if(*it % i != 0){
                divisible = false;
                break;
                }
            }
        }

        if(divisible == true)

            count++;

        else

            divisible = true;
    }

    return count;
}

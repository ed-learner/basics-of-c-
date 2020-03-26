int jumpingOnClouds(vector<int> c) {

    int size_of_jump = 0;
    int number_of_jumps = 0;
    int number_of_clouds = c.size();
    int i = 0;

    while(i < (number_of_clouds-1)){

        if(c[i+2]==1){
            size_of_jump = 1;
        }

        else if(c[i+1]==1){
            size_of_jump = 2;
        }

        else
            size_of_jump = 2;
            i = i + size_of_jump;
            number_of_jumps++;

    }

    return number_of_jumps;
}

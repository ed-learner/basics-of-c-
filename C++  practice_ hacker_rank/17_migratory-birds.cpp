int migratoryBirds(vector<int> arr) {

    int type_of_bird = 0;
    int number_of_observations = 0;
    int current_number_of_observations = 0;
    int total_observations = arr.size();

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for(int i = 1; i <total_observations; i++)
    {
        if(arr.at(i) == arr.at(i-1))
        {
            current_number_of_observations++;
        }
        else
        {
            current_number_of_observations = 1;
        }

        if(current_number_of_observations >= number_of_observations)
        {
            number_of_observations = current_number_of_observations;
            type_of_bird = arr.at(i);
        }

    }

    return type_of_bird;
}

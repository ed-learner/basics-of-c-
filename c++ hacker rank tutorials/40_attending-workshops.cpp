#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshops{

    int start_time;
    int duration;
    int end_time;

};

struct Available_Workshops{

    int number_of_workshops;
    vector<Workshops> w;
};

//with a pointer to structure, members are accessed using arrow -> instead of the dot .
Available_Workshops *initialize(int *start_time, int *duration, int n){

    Available_Workshops *available_wkshps = new(Available_Workshops);
    Workshops wkshps;

    available_wkshps->number_of_workshops = n;

    for(int j= 0; j < n; j++){
        wkshps.start_time = start_time[j];
        wkshps.duration = duration[j];
        wkshps.end_time = start_time[j] + duration[j];
        available_wkshps->w.push_back(wkshps);
    }

    return available_wkshps;
}

bool compare(Workshops first_wkshp, Workshops second_wkshp){

    return (first_wkshp.end_time < second_wkshp.end_time);
}

int CalculateMaxWorkshops(Available_Workshops *ptr){
    //sort workshops by their end times
    sort(ptr->w.begin(), ptr->w.end(), compare);

    //interval scheduling
    int last_end_time = -1;
    int maximum_wkshps = 0;

    for(int i = 0; i< ptr->number_of_workshops; i++){
        if(ptr->w[i].start_time >= last_end_time){
            last_end_time = ptr->w[i].end_time;
            maximum_wkshps++;
        }
    }

    return maximum_wkshps;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;

    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];


    for(int i=0; i < n; i++){

        cin >> start_time[i];

    }

    for(int i = 0; i < n; i++){

        cin >> duration[i];

    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);

    cout << CalculateMaxWorkshops(ptr) << endl;

    return 0;
}

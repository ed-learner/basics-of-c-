//
// Created by amuteted on 24.11.19.
//
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

double pi = 3.1452;

vector<double> rotate(vector<double> inputVec, double angle ){

vector<double> rotated_m {{0.0,0.0, 0.0}};

vector<vector<double>> R{{cos(angle), -sin(angle), 0.0}, {sin(angle), cos(angle), 0.0}, {0.0, 0.0, 0.0}};



for ( int i = 0; i < R.size(); i++) {
for (int j =0; j< inputVec.size(); j++)
rotated_m[i] += R[i][j]*inputVec[j];
cout<<rotated_m[i]<< endl;

}
/*
    for (int i = 0; i < R.size(); i++) {
        for (int j = 0; j < R[i].size(); j++)
            cout << R[i][j] << " ";
        cout << endl;
    }
*/
return rotated_m;
}

vector <double> velocity (vector<double> inputVec, double accel_long, double angle, double dt){

    vector<double> accel_tan {{0.0,0.0, 0.0}};
    vector<double> accel_fwd {{0.0,0.0, 0.0}};
    vector<double> total_accel {{0.0,0.0, 0.0}};
    vector<double> vel;

    vector<double> R_tan = rotate(inputVec,(angle + pi/2));
    vector<double> R_fwd = rotate(inputVec,(angle));

        for (int i = 0; i < R_tan.size(); i++) {

            accel_tan[i] += R_tan[i] * accel_long * sin(angle);
        }

        for (int i = 0; i < R_fwd.size(); i++) {

            accel_fwd[i] += R_fwd[i] * accel_long * cos(angle);
        }

        for (int i = 0; i <  accel_fwd.size(); i++) {
            for (int j = 0; j <  accel_tan.size(); j++)

                total_accel[i] += accel_tan[j] + accel_fwd[i];


        }


    for (int i = 0; i < vel.size(); i++) {
        for (int j = 0; j <  total_accel.size(); j++)

            vel[i] += total_accel[j]*dt;

    }

    return vel;
}

int main(){

    vector<double> inputVec {{0.0,2.0, 0.0}};
    double angle = 5;
    double accel_long =0.5;
    double dt = 0.1;


    vector<double> R_tan = rotate(inputVec,(angle + pi/2));
    //vector<double> R_forward = rotate(inputVec,(angle));

    vector<double> vel = velocity (inputVec,accel_long, angle, dt);


    return 0;
}

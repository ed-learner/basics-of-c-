//
// Created by amuteted on 28.11.19.
//

#include<iostream>
#include<math.h>

using namespace std;

class pos_vel_update3d{

public:

    pos_vel_update3d(){} //constructor

    pos_vel_update3d(double x, double y, double z);

    pos_vel_update3d(const pos_vel_update3d &v){
        x_=v.x();
        y_=v.y();
        z_=v.z();
    }

    const double x() const{return x_;} //setters
    const double y() const{return y_;}
    const double z() const{ return z_;}

    pos_vel_update3d  vel_3d_update(const pos_vel_update3d &curr_vel, const pos_vel_update3d &prev_vel);


private:
    double x_;
    double y_;
    double z_;

    double curr_vel_x =0.0;
    double curr_vel_y =0.0;
    double curr_vel_z =0.0;

    //pos_vel_update3d vel( double &x, double &y, double &z);
};


pos_vel_update3d pos_vel_update3d::vel_3d_update(const::pos_vel_update3d &curr_vel, const::pos_vel_update3d &prev_vel){

    curr_vel_x = curr_vel.x() + prev_vel.x();
    curr_vel_y = curr_vel.y() + prev_vel.y();
    curr_vel_z = curr_vel.z() + prev_vel.z();


    return::pos_vel_update3d( curr_vel_x, curr_vel_y, curr_vel_z);
};


int main(){

    pos_vel_update3d   vec1(0,0,6);
    pos_vel_update3d   vec2(2,4,6);
    pos_vel_update3d   p;

    p.vel_3d_update(vec1,vec2);

    return 0;
}

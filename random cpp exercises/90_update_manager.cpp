//
// Created by amuteted on 28.11.19.
//

#include <iostream>
#include<math.h>

using namespace std;

class vector3d {

public:
    vector3d(){} //constructor

    vector3d(double x, double y, double z);

    vector3d(const vector3d &v){
        x_=v.x();
        y_=v.y();
        z_=v.z();
    }

    const double x() const{return x_;} //setters
    const double y() const{return y_;}
    const double z() const{return z_;}


    vector3d operator+(const vector3d &v) const; //operators
    vector3d& operator+=(const vector3d &rhs); // return by reference better since you are not copying bt returning by address
    static vector3d vel_update(const::vector3d &curr_value);
    static vector3d pos_update(const::vector3d &curr_pos);
    //vector3d::rotate (const::vector3d &v, const double angle )




private:
    double x_;
    double y_;
    double z_;


};


vector3d::vector3d(double x, double y, double z){
    x_ = x;
    y_ = y;
    z_ = z;
}

vector3d vector3d::operator+(const::vector3d &v) const{

    return::vector3d(x_ + v.x(), y_ + v.y(), z_ + v.z());
}

vector3d& vector3d::operator+=(const vector3d &rhs) {

    this->x_ += rhs.x_;
    this->y_ += rhs.y_;
    this->z_ += rhs.z_;

    return *this;
}

ostream &operator<<(ostream &output, const::vector3d &v) { //due to its signature(ostream &output, arguments) do not include it as a member function
    //if the function uses arguments from the private values make it a friend of the class, otherwise use is as a free function

    output<< v.x() <<" "<< v.y() <<" "<< v.z() <<endl;

    return output;
}


vector3d vector3d::vel_update(const::vector3d &curr_vel){
    double initial_vel_x;
    double initial_vel_y;
    double initial_vel_z;

    initial_vel_x += curr_vel.x();
    initial_vel_y += curr_vel.y();
    initial_vel_z += curr_vel.z();

    return::vector3d( initial_vel_x, initial_vel_y, initial_vel_z);
};

vector3d vector3d::pos_update(const::vector3d &curr_pos){
    double initial_pos_x;
    double initial_pos_y;
    double initial_pos_z;


    initial_pos_x += curr_pos.x();
    initial_pos_y += curr_pos.y();
    initial_pos_z += curr_pos.z();

    return::vector3d( initial_pos_x, initial_pos_y, initial_pos_z);
};


int main(){
    vector3d vel(6.0, 3.0, 0.0);
    vector3d pos(2.0, 3.0, 0.0);

    vel = vel + pos;

    vector3d::vel_update(vel);



    cout<<pos;
    cout<<vel;

    return 0;
}
//
// Created by amuteted on 25.11.19.
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
    vector3d operator-(const vector3d &v) const;
    vector3d operator*(const double multiplier) const;
    vector3d operator/(const double divisor) const;
    vector3d& operator+=(const vector3d &rhs); // return by reference better since you are not copying bt returning by address


    static vector3d rotate (const vector3d &v, const double angle ); //functions
    vector3d normalized() const;
    double  vectorNorm() const;
    static double  dot(const vector3d &v, const vector3d &vec2);
    static void print(const vector3d &v);
    double dotproduct(const vector3d &v1, const vector3d &v2);



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

vector3d vector3d::operator-(const::vector3d &v) const{

    return::vector3d(x_ - v.x(), y_ - v.y(), z_ - v.z());
}

double vector3d::vectorNorm() const{
    return  sqrt(x_*x_ + y_*y_+ z_*z_);
}

double vector3d::dot(const::vector3d &vec1, const::vector3d &vec2) {
    return vec1.x()*vec2.x() + vec1.y()*vec2.y() + vec1.y()*vec2.z();
}

vector3d vector3d::operator*(const double multiplier) const{
    return::vector3d(x_*multiplier, y_*multiplier, z_*multiplier);
}


vector3d vector3d::operator/(const double divisor) const{
    if(divisor == 0.0){
        return::vector3d(0.0, 0.0, 0.0);
    }
    return::vector3d(x_/divisor, y_/divisor, z_/divisor);
}


vector3d vector3d::normalized() const {
    auto length = vectorNorm();
    if(length == 0.0){
        return::vector3d(0.0, 0.0, 0.0);
    }
    return::vector3d(x_/length, y_/length, z_/length);

}


vector3d vector3d::rotate (const::vector3d &v, const double angle ){

    return::vector3d(v.x()*cos(angle) - v.y()*sin(angle) + 0.0, v.x()*sin(angle)+ v.y()*cos(angle) + 0.0, 0.0);
}

void vector3d::print(const::vector3d &v){

    cout<< v.x() <<" "<< v.y() <<" "<< v.z() <<endl;


}
ostream &operator<<(ostream &output, const::vector3d &v) { //due to its signature(ostream &output, arguments) do not include it as a member function
                                                            //if the function uses arguments from the private values make it a friend of the class, otherwise use is as a free function

    output<< v.x() <<" "<< v.y() <<" "<< v.z() <<endl;

    return output;
}


vector3d& vector3d::operator+=(const vector3d &rhs) {

    this->x_ += rhs.x_;
    this->y_ += rhs.y_;
    this->z_ += rhs.z_;

    return *this;
}

/*double vector3d::dotproduct(const:: vector3d &v1, const::vector3d &v2){

    this->v1.x()*v2.x()+v1.y()*v2.y()+v1.z()*v2.z();

    return *this;
}
*/

int main(){

     double a = 8;
     double inv_rad = 0.25;
     double angle = 0.1;
     double accel_long = 0.2;
     double pi = 3.145;
     double dt = 0.1;
     double ang_vel;

     vector3d   vec1(0,0,6);
     vector3d   vec2(2,4,6);


    /* vector3d  vec3 = vec1 + vec2;
     vector3d  vec4 = vec1*a;
     vector3d  vec5 = vec1-vec2;
     vector3d  vec6 = vec1/a;

     vector3d::print(vec1);
     vector3d::print(vec2);
     vector3d::print(vec3);
     vector3d::print(vec4);
     vector3d::print(vec5);
     vector3d::print(vec6);

     vector3d::print((vector3d::rotate(vec2, angle)));
     */

     vector3d vel(6.0, 3.0, 0.0);
     vector3d pos(2.0, 3.0, 0.0);


     vector3d fwd_vec(cos(angle), sin(angle), 0.0);

     vector3d accel_fwd (vector3d::rotate(fwd_vec,angle) *accel_long *sin(angle));
     vector3d accel_tan (vector3d::rotate(fwd_vec,(angle+pi/2)) *accel_long *cos(angle));
     vector3d accel_total = accel_fwd + accel_tan;

     ang_vel = vector3d::dot(accel_tan, (vector3d::rotate(fwd_vec,pi/2)*dt*inv_rad));

     vel+= vel + (accel_total*dt);
     pos+= (vel*dt);

     angle= angle+ ang_vel*dt;

     vector3d::print(accel_tan);
     vector3d::print(accel_fwd);
     vector3d::print(accel_total);
     vector3d::print(vel);
     vector3d::print(pos);

     cout<<a<<endl;
     cout<<ang_vel<<endl;
     cout<<pos;

     cout<<angle<<endl;

    return 0;
}
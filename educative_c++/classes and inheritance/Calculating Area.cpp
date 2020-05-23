/*Write a class having two float type variables for length and height,
a default constructor and one member function called area
which will return the area of the right angle triangle.
*/

class Triangle{
  public:
    float length, height;
    Triangle(){
      length = 0;
      height = 0;
    }

    float area(){
      return 0.5*length*height;
    }

};


float test(float length, float height) {

  Triangle a;
  a.length = length;
  a.height = height;

  float answer;

  cout <<"Area: "<<endl;
  answer = a.area();

  return answer;
}

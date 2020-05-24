/*Write a function void computeCubes which:
  takes three integers num1, num2, num3 as input.
  computes the cube of all three values.
  This function is void type hence doesn’t return any values.(need to use pass by reference).
*/

//define your function here
void computeCubes(int &num1, int &num2, int &num3){

     num1 = num1*num1*num1;
     num2 = num2*num2*num2;
     num3 = num3*num3*num3;

}

string test(int num1, int num2, int num3){

  string ans="";

  //call computeCubes function here
  computeCubes(num1,num2,num3);

  cout<< "Value of num1 is: "<< num1 <<endl;
  cout <<"Value of num2 is: " << num2 <<endl;
  cout<<"Value of num3 is: "<< num3<<endl;

  //the line of code below is for testing purposes. You don't need to change this
  ans = to_string(num1) + " " + to_string(num2) + " " + to_string(num3); //converting all three values to strings

  return ans;
}

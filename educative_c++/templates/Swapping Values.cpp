
 /*define a Template Class type function called swap_values
 that will generalize the function such that it
 finds swaps values for both int and double type input values
 */

template< typename T>
void swap_values(T &v1, T &v2){
   T temp = v1;
   v1 = v2;
   v2 = temp;
}

//Code to test your code
string test(int v1, int v2, double v3, double v4){
  string str="";
  swap_values(v1,v2);
  swap_values(v3,v4);
  str = to_string(v1) + " " + to_string(v2) + " " + to_string(v3) + " " + to_string(v4);
  return str;
}

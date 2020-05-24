/* Print the multiplication table of a number up to 10.
   You have to use while loop for solving this problem.
   Your code should return the string ans with all
   the values computed from multiplication appended in that string.
*/

string test(int num) {

  string ans;

  int i = 1;
  while(i <= 10){
    int multiplication = i*num;
    string result = to_string(multiplication);
    ans = ans + " " + result;
    i++;
  }

  return ans;
}

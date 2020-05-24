/*write Fibonacci Sequence of a given number.
 You have to print the sequence up to the
 given range which is passed as a parameter to the test function.

 Your code should return the string variable ans
 which will have all the Fibonacci values computed upto the given range appended in that string.
*/

string test(int range)
{
    string ans = " ";
    cout << "Fibonacci Series upto " << range << " Terms "<< endl;

    int first = 0;
    int second = 1;
    int fibonacci = 0;

    cout << "Fibonacci Series upto " << range << " Terms "<< endl;

    for ( int i = 0 ; i < range ; i++ ){
        if ( i <= 1 ){
            fibonacci = i;
            ans =  ans + " " + to_string(fibonacci);
        }

        else {
            fibonacci = first + second;
            first = second;
            second = fibonacci;
            ans =  ans + " " + to_string(fibonacci);
        }

        cout << fibonacci <<" ";

    }

    return ans;
}

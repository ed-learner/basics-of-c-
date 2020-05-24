/* Implement Fibonacci series using Recursion instead.
   You’re given the function fibonacci that takes integer n
   that tells the range up to which you want to calculate the series.
*/

int fibonacci(int n){
   int fib = 0;

   if(n == 0 || n == 1){

     fib = n;
   }

   else{

     fib = fibonacci(n-1) + fibonacci(n-2);

   }

  return fib;
}

//function to test your code
string test(int n) {
    int i=0;
    string ans="";
    cout<<"\nFibonacci Series is as follows\n";

    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        ans += std::to_string(fibonacci(i))+" ";
        i++;
    }

    return ans;
}

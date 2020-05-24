/* In this exercise you have to write a function DigitSum
    to find the sum of digits of a number using recursion.
*/
int DigitSum(int n1){

    int sum = 0;

    if(n1 == 0){
        sum =  0;
    }
    else {
        sum = (n1%10) + DigitSum(n1/10);
    }

    return sum;
}

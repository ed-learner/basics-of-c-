/*Write a code which will take:
    Two float type variables named num1 and num2

    a char type variable called Operator

    The Operator variable can be passed the following: +,-,* and /
    Use switch statements to compute:

    addition,
    subtraction,
    multiplication
    division
*/

float test(float num1, float num2, char Operator)
{
    //temp will contain the final answer after the required operation is performed
    float temp; //return temp for each switch operation

    cout<<"Number 1 is: " << num1 << endl;
    cout<<"Number 2 is: " << num2 << endl;
    cout << "Operator is: "<<Operator<<endl;

    //write your code for switch statements here

    switch(Operator){

        case '+':
            temp = num1 + num2;
            break;

        case '-':
            temp = num1 - num2;
            break;

        case '*':
            temp = num1 * num2;
            break;

        case '/':
            temp = num1/num2;
            break;

        default:
            cout<<" Operator not known"<<endl;
            break;
    }

    return temp;
}

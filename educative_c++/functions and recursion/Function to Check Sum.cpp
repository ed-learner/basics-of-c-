/* Write a function checkSum which takes two integers num1 and num2.
    pass by value method is used to pass the arguments to function.
    Has a check variable whose value gets updated as explained below.
    Adds num1 and num2, and checks if their sum is less than 100 in which case

    it prints sum is less than 100.
    sets the value of the check variable to 0.
    If sum is greater then 100

    it prints sum is greater than 100.
    sets the value of the check variable to 1.
    If sum is equal to 100 it prints sum is equal to 100
    sets the value of the check variable to 2.
    At the end it will return the check variable.
*/

int checkSum(int num1, int num2) {
    int check = -1;

    cout << "Comparing the value to 100"<<endl;

    int sum = num1 + num2;
    if (sum <100){
        check = 0;
        cout<<"sum is less than 100";
    }
    else if (sum>100){
        check = 1;
        cout<<"sum is greater than 100";
    }
    else if (sum == 100){
        check = 2;
        cout<<"sum is equal to 100";
    }

    return check;
}

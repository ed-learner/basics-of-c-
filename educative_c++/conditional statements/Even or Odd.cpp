/* Write a code which will
   check whether a given integer number is even or odd */

int test(int number){
    int temp;

    cout << "Computing whether " << number << " is an even or odd integer"<<endl;

    if (number %2 == 0){
        temp = 0;
    }

    else{
        temp = 1;
    }

    return temp;
}

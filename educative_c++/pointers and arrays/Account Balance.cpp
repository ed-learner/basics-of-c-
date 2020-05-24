/*Use pointers to Update Account Balance:
    Make functions
        Withdraw: a void function that takes two parameters:
                1) a pointer to the balance in account.
                2) the amount to be withdrawn from account, also of type double.
                Add a check so that the amount is only withdrawn if it is less then total balance in the account.
                Otherwise it should display: "You are broke. You don’t have enough money. Go away"

        Deposit: a function that takes two parameters:
                       1) a pointer to the balance in account.
                       2) the amount to be deposited in the account, also of type double.
                        The function should add the required amount into the account.

*/

void withdraw(double* balance, double amount) {
    if (*(balance) < amount){
        cout<<"You are broke. You don’t have enough money. Go away"<<endl;
    }
    else{
        *(balance) = *(balance) - amount;
    }
}

void deposit(double* balance, double amount) {
    *(balance) += amount;
}

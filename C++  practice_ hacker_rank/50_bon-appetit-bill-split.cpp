void bonAppetit(vector<int> bill, int k, int b) {
    int exclude_item = bill[k];

    int bill_sum = 0;

    bill_sum = accumulate(bill.begin(),bill.end(),bill_sum);

    int total_pay_ann = (bill_sum - exclude_item)/2;

    if( total_pay_ann == b){
        cout<<"Bon Appetit";
    }

    else{
        cout<< b - total_pay_ann;
    }

}

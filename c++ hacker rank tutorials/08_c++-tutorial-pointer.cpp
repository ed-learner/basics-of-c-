#include <stdio.h>
#include <iostream>

using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int val_a = *a + *b;
    int val_b = abs(*a - *b);
    cout<<val_a<<endl;
    cout<<val_b<<endl;
}

int main() {

    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}

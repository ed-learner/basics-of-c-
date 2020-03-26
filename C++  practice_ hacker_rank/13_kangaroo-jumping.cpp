string kangaroo(int x1, int v1, int x2, int v2) {

    int distanceK1 = x1 + v1;
    int distanceK2 = x2 + v2;

    string Y = "YES";
    string N = "NO";

    if (x2 > x1 && v2 > v1){
        return N;
    }

    if (x2 > x1 && v2 == v1){
        return N;
    }

    if((x1 - x2) % (v2 - v1) == 0){
        return Y;
    }

    else {
         return N;
     }
}

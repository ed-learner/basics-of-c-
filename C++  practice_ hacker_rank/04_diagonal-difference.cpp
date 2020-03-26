
int diagonalDifference(vector<vector<int>> arr) {

    int first_diagonal = 0;
    int second_diagonal = 0;
    int difference = 0;

      for(int i = 0; i < arr.size(); i++){

          for(int j = 0; j < arr.size(); j++){

              if(i ==j){

                first_diagonal += arr[i][j];
              }

              if ((i+j) == ((arr.size())-1)){

                second_diagonal += arr[i][j];
              }
          }
      }

      difference = abs((first_diagonal-second_diagonal));

      return difference;
}

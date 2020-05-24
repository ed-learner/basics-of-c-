/*You are required to create a Board for any number of rows and columns.
  Write the code for the above-mentioned task in the makeBoard function.
  Next, you have to write the printBoard function. In it, you have to do the following:
  Pass the appropriate parameters to it
  Initialize the board to store the value 1 at every index in the board.
  Display your resulting board.
  Lastly, call the printBoard function in the makeBoard function by passing the appropriate parameters to it.
*/

void printBoard(int **board, int x, int y){
  for(int i=0; i<x; i++){
    for(int j = 0; j < y; j++){
         board[i][j] = 1;
         cout<<board[i][j]<< " ";
        }
    cout<<endl;
  }
}

void makeBoard(int x,int y) {
  int **board;
  board = new int*[x]; //dynamic array
     for( int i = 0; i< x ; i++){
       board[i] = new int[y];
     }

      printBoard(board,x,y);

}

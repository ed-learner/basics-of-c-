// Complete the minimumMoves function below.
int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {

    int max = INT_MAX;
    vector<vector<int>> scores(grid.size(), vector<int>(grid.size(), max));

    //A pair is a container which stores two values mapped to each other

    stack<pair<int,int>> to_visit({pair<int,int>(startX,startY)});
    scores[startX][startY] = 0;

    while(!to_visit.empty()){

       /* lamda function- inline function
        [ captureClause ] ( parameters ) -> returnType
        {
            statements;
        } */

        const auto [x, y] = to_visit.top();

        to_visit.pop();

        auto visit = [&scores, &grid, &to_visit](int x, int y, int s){

            if(grid[x][y] == 'X'){

                return true;

            }

            if(grid[x][y] == '.' && scores[x][y] > s){

                scores[x][y] = s;

                to_visit.push( pair <int,int> (x,y) );

            }

            return false;
        };

        const int s = scores[x][y] + 1;

        for(int i = x+1; i < grid.size(); ++i) {

            if(visit(i, y, s)){

                break;

            }
        }

        for(int i=x-1; i>=0; --i){

           if(visit(i, y, s)){

               break;

           }
        }

        for(int j = y+1; j < grid.size(); ++j){

            if(visit(x, j, s)) {

                break;

            }

        }

        for(int j = y-1; j >= 0; --j) {

            if(visit(x, j, s)){

                break;

            }
        }
    }

    return scores[goalX][goalY];
}

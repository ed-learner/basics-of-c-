vector<int> breakingRecords(vector<int> scores) {

     int i=0;
     double MinScore =0;
     double MaxScore =0;

     int min_count = 0;
     int max_count = 0;

     int numberofgames = scores.size();

     MinScore = scores.front();
     MaxScore = scores.front();


     while(i < numberofgames){

       if(scores.at(i) > MaxScore){

           MaxScore = scores.at(i);
           max_count++;
       }
       else if (scores.at(i) < MinScore){

           MinScore = scores.at(i);
           min_count++;
       }

       i++;
     }

      return {max_count, min_count};
}

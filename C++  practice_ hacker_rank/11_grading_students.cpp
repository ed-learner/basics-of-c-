vector <int> gradingStudents(vector<int> grades) {

    for(int i = 0; i <= grades.size(); i++){

        if(grades[i] < 38){

            grades[i] = grades[i];

        }

        else {
           if((grades[i]%5) == 3){

            grades[i] = grades[i]+2;

           }

            if((grades[i]%5) == 4) {

            grades[i] = grades[i]+1;
        }

        }
    }

  return grades;
}

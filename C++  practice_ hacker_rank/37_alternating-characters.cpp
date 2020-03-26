// Complete the alternatingCharacters function below.
int alternatingCharacters(string s){

  int numberofdeletions = 0;
  int stringlength = s.size();

  for (int i = 0; i< stringlength-1; i++){

      if( s[i] == s[i+ 1]){

          numberofdeletions ++;

      }
  }

   return numberofdeletions;
}

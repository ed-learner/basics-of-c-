/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {

  if(*(s.end() - 2) == 'A') {

    return '0' + to_string((stoi(string(s.begin(), s.end() - 2))%12)) +
           string(s.begin() + 2, s.end() - 2);

  }

  else

    return to_string(12 + (stoi(string(s.begin(),s.end() - 2))%12)) +
           string(s.begin() + 2,s.end() - 2);

}

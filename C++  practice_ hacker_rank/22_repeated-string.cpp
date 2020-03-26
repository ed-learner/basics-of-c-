long repeatedString(string s, long n) {

     long number_of_a = 0;
     long size_of_string = s.size();
     long total_repeated_times = n/size_of_string;
     long remainder_size = n % size_of_string;

      if(size_of_string==1 && s[0]== 'a'){

          return n;
      }

      if(size_of_string == 1 && s[0] != 'a'){

          return 0;
      }

     for(int i = 0; i < size_of_string; i++){

         if(s[i] == 'a'){

            number_of_a++;

         }
     }

    number_of_a = number_of_a * total_repeated_times;

    for(int i = 0; i < remainder_size; i++){

        if (s[i] == 'a'){

            number_of_a++;

        }
    }


    return number_of_a;

}

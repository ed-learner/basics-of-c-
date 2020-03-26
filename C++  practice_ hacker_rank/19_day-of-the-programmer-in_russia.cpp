string dayOfProgrammer(int year) {

    string leap_year_date   = "12.09." + to_string(year);
    string normal_year_date = "13.09."+  to_string(year);
    string year_1918_date   = "26.09.1918";

    if(year % 4 == 0 && (year < 1918 || year % 400 == 0||year % 100 !=0 )){

        return leap_year_date ;
    }

    else if(year == 1918){

        return year_1918_date;
    }

    return normal_year_date;

}

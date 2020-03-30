// Complete the poisonousPlants function below.

int poisonousPlants(vector<int> s) {

    vector<int> p(s.size(), 0); //killer index offsets
    vector<int> m(s.size(), 0); //max days for its children

    int minimum = s[0];
    int j = 0;

    for(int i = 1; i < s.size(); i++) {

        if(s[i] <= minimum) {
            minimum = s[i];
            p[i] = 0;
            j = i;
        }

        else if(s[i] > s[i - 1]) {
            p[i] = 1;
            j = i - 1;
        }

        else {
            int k = j;

            while(s[i] <= s[k]){
                k -= p[k];
            }
                p[i] = i - k;

        }
    }

    int days_to_survival = 0;

    for(int i = 1; i < s.size(); i++) {
        int j = i - p[i];

        if(p[i] > m[j]) {

            m[j] += 1;
        int day_nr = m[j];

            days_to_survival = max(days_to_survival, day_nr);

            while(p[j] != 0) {

                j = j - p[j];
                m[j] = max(m[j], day_nr);

            }
        }
    }

    return days_to_survival;
}

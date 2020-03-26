int makeAnagram(string a, string b) {
    vector<char> non_similar_letters;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    /*OutputIterator set_symmetric_difference ( InputIterator1 first1, InputIterator1 last1,
                     InputIterator2 first2, InputIterator2 last2, OutputIterator result);
    */

    set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(),
                             back_inserter(non_similar_letters));

    int number_of_deletions = non_similar_letters.size();

    return number_of_deletions;

}

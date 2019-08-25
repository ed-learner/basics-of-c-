/* Binary search algorithm  using class functions and a while loop to search a specific number in a vector of integers and
   returning the position of the number in the vector and -1 if it is not found.
 */
#include<iostream>
#include<vector>

using namespace std;

template <typename element_type>
class  generic_array
{
public:
    vector_size(vector<element_type> &elements){
         this->element_count = elements.size();
    }
    getSize() const {
        return element_count;
    }
    print(vector<element_type> &elements) {
        cout << " Your array elements: \n";
        for (auto j = elements.begin(); j != elements.end(); j++){
            cout <<" "<< *j ;
        }
    }

    bin_search(vector<element_type> &elements, element_type search_element);

private:
      element_type* elements;
      size_t element_count;

      int lowest_value_index;
      size_t mid_index;
      int highest_value_index;
};

template <typename element_type>
generic_array<element_type>:: bin_search(vector<element_type> &elements, element_type search_number)
{
  lowest_value_index = 0;
  highest_value_index = getSize();

  while (lowest_value_index <= highest_value_index){
    mid_index = lowest_value_index + ((highest_value_index - lowest_value_index)/2);

    if( elements[mid_index] == search_number ){
        return mid_index;
    }
    if (search_number < elements[mid_index]){
        highest_value_index = mid_index - 1;
    }
    else{
       lowest_value_index = mid_index + 1;
    }
  }
  return -1;
}


int main() {
    generic_array <size_t> arr;

    vector<size_t> vect1{1,2, 3,4,9,12,16,17};
    arr.vector_size(vect1);
    arr.print(vect1);

    cout<<"\n Number 17 found at position: "<<arr.bin_search(vect1,17)<<endl;
    cout<<" Number 0 found at position: "<<arr.bin_search(vect1,0)<<endl;

    return 0;
}

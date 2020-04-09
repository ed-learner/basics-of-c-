//
// Created by amuteted on 20.12.19.
//
template <class T> class cell {
protected:
    T info;

public:
    void set(T x) {info = x;}
    T get() {return info;}

};


//Define the subclass colored_cell by extending the class cell with:

// a field color, indicating the color of the cll, represented as a character
// the method set_color which set the content of the field color
// an updated method get, which returns the content of the field info if the color is not white and returns 0 otherwise
//choosing the right signature, types and parameters


template<class T> class clored_cell: public cell<T> {
protected:
    char color;
public:
    void set_color(char c) { color = c;}
    char get_color() {return color;}

    T get() {if (color !='w') return info; else return 0;}


};
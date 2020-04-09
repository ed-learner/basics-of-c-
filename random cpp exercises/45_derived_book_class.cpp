//
// Created by amuteted on 27.12.19.
//
#include<stdio.h>
#include<string>
#include<iostream>


using namespace std;

class LibMat {
public:
    LibMat(){ cout << "LibMat::LibMat() default constructor!\n"; }
    virtual ~LibMat(){ cout << "LibMat::~LibMat() destructor!\n"; }
    virtual void print() const
    { cout << "LibMat::print() -- I am a LibMat object!\n"; }
};


class Book :: public LibMat {
public:
    Book(const string &title, const string & author) :_title(title), _author(author){
        cout<<"Book:: Book("<<_title <<","<<_author<<") constructor \n";
    }

    virtual ~Book(){
        cout << "Book::~Book() destructor !\n";
    }

    virtual void print() const {

        cout<< "Book :: print()-- I am a Book object!\n"
            <<"My title is: <<_tittle << '\n'
            << "My author is : "<<_author<<endl;
    }

    const string& title() const {return _title;}
    const string& author() const {return _author;}

protected:
    string _title;
    string _author;
};

//a member declared as protected can be directly accessed by the derived classes but cannot be directly accessed by the
// the general program

//derived class

class AudioBook : public Book {
public:
    AudioBook(const string &title, const string & author, const string &narrator):
    _narrator(narrator)
    {
        cout<<"AudioBook::AudioBook(<<_title << ","<<_author<<", "<<_narrator<<") constructor\n";
    }
    ~AudioBook(){
        cout<<"AudioBook :: ~AudioBook() destructor!\n";
    }

    virtual void print() const {
        cout<<"AudioBook::print()--I am an AudioBook object!\n"
        //data members _title and author

        <<"My title is :" <<_title << '\n'
        <<"My author is: " <<_author<<'\n'
        <<"My narrator is: "<<_narrator <<endl;
    }

    const string& narrator() const {return _narrator;}

protected:
    string _narrator;
};

int main(){

    AudioBook ab("Mason and Dixon", "Thomas Pynchon", "Edwin Leonard");

    cout<<"The title is"<<ab.title()<< '\n'
        <<"The author is" <<ab.author()<< '\n'
        <<"The narrator is" <<ab.narrator()<<endl;

    return 0;
}
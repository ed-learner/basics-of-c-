//
// Created by amuteted on 27.12.19.
//
class LibMat {
public:
    LibMat() {cout << "LibMat :: LibMat() default constructor!\n";}
    virtual ~LibMat(){cout<<"LibMat:: ~LibMat() destructor!\n";}
    virtual void print() const {cout <<"LibMat:: print () I am a LibMat object!\n";}
};

//member function resolved statically at compile time
//to make member function resolved dynamically during run time we preface
// its declaration during run-time

void print(const LibMat &mat){

    cout<< "in global print(): about to print mat.print() \n";

    //this resolves to a print() member function
    // based on the actual object mat refers to ...
    mat.print();
}

//program execution

cout<<"\n"<< "Creating a LibMat object to print()\n";
LibMat libmat;
print(libmat);

// trace of execution

//Creating a LibMat object to print()
//LibMat:: LibMat() default constructor!

// When the derived class object is destroyed both
// the derived and base class s destructors are invoked

#include<bits/stdc++.h>

using namespace std;

// The class should have the following functions :
class Box{
    private:
        int l = 0;
        int b = 0;
        int h = 0;
    public:
     //default constructor
      Box(){
        l = 0;
        b = 0;
        h = 0;
      }
      //parameterized constructor
      Box(int length,int breadth,int height){
         l = length;
         b = breadth;
         h = height;

      }
      //copy constructor which must pass its first argument by & reference
      Box(Box &B){
        l = B.l;
        b = B.b;
        h = B.h;
      }

    // Return box's length
    int getLength(){
        return l;
    }
    // Return box's breadth
    int getBreadth(){
        return b;
    }
    // Return box's height
    int getHeight(){
        return h;
    }
    // Return box's volume
    long long CalculateVolume(){
        return (long long)l*b*h; //type casting to long since l,b, h are ints private members
    }

    //Overload operator < as specified
    //bool operator<(Box& b)
    friend bool operator < ( Box &A, Box &B){
        if( (A.l < B.l) ){
            return true;
        }
        else if ((A.b < B.b) && (A.l == B.l)){
            return true;
        }

        else if ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)){
            return true;
        }

        else{
            return false;
        }

    }

    //Overload operator << as specified
    //ostream& operator<<(ostream& out, Box& B)
    friend ostream& operator<< (ostream& out, const Box &B){
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }

};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}

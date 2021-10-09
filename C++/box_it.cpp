#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box{
    long long int  l,b,h;
   public:
   friend ostream& operator<<(ostream& ,Box& );
   Box(){
       l =0;
       b =0;
       h =0;
   } 
   Box( long long int length ,long long int breadth ,long long int height){
       l =length;
       b = breadth;
       h = height;
   }
   Box(Box &B){
       l = B.l;
       b  =B.b;
       h = B.h;
       
   } 
    long long int getLength(){
      return l;
  }
  long long int getBreadth(){
      return b;
  }
  long long int getHeight(){
      return h;
  }
  long long CalculateVolume(){
      return (l*b*h);
  }
  bool operator<(Box& B){
      if ((l)<(B.l))
      return true;
      else if((b)<(B.b) && l==(B.l))
      return true;
      else if((h)<(B.h)&& (l== (B.l)&& b == (B.b)))
      return true;
      else 
      return false;
  }
  
};

 ostream& operator<<(ostream& out,Box& B){
      out<<B.l<<" "<<B.b<<" "<<B.h;
      return out;
  } 
//Overload operator < as specified
//bool operator<(Box& b)


//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


#include <iostream>  
using namespace std;  
template<class T>
T swap1(T &a,T &b)  
{  
	cout<<"Before swap: "<<a<<" "<<b<<endl;
    T temp=0;
    temp=a;
    a=b;
    b=temp;
	cout<<"After swap: "<<a<<" "<<b<<endl;
}  

int main()  
{  
  int i =2;  
  int j =3;  
  swap1(i,j);
  return 0;  
}  

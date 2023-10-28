#include<iostream>
using namespace std;
int main(){
int l ,b ,area,perimeter;
cout<<"Enter length of rectangle";
cin>>l;
cout<<"Enter breadth of rectangle";
cin>>b;
area=l*b;
perimeter=2*(l+b);
if(l*b>2*(l+b)){
cout<<"Area of Rectangle is Greater than perimeter";
}
else{
cout<<"Area of Rectangle  is not greater than perimeter";
}
return 0;
}

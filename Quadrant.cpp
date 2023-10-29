#include<iostream>
using namespace std;
int main (){
int x,y;
cout<<"Enter X axis";
cin>>x;
cout<<"Enter Y axis";
cin>>y;
 if(x > 0 and y > 0){
    cout<<"1st Quadrant";
 }
  else if (x < 0 and y > 0){
    cout<<"2nd Quadrant";
  }
  else if (x < 0 and y < 0){
    cout<< "3rd Quadrant";
  }
  else if (x > 0 and y < 0){
    cout<< "4th Quadrant";
  }
  else if (x == 0 and y > 0){
    cout<<"Y-axis";
  }
  else if (x < 0 and y == 0){
    cout<<"X-axis";
  }
  else if (x == 0 and y == 0){
    cout<<"Origin";
  }
  else{
    cout<<"Unknown";
  }
  return 0;

}

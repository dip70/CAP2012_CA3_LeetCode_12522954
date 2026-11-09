#include<iostream>
using namespace std;

int main (){
int n;
cout<<"Enter a number"<<endl;
cin>>n;

if (n<=2){
return n;
}
else{
int a =1,b=2,c;
for(int i=3;i<n;i++){
c=a+b;
a=b;
b=c;
}
cout<<b;
}

return 0;
}

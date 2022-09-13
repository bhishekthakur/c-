#include<iostream>
using namespace std;
 int main(){
int n1=0,n2=1,n3,i,number;
cout<<"Enter the number you want to print :";
cin>>number;
cout<<n1<<""<<n2<<"";
for(i=2;i<number;++i){
    n3=n2+n1;
    cout<<n3;
    n1=n2;
    n2=n3;
}
return 0;
}
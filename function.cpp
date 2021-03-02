#include<iostream>
using namespace std;
void funcCalc(int a, int b)
{
  int x, counter;
  counter=0;
  for(int i=a;i<b+1;i++){
    counter+=1;
    x=i*i+2*i-5;
    cout<<counter<<". broj gdje je vrijednost X["<<i<<"] = "<<x<<endl;
  }
}
int main()
{
  //unos velicine opsega
  int a, b;
  input:
  cout<<"pocetak opsega: "<<endl;
  cin>>a;
  cout<<"kraj opsega: "<<endl;
  cin>>b;
  if(a>b || a==b){
    cout<<"pocetak>=kraj je nemoguce"<<endl;
    cout<<endl;
    goto input;
  }
  else{
    funcCalc(a,b);
  }
return 0;
}
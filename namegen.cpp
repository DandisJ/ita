#include<iostream>
#include<string>
using namespace std;
void generateName(string name, string surname, string dname, string city){
string gensurname;
string genname;
//generated ime
genname=name.substr(0,3)+surname.substr(0,2);
//generated prezime
gensurname=dname.substr(0,2)+city.substr(0,3);
cout<<"Generated name = "<<genname<<" "<<gensurname<<endl;
}
int main()
{
  //unos
  string name,surname,dname,city;
  cout<<"Ime:";
  cin>>name;
  cout<<"Prezime:";
  cin>>surname;
  cout<<"Djevojacko prezime:";
  cin>>dname;
  cout<<"Unesi grad u kojem si rodjen:";
  cin>>city;
  cout<<endl;
  generateName(name,surname,dname,city);
}
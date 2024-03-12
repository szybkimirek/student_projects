#include <iostream>

using namespace std;


int main(){
float kilogramy=0;
float metry=0;
	cout<<"Witaj w aplikacji do liczenia BMI"<<endl;
cout<<"wprowadz swoja wage w kilogramach"<<endl;
cin>>kilogramy;
cout<<"wprowadz swoj wzrost w metrach"<<endl;
cin>>metry;
float BMI=kilogramy/(metry*metry);
if( BMI<18.5){
cout<<" niedowaga"<<endl;
}
if (BMI>18.5 && BMI<25){
cout<<" w normie"<<endl;
}
if (BMI>25 && BMI<35){
cout<<"Nadwaga"<<endl;
}
if (BMI>35){
cout<<"Otylosc"<<endl;
}



	return 0;
}

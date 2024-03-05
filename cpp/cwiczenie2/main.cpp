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
cout<<kilogramy/metry*2<<endl;
if(kilogramy/metry*2<18.5){
cout<<"Niedowaga"<<endl;
}
if(kilogramy/metry*2<25){
cout<<"W normie"<<endl;
}
if(kilogramy/metry*2>25){
cout<<"Nadwaga"<<endl;
}
if(kilogramy/metry*2<30){
cout<<"otylosc"<<endl;
}






	return 0;
}

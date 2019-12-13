#include<iostream>
using namespace std;
int main ()
{
	system("title POINTER ") ;
	double praktek,uts,uas,total;
	double *a=&praktek;
	double *b=&uts;
	double *c=&uas;
	double *d=&total;
	
	cout<<"Nilai Praktek : ";
	cin>>praktek;
	cout<<"Nilai UTS : ";
	cin>>uts;
	cout<<"Nilai UAS : ";
	cin>>uas;
	total = (praktek+uts+uas)/3;
	if (90<=total&&total<=100){
		cout<<"Nilai Praktek = "<< *a<<endl;
	cout<<"Nilai UTS = "<< *b<<endl;
	cout<<"Nilai UAS = "<< *c<<endl;
	cout<<"Nilai total = "<< *d<<endl;
	cout<<"NILAI ANDA ADALAH A"<<endl;
	
	}
	if (70<=total&&total<=89){
		cout<<"Nilai Praktek = "<< *a<<endl;
	cout<<"Nilai UTS = "<< *b<<endl;
	cout<<"Nilai UAS = "<< *c<<endl;
	cout<<"Nilai total = "<< *d<<endl;
	cout<<"NILAI ANDA ADALAH B"<<endl;
	
	}
	if (50<=total&&total<=70){
		cout<<"Nilai Praktek = "<< *a<<endl;
	cout<<"Nilai UTS = "<< *b<<endl;
	cout<<"Nilai UAS = "<< *c<<endl;
	cout<<"Nilai total = "<< *d<<endl;
	cout<<"NILAI ANDA ADALAH C"<<endl;
	}
	if (30<=total&&total<=49){
		cout<<"Nilai Praktek = "<< *a<<endl;
	cout<<"Nilai UTS = "<< *b<<endl;
	cout<<"Nilai UAS = "<< *c<<endl;
	cout<<"Nilai total = "<< *d<<endl;
	cout<<"NILAI ANDA ADALAH D"<<endl;
	}
	if (total&&total<=29){
		cout<<"Nilai Harian = "<< *a<<endl;
	cout<<"Nilai UTS = "<< *b<<endl;
	cout<<"Nilai UAS = "<< *c<<endl;
	cout<<"Nilai total = "<< *d<<endl;
	cout<<"NILAI ANDA ADALAH E"<<endl;
	}
	system ("pause");
	system("cls");
	return 0;
}


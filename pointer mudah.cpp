#include<iostream>
using namespace std;
 int main()
 {
 	int i,z,tot;
 	int batas=10;
 	int *o=&tot;
 	
 	cout<<"Masukkan Angka Perkalian = " ;
 	cin>>z;
 	
 	for (i=1; i<=batas; i++){
 		tot = i*z;
 		cout<<i<<"x"<<z<<"="<<*o<<endl;
	 }
	 system ("pause");
	  return 0;
 }

#include <iostream>
using namespace std;

main(){

	for (int i=0;i<10;i++){
		cout<<i<<endl;
	}	
	
	cout<<"_________________________"<<endl;
	for (int i=0;i<10;i=i+2){
		cout<<i<<endl;
	}
	cout<<"_________________________"<<endl;
	for (int i=10;i>0;i--){
		cout<<i<<endl;
	}
	cout<<"_________________________"<<endl;
	
	for (int i=0;i<10;i++){
		if(i==5){
			cout<<"i: "<<i<<endl;  
			continue; 
		}
			cout<<i<<endl;
	}
	cout<<"_________________________"<<endl;
	for (int i=0;i<10;i++){
		if(i==5){
			cout<<"i: "<<i<<endl; 
			break; 
		}
			cout<<i<<endl;
	}
	 
		
 	int datos[]={8,12,35,200,1000};   
 	
    int tama = (sizeof(datos)/sizeof(datos[0]));
    
    for (int i=0;i<tama;i++){
    	cout<<datos[i]<<endl;
	}
	
	
system("pause");
}

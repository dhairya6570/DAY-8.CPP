#include<iostream>

using namespace std;

class Dhairya;

class Dhruv {
	
	private:
		
		int HH;
		int MM;
		int SS;
		
	friend void Shivam(Dhruv,Dhairya);	
		
};

class Dhairya {
	
	private:
		
		int HH;
		int MM;
		int SS;
	
	friend void Shivam(Dhruv,Dhairya);
		
};

void Shivam (Dhruv a , Dhairya b){
	
	a.HH = 1;
	a.MM = 30;
	a.SS = 30;
	
	b.HH = 2;
	b.MM = 20;
	b.SS = 20;
	
	cout<<"Dhruv : "<<a.HH<<endl;
	cout<<"Dhruv : "<<a.MM<<endl;
	cout<<"Dhruv : "<<a.SS<<endl;
	
	cout<<"Dhairya : "<<b.HH<<endl;
	cout<<"Dhairya : "<<b.MM<<endl;
	cout<<"Dhairya : "<<b.SS<<endl;
	
	cout<<endl<<endl;
	
	cout<<"Time : "<<a.HH+b.HH<<"/"<<a.MM+b.MM<<"/"<<a.SS+b.SS<<endl;
	
}

int main(){
	
	Dhruv obj1;
	Dhairya obj2;
	
	Shivam(obj1,obj2);
	
			
	return 0 ;
}

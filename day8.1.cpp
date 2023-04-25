#include<iostream>
#include<string.h>

using namespace std ;

class Employee  {
	
	private :
		int id ;
		char name[50] ;
		int role ;
		int salary ;
		int experience ;
		char address[50] ;
		char email[50] ;
		int contact ;
			
	public :
		
		void setter (int id , char name[] , int role , int salary , int experience ,char address[] , char email[] , int contact){
			
			this->id  = id ;
			strcpy( this->name,name ) ;
			this->role = role ;
			this->salary = salary ;
			this->experience = experience ;
			strcpy( this->address,address ) ;
			strcpy( this->email,email ) ;
			this->contact = contact  ;
				
		}
		
		void getter (){
			
			cout<<id<<endl ;
			cout<<name<<endl ;
			cout<<role<<endl ;
			cout<<salary<<endl ;
			cout<<experience<<endl ;
			cout<<address<<endl ;
			cout<<email<<endl ;
			cout<<contact<<endl ;
			
		}
	
};

int main (){
	
	Employee  o1 , o2 , o3 , o4 , o5 ;
	
		
	o1.setter(1,"Dhairya",20,10000,3,"mandvi","dhairyapatel20104@gmail.com",9727572094);
	o1.getter();
	
	cout<<endl;	
	
	o2.setter(2,"Dhruv",23,20000,2,"bardoli","nfjbiuobbvjn@mkb.mail",7383925521);
	o2.getter();
	
	cout<<endl;	
	
	o3.setter(3,"paresh",25,30000,4,"surat","bhvyuoybviy@kjnv.mail",9537125521);
	o3.getter();
	
	cout<<endl;	
	
	o4.setter(4,"Ila",27,40000,5,"kamraj","vbfuyruyrbvdvhb@bsd.mail",9999222555);
	o4.getter();
	
	cout<<endl;	
	
	o5.setter(5,"dhaval",23,50000,6,"hacking","dhavalhacking@mkb.mail",6663335551);
	o5.getter();
	
	
	return 0 ;
}

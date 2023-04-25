#include<iostream>
#include<string.h>

using namespace std ;

class Students {
	
	private :
		
		int stu_id ;
		char stu_name[50] ;
		int stu_age ;
			
	public :
		
		void setter (int stu_id , char stu_name[] , int stu_age){
			
			this->stu_id  = stu_id ;
			strcpy( this->stu_name,stu_name ) ;
			this->stu_age = stu_age ;
						
		}
		
		void getter (){
			
			cout<<stu_id<<endl ;
			cout<<stu_name<<endl ;
			cout<<stu_age<<endl ;
						
		}
	
};

class create {
	private:
		
		Students obj ;
		
	public:
		
		void print (){
			
			obj.setter(1,"Dhruv",23);
			obj.getter();
			
		}
			
		
};

int main (){
	
	create o ;
	o.print();
	
	return 0 ;
}

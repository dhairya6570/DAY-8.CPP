#include<iostream>

using namespace std;

class student {
	
	private:
		int stu_id ;
		char stu_name[50] ;
		int stu_age ;
		
	public:
		
		void setter (){
			
			cout<<"Enter ID : ";
			cin>>stu_id ;
			
			cout<<"Enter name : ";
			cin>>stu_name ;
			
			cout<<"Enter age : ";
			cin>>stu_age ;
			
		}
		
		void getter (){
			
			cout<<stu_id<<endl ;
			cout<<stu_name<<endl ;
			cout<<stu_age<<endl ;
		
		}
		
};

int main (){
	
	int i , n ;
	
	cout<<"Enter number for towards insert studentds data : ";
	cin>>n ;
	cout<<endl;
	
	student obj[n] ;
	
	for(i=0 ; i<n ; i++){
		
		obj[i].setter();
		
		cout<<endl;
				
	}
	
	cout<<endl<<endl;
		
	for(i=0 ; i<n ; i++){
		
		obj[i].getter();
		
		cout<<endl;
				
	}
	
	return 0 ;
}

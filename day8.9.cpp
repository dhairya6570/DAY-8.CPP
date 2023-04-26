#include<iostream>

using namespace std;

class RRS {
	
	private:
		int t_n ;
		char t_name[50] ;
		char t_Source[50] ;
		char t_Destination[50];
		char t_Time[10];
		
	public:
		
		void set (){
			
			cout<<"Enter Train Number : " ;
			cin>>t_n ;
			
			cout<<"Enter Train Name : " ;
			cin>>t_name ;
			
			cout<<"Enter Train Source : " ;
			cin>>t_Source ;
			
			cout<<"Enter Train Destination : " ;
			cin>>t_Destination ;
			
			cout<<"Enter Train Time : " ;
			cin>>t_Time ;
			
		}
		
		void get(){
			
			cout<<"Train Number : "<<t_n<<endl ;
			cout<<"Train Name : "<<t_name<<endl ;
			cout<<"Train Source : "<<t_Source<<endl ;
			cout<<"Train Destination : "<<t_Destination<<endl ;
			cout<<"Train Time : "<<t_Time<<endl ;
			
		}
		
		int check_Train_Number(){
			
			return t_n ;
			
		}
		
};

int main (){
	
	RRS obj[3];
	
	int i ;
	
	for(i=0 ; i<=2 ; i++){
		
		obj[i].set();
		cout<<endl;
		
	}
	
	cout<<endl<<endl;
	
	int train_number ;
	
	cout<<"Enter Your Train Number : ";
	cin>>train_number;
	
	cout<<endl;
	
	for(i=0 ; i<=2 ; i++){
		
		if(train_number==obj[i].check_Train_Number()){
			
			obj[i].get();
			cout<<endl;
			
		}
		
	}
	
	return 0 ;
}

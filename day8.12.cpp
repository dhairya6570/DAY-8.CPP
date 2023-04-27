#include<iostream>
#include<string.h>

using namespace std;

class Data{
	
	private:
	 
	
	char s_name[50];
	char s_acc_no[20];
	char s_phone[11];
	char s_mail[30];
	
	public:
		
		void setter(){
			
				cout<<"-------------------------------------------------"<<endl;
			cout<<"\t-:Welcome as STAFF:-"<<endl;
			cout<<"-------------------------------------------------"<<endl<<endl<<endl;
			cout<<"Enter the Name of staff		  : ";
			cin>>s_name;
			cout<<"Enter the Account Number of staff : ";
			cin>>s_acc_no;
			cout<<"Enter the Phone Number of staff   : ";
			cin>>s_phone;
			cout<<"Enter the E-mail of staff    	  : ";
			cin>>s_mail;
		}
		
		void getter(){
			
				
			cout<<"Name		:"<<s_name<<endl;
			
			cout<<"Account Number  :"<<s_acc_no<<endl;
			
			cout<<"Phone Number    :"<<s_phone<<endl;
			
			cout<<"E-mail    	:"<<s_mail<<endl;
						
		}
};

int main (){
	
	char login;
	
	Data obj;
	
	//PAGE-1
	cout<<"\t-: BANK MANAGMENT SYSTEM :-		"<<endl;
	cout<<"-------------------------------------------------"<<endl<<endl;
	cout<<"\t-: Designed N Programed by :-	 "<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"\t   DHAIRYA PARESHBHAI PATEL		"<<endl<<endl<<endl;
	cout<<"\t\t-: Trainer :-	"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"		 SHIVAM JADAV		"<<endl<<endl;
	cout<<"	Press Any Key N Enter To Continue..."<<endl<<endl<<endl;
	
	
	//PAGE-2
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"-: Press 'A' to login as Administrator OR 'S' to login as Staff:-"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Press 'A' or 'S' : ";
	cin>>login;
	
	
	//PAGE-3
	switch(login){
		
		case 'S':
			
			obj.setter();
			
			break;
		
		default:
			cout<<"Please try again with another login character";	
	}
	
	//PAGE-4
	cout<<endl<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	obj.getter();
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	
	
	
	return 0 ;
}

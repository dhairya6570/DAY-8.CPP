#include<iostream>
#include<string.h>

using namespace std;

class Data{
	
	private:
	 
	
	char s_name[50];
	char s_acc_no[20];
	char s_phone[11];
	char s_mail[30];
	char s_amount[10];
	
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
		
		void money(){
			
			cout<<"Enter amount for withdraw money : ";
			cin>>s_amount;
			
		}
		
		void amount(){
			
			cout<<"withdraw the money  : "<<s_amount<<endl;
			
		}
		
//		void balance (){
//			
//			cout<<200000-20000<<endl;
//			
//		}
//		
		
};

int main (){
	
	char login;
	int money;
	char s_amount;
	
	
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
	
	cout<<"Press [1] to Deposite the money:"<<endl;
	cout<<"Press [2] to Transfer the money:"<<endl;
	cout<<"Press [3] to Withdraw the money:"<<endl;
	
	cin>>money;
	cout<<endl;
	
	//PAGE-5
	
	switch(money){
		
		case 1:
			
			cout<<"sorry , source is not responding , please try again later..."<<endl;
			break;
			
		case 2:
			
			cout<<"sorry , source is not responding , please try again later..."<<endl;
			break;	
		
		case 3:
			
			obj.money();
			
			break;
			
		default:
			cout<<"please try again....";
		
		
	}
	
	
	cout<<endl<<endl;
	
	cout<<"---------------------------------------------------"<<endl;
	obj.amount();
	cout<<"---------------------------------------------------"<<endl;
	
	cout<<"Your Actual Amount is : 200000"<<endl<<endl;
	cout<<"Congrates your Amount has withdraw successfully."<<endl<<endl;
	cout<<"Your Account Balance is : "<<(200000-s_amount);
	
	
	
	return 0 ;
}

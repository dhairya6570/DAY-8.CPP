#include<iostream>
#include<string>

using namespace std ;

class states {
	
	private:
		
		static char x[500] ;
	
	public:
		
		static void print (){
			
			cout<<"state names : "<<endl<<x<<endl ;
			
		}
	
};

char states :: x[] = "Andhra Pradesh , Arunachal , Assam , Bihar , Chhattisgarh , Goa , Gujarat , Haryana , Himachal Pradesh , Jammu & Kashmir , Jharkhand , Karnataka , Kerala , Madhya Pradesh , Maharashtra , Manipur , Meghalaya , Mizoram , Nagaland , Odisha , Punjab , Rajasthan , Sikkim , Tamil Nadu , Telangana , Tripura , Uttar Pradesh , Uttarakhand , West Bengal" ;

int main (){
	
	states obj ;
	
	obj.print();
	
	return 0 ;
}

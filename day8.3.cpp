#include<iostream>
#include<string.h>

using namespace std;

class HighSchool {
	
	private:
		int stu_id ;
		char stu_name[50] ;
		int stu_roll_no ;
		int stu_age ;
		char stu_contact[12] ;
		char stu_address[50] ;
	
	public:
		
		static char stu_standard[50] ;
		static char stu_edu_institute_name[50] ;
		
		void setter (int stu_id , char stu_name[] , int stu_roll_no , int stu_age , char stu_contact[] , char stu_address[]){
			
			this->stu_id = stu_id ;
			strcpy(this->stu_name,stu_name) ;
			this->stu_roll_no = stu_roll_no ;
			this->stu_age = stu_age ;
			strcpy(this->stu_contact,stu_contact) ;
			strcpy(this->stu_address,stu_address) ;
			
		}
		
		void getter (){
			
			cout<<stu_id<<endl;
			cout<<stu_name<<endl;
			cout<<stu_roll_no<<endl;
			cout<<stu_standard<<endl;
			cout<<stu_age<<endl;
			cout<<stu_contact<<endl;
			cout<<stu_edu_institute_name<<endl;
			cout<<stu_address<<endl;
			
		}
		
};

char HighSchool :: stu_standard[] = "3rd" ;
char HighSchool :: stu_edu_institute_name[] = "vasistha genesis school";

class College {
	
	private:
		
		HighSchool obj ;
	
	public:
		
		void print (){
			
			obj.setter(2,"Dhruv",13,9,"123456789","Surat");
			obj.getter();
		}
};

int main (){
	
	
	
	HighSchool obj ;
	
	obj.setter(1,"Dhairya",12,8,"9727572094","Mandvi");
	obj.getter();
	
	cout<<endl;
	
	College o ;
	o.print();
	
	return 0 ;
}

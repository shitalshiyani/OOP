#include<iostream>
#include<string.h>

using namespace std;

class Students
{
	public :
	int roll_no;
	char name[100];
	int std;
	char contact_no[11];
	char add[100];
};
main()
{
	Students s1,s2,s3,s4,s5;
	
	cout<<"Roll_No=";
	cin>>s1.roll_no;
	cout<<"Name=";
	cin>>s1.name;
    cout<<"Standard=";
    cin>>s1.std;
	cout<<"Contact_No=";
	cin>>s1.contact_no;
	cout<<"Address=";
	cin>>s1.add;
	
	cout<<"Roll_No=";
	cin>>s2.roll_no;
	cout<<"Name=";
	cin>>s2.name;
    cout<<"Standard=";
    cin>>s2.std;
	cout<<"Contact_No=";
	cin>>s2.contact_no;
	cout<<"Address=";
	cin>>s2.add;
	
	cout<<"Roll_No=";
	cin>>s3.roll_no;
	cout<<"Name=";
	cin>>s3.name;
    cout<<"Standard=";
    cin>>s3.std;
	cout<<"Contact_No=";
	cin>>s3.contact_no;
	cout<<"Address=";
	cin>>s3.add;
	
	cout<<"Roll_No=";
	cin>>s4.roll_no;
	cout<<"Name=";
	cin>>s4.name;
    cout<<"Standard=";
    cin>>s4.std;
	cout<<"Contact_No=";
	cin>>s4.contact_no;
	cout<<"Address=";
	cin>>s4.add;
	
	cout<<"Roll_No=";
	cin>>s5.roll_no;
	cout<<"Name=";
	cin>>s5.name;
    cout<<"Standard=";
    cin>>s5.std;
	cout<<"Contact_No=";
	cin>>s5.contact_no;
	cout<<"Address=";
	cin>>s5.add;
	
	cout<<"............................."<<endl;
	
	cout<<"Roll_No="<<s1.roll_no<<endl
	<<"Name="<<s1.name<<endl
	<<"Standard="<<s1.roll_no<<endl
	<<"Contact_No="<<s1.contact_no<<endl
	<<"Address="<<s1.add<<endl;
	
	cout<<endl;
	
	cout<<"Roll_No="<<s2.roll_no<<endl
	<<"Name="<<s2.name<<endl
	<<"Standard="<<s2.roll_no<<endl
	<<"Contact_No="<<s2.contact_no<<endl
	<<"Address="<<s2.add<<endl;
	
	cout<<endl;
	
	cout<<"Roll_No="<<s3.roll_no<<endl
	<<"Name="<<s3.name<<endl
	<<"Standard="<<s3.roll_no<<endl
	<<"Contact_No="<<s3.contact_no<<endl
	<<"Address="<<s3.add<<endl;
	
	cout<<endl;
	
	cout<<"Roll_No="<<s4.roll_no<<endl
	<<"Name="<<s4.name<<endl
	<<"Standard="<<s4.roll_no<<endl
	<<"Contact_No="<<s4.contact_no<<endl
	<<"Address="<<s4.add<<endl;
	
	cout<<endl;
	
	cout<<"Roll_No="<<s5.roll_no<<endl
	<<"Name="<<s5.name<<endl
	<<"Standard="<<s5.roll_no<<endl
	<<"Contact_No="<<s5.contact_no<<endl
	<<"Address="<<s5.add<<endl;
}

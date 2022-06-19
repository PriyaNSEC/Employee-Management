#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct emp{
	string name, id, address;
	int contact,salary;
};
emp e[100];
int total=0;
void  empdata()
{
    int choice;
	cout<<"\n\n\t\tHow many employee data do you want to enter ?  ";
	
	cin>>choice;
	for(int i=total;i<total+choice;i++)
	{
		cout<<"\n\t\t Enter data of employee"<<" "<<i+1<<endl;
		cout<<"\t\tEmployee name:";
		cin>>e[i].name;
		cout<<"\t\tID :";
		cin>>e[i].id;
		cout<<"\t\tAddress: ";
		cin>>e[i].address;
		cout<<"\t\tContact: ";
		cin>>e[i].contact;
		cout<<"\t\tSalary: ";
		cin>>e[i].salary;
	}	
	total=total+choice;
}

void show()
{
   	if(total!=0){
   		for(int i=0;i<total;i++){
   			cout<<"\n\t\tData of employee"<<" "<<i+1<<endl;
   			cout<<"\t\tEmployee Name: "<<e[i].name<<endl;
   			cout<<"\t\tID: "<<e[i].id<<endl;
   			cout<<"\t\tAddress: "<<e[i].address<<endl;
   			cout<<"\t\tContact: "<<e[i].contact<<endl;
   			cout<<"\t\tSalary: "<<e[i].salary<<endl;
   			cout<<"\n\n";
		   }
	   }
	else{
		cout<<"\n\t\tYour record is empty"<<endl;
	}
}

void search()
{
   if(total!=0)
   {
   	string id;
   	cout<<"\n\t\tEnter id of data which you want to search : ";
   	cin>>id;
   	for(int i=0;i<total;i++)
	   {
   		if(id==e[i].id){
   				cout<<"\n\t\tData of employee"<<" "<<i+1<<endl;
   			cout<<"\t\tEmployee Name: "<<e[i].name<<endl;
   			cout<<"\t\tID: "<<e[i].id<<endl;
   			cout<<"\t\tAddress: "<<e[i].address<<endl;
   			cout<<"\t\tContact: "<<e[i].contact<<endl;
   			cout<<"\t\tSalary: "<<e[i].salary<<endl;
   			cout<<"\n\n";
   			break;
		   }
		   if(i==total-1){cout<<"\t\tNo such record found"<<endl;
		   }
	   }
   	
   }
   else
   {
   	cout<<"\n\t\tYour record is empty"<<endl;
   }	
}

void update()
{
	 if(total!=0)
	 {
	  string id;
	  cout<<"\n\n\t\tEnter id of data which you want to update : ";
	  cin>>id;
	  for(int i=0;i<total;i++)
	   {
   		if(id==e[i].id){
   				cout<<"\n\t\tData of employee"<<" "<<i+1<<endl;
   			cout<<"\t\tEmployee Name: "<<e[i].name<<endl;
   			cout<<"\t\tID: "<<e[i].id<<endl;
   			cout<<"\t\tAddress: "<<e[i].address<<endl;
   			cout<<"\t\tContact: "<<e[i].contact<<endl;
   			cout<<"\t\tSalary: "<<e[i].salary<<endl;
   			cout<<"\nEnter new data"<<endl;
   			cout<<"\n\t\t Enter data of employee"<<" "<<i+1<<endl;
		    cout<<"\t\tEmployee name:";
		    cin>>e[i].name;
	    	cout<<"\t\tID :";
			cin>>e[i].id;
			cout<<"\t\tAddress: ";
			cin>>e[i].address;
			cout<<"\t\tContact: ";
			cin>>e[i].contact;
			cout<<"\t\tSalary: ";
			cin>>e[i].salary;
   			break;
		   }
		   if(i==total-1){cout<<"\t\tNo such record found"<<endl;
		   }
	   }
   		
	 }else
	 {
	 	cout<<"\t\tYour record is empty"<<endl;
	 }
	
}

void del()
{
  if(total!=0)
  {
  	char user;
    cout<<"\t\tPress 1 to delete full record"<<endl;
	cout<<"\t\tPress 2 to delete specific record"<<endl;
	user=getch();
	if(user=='1'){
		total=0;
		cout<<"\t\tAll record is deleted...!!!"<<endl;
	}
	else if(user=='2')
	{
	  string id;
	  cout<<"\t\tEnter id of data which you want to delete"<<endl;
	  cin>>id;
	  for(int i=0;i<total;i++)
	  {
	  	if(id==e[i].id)
	  	{   
	  	    for(int j=i;j<total;j++)
	  	    {
			
	  		e[j].name=e[j+1].name;
	  		e[j].name=e[j+1].id;
	  		e[j].name=e[j+1].address;
	  		e[j].name=e[j+1].contact;
	  		e[j].name=e[j+1].salary;
	  		total--;
	  		cout<<"\t\tYour required record is deleted"<<endl;
	  	 	break;
	  	}
	  	if(i==total-1){
		  cout<<"\t\tNo such record found"<<endl;}
		  }
		  }	
		}	
  }	
	  else
	  {
	  	cout<<"\t\tYour record is empty"<<endl;
	  }
}


int main()
{
	cout<<"\n\n\t\tEmployee Management System"<<endl;
	cout<<"\n\n\t\tSign up"<<endl;
	string username , password;
	cout<<"\n\t\tEnter username: ";
	cin>>username;
	cout<<"\n\t\tEnter password: ";
	cin>>password;
	cout<<"\n\t\tYour id is creating please wait";
	for(int i=0;i<4;i++)
	{
		cout<<".";
		Sleep(1000); 
	}
	cout<<"\n\t\tYour Id created successfully"<<endl;
	system("CLS");
	start:
		system("CLS");
	cout<<"\n\n\t\tEmployee Management System"<<endl;
	cout<<"\n\n\t\tLogin"<<endl;
	string username1,password1;
	cout<<"\n\n\t\tUsername : ";
	cin>>username1;
	cout<<"\n\n\t\tPassword : ";
	cin>>password1;
	if(username==username1 && password==password1)
	{
	  system("CLS");
	  char user;
	  while(1)
	  { 
	  	cout<<"\n\n\t\tPress 1 to enter data"<<endl;
	  	cout<<"\t\tPress 2 to show data"<<endl;
	  	cout<<"\t\tPress 3 to search data"<<endl;
	  	cout<<"\t\tPress 4 to update data"<<endl;
	  	cout<<"\t\tPress 5 to delete data"<<endl;
	  	cout<<"\t\tPress 6 to logout"<<endl;
	  	cout<<"\t\tPress 7 to exit"<<endl;
	  	user=getch();
	  	system("CLS");
	  	switch(user)
	  	{
	  	case '1':
		  empdata();
		  break;
		case '2':
		  show();
		  break;
		case '3':
		   search();
		   break;
		case '4':
		  update();
		  break;
		case '5':
		  del();
		  break;
		case '6':
		   goto start;
		   break;
		default:
			cout<<"\t\tInvalid input"<<endl;
			break;
	    }
	  }	
	}
	else if(username1!=username)
	{
	cout<<"\t\tYour username is incorrect"<<endl;
	Sleep(3000);
	goto start;
    }
	else if(password!=password1)
	{
	cout<<"\t\tYour password is incorrect"<<endl;
	Sleep(3000);
	goto start;
   }
	
	return 0;
}

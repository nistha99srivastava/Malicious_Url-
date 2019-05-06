#include<iostream>
#include<string.h>
using namespace std;
class node
{
 public :
 node *next;
 node *prev;
 char url[100];
 node(char u[])
 {
  strcpy(url,u);
  next = NULL;
  prev = NULL;
 }
 
};
class urls
{
 public:
  int count = 0 ;
  float url1 = 0, url2 = 0, url3 = 0, url4 = 0, url5 = 0, url6 = 0, url7 = 0, url8 = 0, url9 = 0, url10 = 0;
  float countenter = 0;
  float u1 = 0 , u2 = 0 , u3 = 0 , u4 = 0 , u5 = 0, u6 = 0, u7 = 0, u8 = 0, u9 = 0, u10 = 0;
  node *start , *temp;
  urls()
  {
   start = NULL;
   temp = NULL;
  }
  int create(char url[])
  {
   fflush(stdin);
   node *newnode = new node(url);
   if(start == NULL)
   {
    start = newnode;
    temp = newnode;
   }
   else
   {
    temp->next = newnode;
    newnode->prev = temp;
    temp = temp->next;
   }
  }
  int validity(char user[])
  {
   char validuser[8];
   int validity;
   for(int i = 0 ; i < 8 ; i++)
   {
    validuser[i] = user[i];
 }
 validity = strcmp(validuser,"https://");
 return validity;
  }
  int check(char user[])
  {
  	char ch;
  	count  = 0;
   countenter++;
 int a;
   node *first = start;
   while(first != NULL)
   {
    if(strcmp(user,first->url) == 0)
    {
     a = 1;
     break;
    }
    else
    {
    count++;
     a = 0;
     first = first->next;
    }
   }
   if (a == 0)
    {
     cout << "\nSafety Insured!";
    }
   else if(a == 1)
   {
   	
     cout << "\nMalicious URL "<<endl;
     cout<<"\ndo you still want to access it?(y/n)"<<endl;
     cin>>ch;
		if (ch=='y')
  		 { cout<<"\nurl accessed"<<endl;
    		if (count == 0)
 			  {
   				 url1++;
 			  }
 			 else if(count == 1)
  			{
   				url2++;
  			}
 			 else if(count == 2)
 			 {
  				 url3++;
  			 }
  			else if(count == 3)
 			 {
   				url4++;
  			 }
  			else if(count == 4)
 			 {
   				url5++;
  			 }
  			 else if(count == 5)
  			 {
  			 	url6++;
			}
			else if(count == 6)
			{
				url7++;
			}
			else if(count == 7)
			{
				url8++;
			}
			else if(count == 8)
			{
				url9++;
			}
			else if(count == 9)
			{
				url10++;
			}
  			 else
  			 {
  			 	
			}

 		}
 		else
 		 {
   			cout<<"\nurl not accessed "<<endl;
 		 }
  
	}  
}
  
  int percentagechecker()
  {
  u1 = ((url1/countenter)*100);
  u2 = ((url2/countenter)*100);
  u3 = ((url3/countenter)*100);
  u4 = ((url4/countenter)*100);
  u5 = ((url5/countenter)*100);
  u6 = ((url6/countenter)*100);
  u7 = ((url7/countenter)*100);
  u8 = ((url8/countenter)*100);
  u9 = ((url9/countenter)*100);
  u10 = ((url10/countenter)*100);
  
  cout<<"\nPERCENTAGE OF SITES USED BY USERS : ";
  cout<<"\n------------------------------------------------";
  cout<<"\nhttps://www.helloworld.com : "<<" "<<u1<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.movies234.com : "<<" "<<u2<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.gamesforgames.com :"<<" "<<u3<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.buyall.com : "<<" "<<u4<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.sanfoundarycode.com :"<<" "<<u5<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.lovelycare.com :"<<" "<<u6<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.freevpnhere.com:"<<" "<<u7<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.songsforever.com:"<<" "<<u8<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.justcall.com :"<<" "<<u9<<"%";
  cout<<"\n";
  cout<<"\nhttps://www.fundingshere.com :"<<" "<<u10<<"%";
  }
void keysearch(char user[])
{ 	
	char key[10];
    node *first = start;
	cout<<"\nEnter the keyword you want to search :";
	cin>>key;
	label1:
	while(first != NULL)
	{
	char *ptr = strstr(first->url, key);

	if (ptr != NULL) /* URL with that substring found */
	{
		cout<<"\n"<<"Did you mean : "<<first->url;
		break;
	}
	else/* MOVING TO NEXT IF NOT IN THE CURRENT URL!*/
	{
		first = first->next;
		goto label1;
	}
	;
	}
	if(first == NULL)
	{
	    cout<<"\n"<<key<<" not found in malicious url database!";
	}
}
}; 
int main()
{
 urls u;
 int n , valid;
 char ans , ans1;
 int ch;
 valid = -1;
 char user[50];
 char url1[100] = "https://www.helloworld.com";
 char url2[100] = "https://www.movies234.com";
 char url3[100] = "https://www.gamesforgames.com";
 char url4[100] = "https://www.buyall.com";
 char url5[100] = "https://www.sanfoundarycode.com"; 
 char url6[100] = "https://www.lovelycare.com";
 char url7[100] = "https://www.freevpnhere.com";
 char url8[100] = "https://www.songsforever.com";
 char url9[100] = "https://www.justcall.com";
 char url10[100] = "https://www.fundingshere.com";
 
 u.create(url1);
 u.create(url2);
 u.create(url3);
 u.create(url4);
 u.create(url5);
 u.create(url6);
 u.create(url7);
 u.create(url8);
 u.create(url9);
 u.create(url10);
 cout<<"\n                                   ********************WEBSITE SECURITY********************";
 cout<<"\n";
 cout<<"\n--------------------------------------------------------------";
 
 do{   
 cout<<"\nMENU";
 cout<<"\n-------------------------------------------------------------";
 cout<<"\n"<<"1.Enter and scan urls"<<"\n"<<"2.Risk Analysis of malicious sites"<<"\n"<<"3.Keyword search";
 cout<<"\nEnter choice :";
 cin>>ch;
 switch(ch)
 {
case 1:
 label:
  do
 {
  cout<<"\nEnter the URL : ";
  gets(user);
  valid = u.validity(user);
  fflush(stdin);
  if(valid == 0)
   {
    u.check(user); 
   }
  else
   {
   cout<<"\nInvalid URL";
   goto label;
   }   
 cout<<"\nDo you want to check more URLs ?(y/n) ";
 cin>>ans; 
 fflush(stdin); 
} while(ans=='y' || ans=='Y');
;
break;
case 2:
    u.percentagechecker();
    break;
case 3:
    u.keysearch(user);
    break;
default : cout<<"\nWrong choice entered!";
    break;
}
cout<<"\nDo you want to countinue ? (y/n)";
cin>>ans1;
}while(ans1 == 'y' || ans1 == 'Y');
return 0;
 }


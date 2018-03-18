#include<stdio.h>
#include<fstream.h>
#include<iostream.h>
#include<ctype.h>
#include<iomanip.h>
#include<string.h>
#include<conio.h>
# include <math.h>
#include<stdlib.h>

class loginn                    
{
	private:
		char gen, email[100], pass[100], na[12], sna[12],add[50];
		int age[1],phno[9];

	public:

		void page3()
		{
			char ch;
			yolo:
			cout<<"\nChoose one of the following to continue:\n a.Continue as guest\n b.Login in\n c.Sign up\n";
			cin>>ch;
			switch(ch)
			{
				 case 'a':
				 cout<<endl<<"Enter your email id to continue:\t";
					  cin.getline(email,100);
					  break;
				 case 'b':
					  login();
					  break;
				 case 'c':
					  signup();
					  break;
				 default: cout<<"not a proper option legal";
							goto yolo;
			}
		}
		void signup()
		{
			fstream fin("guest.dat",ios::binary|ios::ate);
			if(fin==NULL)
				cout<<"no such file exists";
			else
			{
				loginn l;
				cout<<"Input the following details:\n  a.name\n  b.surname\n  c.age\n  d.gender\n  e.address\n  f.phone number \n h. Email id \n  g.password\n";
				cin>>na[12]>>sna[12]>>age[1]>>gen;
				cin.getline(add,50);
				cin>>phno[9];
				cin>>email;
				cin.getline(pass,20);

				fin.write((char*)&l,sizeof(l));

			}
			fin.close();
		}
		void login()
		{
			loginn m;
			char emai[100];
			cout<<"enter your email id";
			cin.getline(emai,100);
			cout<<"Enter password: \n";
			restart: char x[100],x1[100];
			int i,j=0,k=0,l;
			for(i=0;i<=100;i++)
			{
				Rammohan:l=getch();

//				cout << "l:" << l << endl;

				if(((l>=48)&&(l<=126))||(l==8)||(l==13))
					x[i]=l;
				else
					goto Rammohan;

				if(x[i]==13)
					break;
				else if(x[i]==8)
				{
					gotoxy(1,2);
					clreol();
					for(i=0;i<100;i++)
					x[i]='\0';
					goto restart;
				}
				else
				{
					cout<<"*";
					k++;
				}
			}
			fstream fin("guest.dat",ios::binary | ios::ate);
			int yz=0;
			while(fin.eof())
			{
				fin.read((char*)&m,sizeof(m));
				if((strcmp(emai,m.email)==0)&&(strcmp(x,m.pass)==0))
				{
					yz++;
					break;
				}
				if(yz!=1)
				{
					cout<<"password and email id do not match\n Please try again\n";
					goto restart;
				}
			}
		}


};


//



void welcome()
{

	 cout << "      >>       >=> >======>     >======>   >=>             >>       >==>    >=> >=======>   >=>>=>   "
				"     >>=>      >=> >=>    >=>   >=>    >=> >=>            >>=>      >> >=>  >=> >=>       >=>    >=>"
				"    >> >=>     >=> >=>    >=>   >=>    >=> >=>           >> >=>     >=> >=> >=> >=>        >=>       "
				"   >=>  >=>    >=> >> >==>      >======>   >=>          >=>  >=>    >=>  >=>>=> >=====>      >=>     "
				"  >=====>>=>   >=> >=>  >=>     >=>        >=>         >=====>>=>   >=>   > >=> >=>             >=>  "
				" >=>      >=>  >=> >=>    >=>   >=>        >=>        >=>      >=>  >=>    >>=> >=>       >=>    >=> "
				">=>        >=> >=> >=>      >=> >=>        >=======> >=>        >=> >=>     >=> >=======>   >=>>=>   ";

getch();

}
void select();
class airport
{


	public:
	char nam[25],gen[25],age[25];
	void display()
	{

		cout<<"                                                       * \n";
		cout<<"*                                                    **\n";
		cout<<" **                                               ***\n";
		cout<<"   ***                                        ****\n";
		cout<<"    ****          *******************************************\n";
		cout<<"     ***** *   ***************   ***   ***   ***   ***    ************\n";
		cout<<"      ************************************************************\n";
		cout<<"         ******************************************************\n";
		cout<<"                                    ********\n";
		cout<<"                                  *******\n";
		cout<<"                               *****     * ****   ****   ****   ****   ***** \n";
		cout<<"                             *****  *    * *   *  *   * *    *  *   *    *   \n";
		cout<<"                           *********** *   * ****   ****  *    *  ****     *   \n";
		cout<<"                         **  *        *  * *   *  *     *    *  *   *    *   \n";
		cout<<"                        *   *         * * *    * *      ****   *    *   *   \n";

		cout<<"Welcome to Chhatrapati Shivaji International Airport, Mumbai\n\n\n";
		cout<<"Hello passenger!\n";
	}
	void input()
	{
		int i=0;
		cout<<"Enter name\n";
		cin>>nam;
		D:
		cout<<"\nEnter age\n";
		cin>>age;
		for(i=0;age[i]!='\0';i++)
		{
			if(age[i]>'9' || age[i]<'0')
			{
				cout<<"\nAge Should be in Integer\n"<<endl;
				goto D;
			}
		}


		C:
		cout<<"\nEnter Gender Male(M) and Femal(F)\n";
		cin>>gen;

		if((gen[0]!='F' && gen[0]!='M') || gen[1]!='\0')
		{
			cout<<"\nInvalid Entry\n"<<endl;
			goto C;
		}



		fstream txt("Airport.txt",ios::app);
		txt<<"name:- "<<nam<<endl<<"age:- "<<age<<endl<<"gender:- "<<gen<<endl;

		fstream txt1("Temp.txt",ios::app);
		txt1<<"name:- "<<nam<<endl<<"age:- "<<age<<endl<<"gender:- "<<gen<<endl;
	}
	void output()
	{


		cost();
		fstream txt("Airport.txt",ios::app);
		txt<<"TOTAL PRICE TO BE PAID:- "<<cos<<endl<<endl;
		txt.close();

		fstream txt1("Temp.txt",ios::app);
		txt1<<"TOTAL PRICE TO BE PAID:- "<<cos<<endl<<endl;
		txt1.close();

		cout<<cos;
		char x[100];

		fstream txt2("Temp.txt",ios::in);

		while(txt2)
		{
			txt2>>x;
			cout<<x<<endl;
		}
		txt2.close();

	}


	char a[100],M,D[100];
	void menu()
	{
		display();
		cout<<"Press any key to continue";
		getch();


			for(int i=0;i<=4000;i++){cout<<"\n";};
			cout<<"redirected To book a ticket\n";

			book();


	}
	char B[100],F[100],Pno[100];
	int b,f;
	int n,pno;
	void book()
	{
		int i=0,c=0,j=0;
		cout<<" Destination menu\n"
		 <<"1.  Moscow,Russia\n"
		 <<"2.  Dhaka,Bangladesh\n"
		 <<"3.  Dubai,UAE\n"
		 <<"4.  London,UK\n"
		 <<"5.  Osaka,Japan\n"
		 <<endl;
		 start:
		 cout<<"\n\nEnter Destination 1-5\n";
		 cin>>B;


		 if(B[1]!='\0' || B[0]>'5' || B[0]<'1')
		 {
			cout<<"Invalid Choice "<<endl;
			goto start;
		}
		  A:
		cout<<"\n\nEnter number of passenger\n";
		cin>>Pno;


		for(i=0;Pno[i]!='\0';i++);
				j=i-1;


		for(i=0;Pno[i]!='\0';i++)
		{
			if(Pno[i]>'9' || Pno[i]<'0')
			{
				cout<<"Invalide Enter";
				goto A;
			}
			else
			{
				c=Pno[i]-48;
				pno=pno+(c*(pow(10,j-i)));
			}
		}

		pno = atoi(Pno);

		  cout << pno;

		fstream txt("Temp.txt",ios::out);
		txt<<"YOUR TICKET";
		txt.close();

		i=0;



		while(i<pno)
		{
			input();
			i++;
		}
		b=B[0]-48;


		switch(b)
		{
			case 1:
			cout<<"\n1. Qatar Airways";
			cout<<"\n2. Lufthansa";
			cout<<"\n3. Etihad ";
			break;

			case 2:
			cout<<"\n1. Qatar Airways";
			cout<<"\n2. Lufthansa";
			cout<<"\n4. K.L.M Royal Dutch";
			break;

			case 3:
			cout<<"\n1. Qatar Airways";
			cout<<"\n3. Etihad ";
			cout<<"\n4. K.L.M Royal Dutch";
			break;

			case 4:
			cout<<"\n1. Qatar Airways";
			cout<<"\n2. Lufthansa";
			cout<<"\n3. Etihad ";
			cout<<"\n4. K.L.M Royal Dutch";
			break;

			case 5:
			cout<<"\n1. Qatar Airways";
			cout<<"\n2. Lufthansa";
			break;
		}
		top:
		cout<<"Enter Choise";
		cin>>F;
		if(F[0]=='1' && F[1]=='\0')
		n=255;
		else if(F[0]=='2' && (B[0]=='1' || B[0]=='2' || B[0]=='4' || B[0]=='5') && F[1]=='\0')
		n=300;
		else if(F[0]=='3' && (B[0]=='1' || B[0]=='3' || B[0]=='4') && F[1]=='\0')
		n=150;
		else if (F[0]=='4' && (B[0]=='2' || B[0]=='3' || B[0]=='4') && F[1]=='\0')
		n=500;
		else
		{
			cout<<"Invalid Choice";
			goto top;
		}
		output();

		for(int x=0; x < pno;x++)
		  {
				cout << "\nSelect seat for "<<x+1<<" passenger\n";
				select();
		  }
	 }

	int cos;
	void cost()
	{
		int s;

		if(B[0]=='1')
		s=150;
		else if(B[0]=='2')
		s=100;
		else if(B[0]=='3')
		s=500;
		else if(B[0]=='4')
		s=200;
		else if(B[0]=='5')
		s=20;

		cos=s*n*pno;

	}
};

//


int assignSeat(int seat_num, int row_num, int pass_num);
int num1(char*);
int num2(char*);


int NumSeats = 12;

void Reserve();
void Cancel();
void ChangeSeat();
void Display();
void InitializeSeats();

struct Seat
  {
		char pass_name[20];
		int Available;
  };

  struct Seat SeatArray[6][2];

void select()
{
	char seatchioce = 0;
	int row_num = 6;
	char a = 0;
	char w = 0;

  int total_passenger = 12;

  char arr1[][6] = {"A","A","A","A","A","A"};
  char arr2[][6] = {"B","B","B","B","B","B"};

  int MenuChoice;

  InitializeSeats();
  while(1)
  {
		cout << " 1. Reserve a seat" << endl;
		cout << " 2. Cancel a seat" << endl;
		cout << " 3. Change a Seat" << endl;
		cout << " 4. Display empty seats" << endl;
		cout << " 5. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> MenuChoice;

	 if((MenuChoice < 0) && (MenuChoice > 5))
	 {
		cout << "Invalid" << endl;

	 }
	 else
	 {
		  switch(MenuChoice)
		  {
				case 1: Reserve();
					 break;
				case 2: Cancel();
					 break;
				case 3: ChangeSeat();
					 break;
				case 4: Display();
					 break;
				case 5:
					 exit(1);
		  }
	 }
	 cin.get();
  }
  }

void Reserve() /*reserve the seats*/
{
	 int pass_num = 0;

	  cout << "All " << NumSeats << " seats are available " << endl;

	  for(int i = 0; i < 6; i++)
	  {
			for(int j = 0; j < 2; j++)
			{
				 if(SeatArray[i][j].Available == 1)
				 {
					  cout << "Please enter the passenger name: ";
					  cin >> SeatArray[i][j].pass_name;
					  SeatArray[i][j].Available = 0;
					  NumSeats--;
					  return;
				 }
			}

	  }
}
void Cancel()/*Cancel the seat*/
{
	 char CancelPassengerName[20];

	 cout << "Enter the Passenger to be cancelled: ";
	 cin >> CancelPassengerName;
	 for(int i =0; i <6; i++)
	 {
		  for(int j=0; j<2; j++)
		  {

				if(strcmp(SeatArray[i][j].pass_name, CancelPassengerName) == 0)
				{
					 NumSeats++;
					 SeatArray[i][j].Available = 1;
					 return;
				}
		  }
	 }
	 cout << " Passenger not in the list" << endl;
}
void ChangeSeat()/*Change the seat*/
{
	 char MovePassenger[20];
	 int SeatRow, SeatColumn;

	 cout << "Enter the passenger name to be moved: ";
	 cin >> MovePassenger;

	 for(int i = 0; i < 6; i++)
	 {    for(int j = 0; j < 2; j++)
		  {
				if(strcmp(SeatArray[i][j].pass_name, MovePassenger) == 0)
				{
					 SeatRow = i;
					 SeatColumn = j;
				}
		  }
	 }

	 if(NumSeats <= 0)
	 {
		  cout << "Seat unavailable" << endl;
		  return;
	 }
	 else{
		  for(int i = 0; i < 6; i++)
		  {
				for(int j = 0; j < 2; j++)
				{
					 if(SeatArray[i][j].Available == 1)
					 {
						  strcpy(SeatArray[i][j].pass_name, MovePassenger);
						  SeatArray[SeatRow][SeatColumn].Available = 1;
						  SeatArray[i][j].Available = 0;

						  return;
					 }
				}
		  }
	 }
}
void Display()/*Display the seat assingment*/
{
	 for(int i = 0; i < 6; i++)
	 {
		  for(int j = 0; j < 2; j++)
		  {
				if(SeatArray[i][j].Available == 0)
				{
					 cout << SeatArray[i][j].pass_name << " = " << NumSeats << endl;
				}
				else
				{
					 if(j == 1)
						  cout << i+1 << "B" << endl;
					 else
						  cout << i+1 << "A" << endl;
				}
		  }
	 }
}

void InitializeSeats()/*all available seats*/
{
	 for(int i = 0; i < 12; i++)
	 {
		  for(int j = 0; j < 2; j++)
				SeatArray[i][j].Available = 1;
	 }
}


int main()
{
	welcome();
	loginn l;
	airport a;
	l.page3();
	a.display();
	a.menu();

	return 0;
}


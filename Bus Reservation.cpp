#include<iostream>
#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

static int p = 0;

class a

{
private:
  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];

public:

  void create();
  void allotment();
  void empty();
  void show();
  void avail();
  void position(int i);
}

bus[10];

void vline(char ch)

{

  for (int i=80;i>0;i--)

  cout<<ch;

}

void a::create()

{
	cout<<endl;

  cout<<"\t\t\tEnter bus no: ";

  cin>>bus[p].busn;

  cout<<"\n\t\t\tEnter Driver's name: ";

  cin>>bus[p].driver;

  cout<<"\n\t\t\tArrival time: ";

  cin>>bus[p].arrival;

  cout<<"\n\t\t\tDeparture: ";

  cin>>bus[p].depart;

  cout<<"\n\t\t\tFrom: \t\t\t";

  cin>>bus[p].from;

  cout<<"\n\t\t\tTo: \t\t\t";

  cin>>bus[p].to;

  bus[p].empty();

  p++;

}

void a::allotment()

{

  int seat;

  char number[5];

  top:

  cout<<"\t\t\tBus no: ";

  cin>>number;

  int n;

  for(n=0;n<=p;n++)

  {

    if(strcmp(bus[n].busn, number)==0)

    break;

  }

  while(n<=p)

  {

    cout<<"\n\t\t\tSeat Number: ";

    cin>>seat;

    if(seat>32)

    {

      cout<<"\n\t\t\tThere are only 32 seats available in this bus.";

    }

    else

    {

    if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)

      {

        cout<<"\t\t\tEnter passanger's name: ";

        cin>>bus[n].seat[seat/4][(seat%4)-1];

        break;

      }

    else

      cout<<"\t\t\tThe seat no. is already reserved.\n";

      }

      }

    if(n>p)

    {
		
      cout<<"\t\t\tEnter correct bus no.\n";

      goto top;

    }

  }


void a::empty()

{

  for(int i=0; i<8;i++)

  {

    for(int j=0;j<4;j++)

    {

      strcpy(bus[p].seat[i][j], "Empty");

    }

  }

}
void a::show()

{

  int n;

  char number[5];

  cout<<"\t\t\tEnter bus no: ";

  cin>>number;

  for(n=0;n<=p;n++)

  {

    if(strcmp(bus[n].busn, number)==0)

    break;

  }

while(n<=p)

{

  cout<<"\t\t\t****************************************************************************************"<<endl;

  cout<<"\t\t\tBus no: \t"<<bus[n].busn

  <<"\n\t\t\tDriver: \t"<<bus[n].driver<<"\t\tArrival time: \t"

  <<bus[n].arrival<<"\t\tDeparture time: "<<bus[n].depart

  <<"\n\t\t\tFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<

  bus[n].to<<"\n";

  cout<<"\t\t\t****************************************************************************************"<<endl;

  bus[0].position(n);

  int a=1;

  for (int i=0; i<8; i++)

  {

    for(int j=0;j<4;j++)

    {

      a++;

      if(strcmp(bus[n].seat[i][j],"Empty")!=0)

      cout<<"\n\t\t\tThe seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<".";

    }

  }

  break;

  }

  if(n>p)

    cout<<"\t\t\tEnter correct bus no: ";

}
void a::position(int l)

{

  int s=0;p=0;

  for (int i =0; i<8;i++)

  {

    cout<<"\n\t\t\t";

    for (int j = 0;j<4; j++)

    {

      s++;

      if(strcmp(bus[l].seat[i][j], "Empty")==0)

        {

          cout.width(5);

          cout.fill(' ');

          cout<<s<<".";

          cout.width(10);

          cout.fill(' ');

          cout<<      bus[l].seat[i][j];

          p++;

        }

        else

        {

        cout.width(5);

        cout.fill(' ');

        cout<<s<<".";

        cout.width(10);

        cout.fill(' ');

        cout<<       bus[l].seat[i][j];

        }

      }

    }

  cout<<"\n\n\t\t\t\t\tThere are "<<p<<" seats empty in Bus No: "<<bus[l].busn;

  }
void a::avail()

{


  for(int n=0;n<p;n++)

  {

    vline('*');

    cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver

    <<"\t\tArrival time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"

    <<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"

    <<bus[n].to<<"\n";

    vline('*');

    vline('_');

  }

}
int main()

{
	
	system("color 02");
	for(int n=0;n<=19;n++)
    {
    cout<<endl;
    }
	printf("\t\t\t\t\t\t\t\tLoading Please Wait ... ");
    for(int r=1;r<=20;r++)
	{
    for(int q=0;q<=100000000;q++);
    printf("%c",177);
	}
	
	system("cls");
	cout<<endl;
	int w;
	
	while(1)

	{

	    
	    cout<<endl;
	    cout<<endl;
	cout<<"\t\t\t\t\t\tWELCOME TO BUS RESERVATION SYSTEM"<<endl;
	cout<<"\t\t\t\t\t\t*********************************"<<endl;
	  cout<<"\n\n\n\n\n";
	
	  cout<<"\t\t\t1.CREATE THE DATA OF BUS.\n\t\t\t"<<endl;
	
	  cout<<"\t\t\t2.RESERVATION.\n\t\t\t"<<endl;
	  cout<<"\t\t\t3.SHOW THE RESERVED SEATS.\n\t\t\t"<<endl;
	  cout<<"\t\t\t4.Buses Available. \n\t\t\t"<<endl;
	  cout<<"\t\t\t5.EXIT"<<endl;
	
	  cout<<"\n\t\t\tEnter your choice:-> ";
	
	  cin>>w;
	
	  switch(w)

  {

    case 1:  bus[p].create();
    cout<<endl;
	cout<<"\t\t\t\t\t\tData Is Created"<<endl;
	system("cls");
      break;

    case 2:  bus[p].allotment();
    
	system("cls");
	
      break;
	case 3:  bus[0].show();
      break;
	case 4:  bus[0].avail();
      break;
    case 5:  exit(0);
	exit(1);
  }
	
	}
	
	return 0;
	
	}


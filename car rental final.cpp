#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>
#include <time.h>
#include <string>

using namespace std;
class customer
{
	private:
	public:
	string customername;
	string phonenum;
    string carmodel;
    string carnumber;
    string carcolour;
    char data;
};
class rent : public customer
{

	public:
	int days = 0,rentalfee=0;
	void data()
	{
		int login();
		cout<<endl;
        cout<<"\t\t\t\t\t Please Enter your Phone Number: ";
        cin>>phonenum;
	login();

	cout << "\n\t\t\t\tPlease Enter your Name: ";
    cin >> customername;
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl;
        cout<<"\t\t\t\tEnter 'A' for Tesla 20011."<<endl;
        cout<<"\t\t\t\tEnter 'B' for Hyundai 2015."<<endl;
        cout<<"\t\t\t\tEnter 'C' for Ford 2017."<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
 cout<<"\t------------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;

    {

        cout <<"\t\t\t\tPlease select the colour of car(R/W/B)"<<endl;
        cout<<"\t\t\t\tEnter 'Red' for Red"<<endl;
        cout<<"\t\t\t\tEnter 'White' for White"<<endl;
        cout<<"\t\t\t\tEnter 'Blue' for Black"<<endl;
        cout<<endl;
		cout<<"\t\t\t\tChoose the colour of the car from above : ";
		cin>>carcolour;
		cout<<endl;
        system("PAUSE");

}

 if(carmodel=="A")
 {
 	system("CLS");

		cout<<"You have choosed Tesla model 2011."<<endl;
		 ifstream inA("A.txt");
         char str[200];
         while(inA) {
         inA.getline(str, 200);
         if(inA) cout << str << endl;
}

  }
  if(carmodel=="B")
  {
  	system("CLS");

		cout<<"You have choosed Hyundai model 2015."<<endl;
		 ifstream inB("B.txt");
         char str[200];
         while(inB) {
         inB.getline(str, 200);
         if(inB) cout << str << endl;

     }

 }
 if(carmodel=="C")
 {
 	system("CLS");
	     cout<<"You have choosed Ford model 2017."<<endl;
		 ifstream inC("C.txt");
         char str[200];
         while(inC) {
         inC.getline(str, 200);
         if(inC) cout << str << endl;
     }
}
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )

      cout<<"Invaild Car Model. Please try again!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;
    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
    system("PAUSE");
	}

	void calculate()
	{

		system ("CLS");

		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*150;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*200;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*300;
    }
void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	------------------------------------------------------------"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb967953"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "\t\t	| Car colour:"<<"--------------------|"<<setw(10)<<carcolour<<" |"<<endl;
    cout << "\t\t\t| Phone number:"<<"------------------|"<<setw(10)<<phonenum<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 _______________________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t    ________________________________________________________________________"<<endl;
    cout << "\t\t 	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
    cout << "\t\t    ________________________________________________________________________"<<endl;
    int f;
    system("PAUSE");

    system ("CLS");

     ifstream inf("thanks.txt");


  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};
class welcome
{
	public:
	int welcum()
	{
 ifstream in("welcome.txt");

  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);
    if(in) cout << str << endl;
  }
  in.close();

  cout<<"\nStarting the program please wait....."<<endl;
  cout<<"\nLoading up files....."<<endl;

system("PAUSE");
  system ("CLS");
}

};
int main()
{
welcome obj1;
obj1.welcum();

rent obj2;
obj2.data();
obj2.calculate();
obj2.showrent();

return 0;
}
//BONUS PART
int login(){
    //For generating OTP
    int len=6;
    string str = "0123456789";
    int n = str.length();
    string OTP;
    for (int i=1; i<=len; i++)
        OTP.push_back(str[rand() % n]);

    srand(time(NULL));
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tGenerating otp.....";
    cout<<"\n\t\t\t\t\tYour OTP is: "<<OTP.c_str();

   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   //Taking OTP as Password for login
   if(pass == OTP){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

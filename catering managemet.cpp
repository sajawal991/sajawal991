- 👋 Hi, I’m @sajawal991
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...

<!---
sajawal991/sajawal991 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
#include<iostream>
#include<cctype>
#include<cstdlib>
#include<iomanip>
#include<conio.h>
#include<dose.h>
using namespace std;
class catering_management{
	private:
		int n=0;
        char choice='Y';
        int order = 1;
        int num1=0;
        int num2=0;
        int num3=0;
        int num4=0;
        int num5=0;
        int num6=0;
        int num7=0;
        int num8=0;
        int num9=0;
        int num10=0;
        int num_customers;
        int sentinel=0;
        double UnitPrice1=6.95;
        double UnitPrice2=5.75;
        double UnitPrice3=7.25;
        double UnitPrice4=8.95;
        double UnitPrice5=4.95;
        double UnitPrice6=0.48;
        double UnitPrice7=10;
        double UnitPrice8=3.2;
        double UnitPrice9=4.5;
        double UnitPrice10=2.1;
        double AmountofSale1=0;
		double AmountofSale2=0;
		double AmountofSale3=0;
		double AmountofSale4=0;
		double AmountofSale5=0;
		double AmountofSale6=0;
		double AmountofSale7=0;
		double AmountofSale8=0;
		double AmountofSale9=0;
		double AmountofSale10=0;
		string name;
		string event;
		string guest;
		int time;
		public:
			int place_order();

            int your_order();
            
			int customer_info();
		
		int display_customer_info_and_total_bill();
		
};
int catering_management::place_order()
{
	cout<<"\nFrom the above list choose  item you want to buy\n";
while (order != sentinel)
{

cin>>order;
switch(order)
			{
                
                case 0:
                break;
                
				case 1:
                cout<<"How Many Buffalo Wings Would You Like To Order : ";
                cin>>num1;
                cout<<"Next order please if any and not then press 0 : ";
                AmountofSale1 = UnitPrice1 * num1;
                break;
                
				case 2: 
                cout<<"How Many Ham Burgers Would You Like To Order : ";
			    cin>>num2;
			    cout<<"Next order please if any and not then press 0 : ";
                AmountofSale2= UnitPrice2 * num2;
                break;
                
                case 3: 
                cout<<"How Many Italian Sandwiches Would You Like To Order : ";
				cin>>num3;
				cout<<"Next order please if any and not then press 0 : ";
                AmountofSale3= UnitPrice3 * num3;
                break;
                
                case 4: 
                cout<<"How Many Shrimp Nuggets Would You Like To Order : ";
                cin>>num4;
                cout<<"Next order please if any and not then press 0 : ";
                AmountofSale4= UnitPrice4 * num4;
                break;
                
                case 5: 
                cout<<"How Many Would Veggie Supremes You Like To Order : ";
                cin>>num5;
                cout<<"Next order please if any and not then press 0 : ";
                AmountofSale5= UnitPrice5 * num5; 
                break;
                
                case 6:
                cout<<"How Many would Tea You like TO Order : ";
                cin>>num6;
                cout<<"Next order please if any and not then press 0 : ";
                AmountofSale6= UnitPrice6 * num6;
                break;
                
                case 7:
                cout<<"How Many would Fajita Pizza You like TO Order : ";
                cin>>num7;
                cout<<"Next order please if any and not then press 0 : ";
                AmountofSale7=UnitPrice7 * num7;
                break;
                
                case 8:
                cout<<"How Many would ICE Cream You like TO Order : ";
                cin>>num8;
                cout<<"Next order please if any and not then press 0 : ";
                AmountofSale8=UnitPrice8 * num8;
                break;

                case 9:
                cout<<"How Many would Coffee You like TO Order : ";
                cin>>num9;
                cout<<"Next order please if any and not then press 0 : ";
                AmountofSale9=UnitPrice9 * num9;
                break;
            
                case 10:
                cout<<"How Many Would Drinks You like To Order : ";
                cin>>num10;
                cout<<"Next order please if any and not then press 0 : ";
                AmountofSale10=UnitPrice10 * num10;
                break;
                
                default: cout<<"Please Choose A Valid Item From Our List\n";
                }
            }
}
int catering_management::your_order()
{
	cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"------------------------------------------"<<endl;
cout<<"Your order and bill is shown below:\n";
cout<<"------------------------------------------"<<endl<<endl<<endl;
cout<<"=====================================================================\n";

cout<<setw(7)<<"ITEM"<<setw(22)<<"     QUANTITY"<<setw(15)<<"  UNIT PRICE"<<setw(22)<<"       AMOUNT OF SALE\n";

cout<<"=====================================================================";

cout<<"\nBuffalo Wings:\t"<<setw(10)<< num1 <<setw(14)<< UnitPrice1 <<setw(16)<< AmountofSale1<<endl;
cout<<"Ham Burger:\t"<<setw(10)<< num2 <<setw(14)<<UnitPrice2 <<setw(16)<< AmountofSale2<<endl;
cout<<"Italian Sandwich:"<<setw(9)<< num3 <<setw(14)<< UnitPrice3 <<setw(16)<< AmountofSale3<<endl;
cout<<"Shrimp Nuggets:\t"<<setw(10)<< num4 <<setw(14)<< UnitPrice4 <<setw(16)<< AmountofSale4<<endl;
cout<<"Veggie Supreme:\t"<<setw(10)<< num5 <<setw(14)<< UnitPrice5 <<setw(16)<< AmountofSale5<<endl;
cout<<"Tea:\t"<<setw(18)<<num6 <<setw(14)<< UnitPrice6 <<setw(16)<< AmountofSale6<<endl;
cout<<"Fajita Pizza:\t"<<setw(10)<< num7 <<setw(12)<< UnitPrice7 <<setw(18)<< AmountofSale7<<endl;
cout<<"ICE cream:"<<setw(16)<< num8 <<setw(13)<< UnitPrice8 <<setw(17)<< AmountofSale8<<endl;
cout<<"coffee:\t"<<setw(18)<< num9 <<setw(13)<< UnitPrice9 <<setw(17)<< AmountofSale9<<endl;
cout<<"Drinks:\t"<<setw(18)<< num10 <<setw(13)<< UnitPrice10 <<setw(17)<< AmountofSale10<<endl;
cout<<"======================================================================="<<endl;
cout<<"Total Bill of food only:\t\t\t"<<"   "<<AmountofSale1+AmountofSale2+AmountofSale3+AmountofSale4+AmountofSale5+AmountofSale6+AmountofSale7+AmountofSale8+AmountofSale9+AmountofSale10<<" Dollars"<<endl;
cout<<"======================================================================="<<endl;
cout<<endl;
}
int catering_management::customer_info()
{
	cout<<"Please Enter your name first : ";
			cin>>name;
			cout<<"Please Enter the event you want to organized : ";
			cin>>event;
			cout<<"Please Enter the no of your Guests : ";
			cin>>guest;
			cout<<"Please Enter the time limit of event in mins : ";
			cin>>time;
			system("CLS");
}
int catering_management::display_customer_info_and_total_bill()
{
			cout<<"NOTE: "<<endl<<"      Our management charge 1$ "<< "for the 1 min of using our "<<endl<<"      catering building and services ";
			cout<<"So your total bill "<<endl<<"      is given below with whole information you entered "<<endl<<endl<<endl;
			cout<<"-------------------------------------------------------------------------------------------";
			cout<<endl;
			cout<<"The name of the customer is : "<<name;
			cout<<endl;
			cout<<"The event customer want to organized is : "<<event;
			cout<<endl;
			cout<<"Total number of guests of the customer is : "<<guest;
			cout<<endl;
			cout<<"The Time limit of the "<<event<<" is : "<<time;
			cout<<endl;
			cout<<"Total bill of food only : "<<AmountofSale1+AmountofSale2+AmountofSale3+AmountofSale4+AmountofSale5+AmountofSale6+AmountofSale7+AmountofSale8+AmountofSale9+AmountofSale10<<" Dollars";
			cout<<endl;
			cout<<"Total bill of food and Catering building rent for event is given as = "<<AmountofSale1+AmountofSale2+AmountofSale3+AmountofSale4+AmountofSale5+AmountofSale6+AmountofSale7+AmountofSale8+AmountofSale9+AmountofSale10+(time*1)<<" Dollars";
            cout<<endl;
			cout<<"---------------------------------------------------------------------------------------------";
			cout<<endl;
}
class menu:public catering_management{
	public:
		int show_menu()
		{
cout<<"                                 ========================================================="<<endl;
cout<<"                                                        MENU                     \n";
cout<<"                                 =========================================================";
cout<<endl;
cout<<"                                               We are offering 10 items in menu "<<endl;
cout<<"                           -------------------------------------------------------------------"<<endl;             
cout<<"                                 [1] Buffalo Wings	                    $6.95 \n";
cout<<"                                 [2] Ham Burger  		            $5.75 \n";
cout<<"                                 [3] Italian Sandwich	                    $7.25 \n";
cout<<"                                 [4] Shrimp Nuggets		            $8.95 \n";
cout<<"                                 [5] Veggie Supreme		            $4.95 \n";
cout<<"                                 [6] Tea                                    $0.48 \n";
cout<<"                                 [7] Fajita pizza                           $10 \n";
cout<<"                                 [8] ICE cream                              $3.2 \n";
cout<<"                                 [9] coffee                                 $4.5 \n";    
cout<<"                                 [10] Drinks                                $2.1 \n";
cout<<"                            ------------------------------------------------------------------";
cout<<endl;
cout<<endl;
		}
};
int main()
{
	cout<<"                                  ***************************************************";
	cout<<endl;
	cout<<"                                             Welcome To Diamond Catering              ";
	cout<<endl;
	cout<<"                                  ***************************************************";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int n;
	cout<<endl;
	cout<<"******************************"<<endl;
	cout<<"Enter the number Customer = ";
	cin>>n;
	cout<<"******************************";
	for(int i=0;i<n;++i)
{
	menu m;
	cout<<endl;
	m.catering_management::customer_info();
	cout<<endl;
	cout<<endl;
	cout<<"                                     Thanks for your information now look at our menu ";
	cout<<endl;
	cout<<endl;
	m.show_menu();
	m.catering_management::place_order();
	system("CLS");
	m.catering_management::your_order();
	cout<<endl;
	cout<<endl;
	m.display_customer_info_and_total_bill();
	cout<<endl;
	cout<<endl;
	if(n>1)
{
	cout<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"customer "<<1+1+i<<endl;
	cout<<"------------------------------"<<endl;
}
}
	system ("pause");
	return 0;
}

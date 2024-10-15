#include<iostream>
#include<fstream>
#include<sstream>
#include<conio.h> 
#include<iomanip> 
#include<time.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void buy_food();
void mainmenu();
void pass();
void loadingbar();

int main(int argc, char** argv) {
	char fname[20];
	time_t rawtime;
	struct tm * timeinfo;
	
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );

	mainmenu();
return 0;	
}


void mainmenu()
{
/* welcome  */
	cout << "\n\n\n\n" <<endl;

   cout<<"\n\t                                   **********************";
   cout<<"\n\t                                 *   ******************   *";
   cout<<"\n\t                               *   *                    *   * ";
   cout<<"\n\t                             *   *                        *   * ";
   cout<<"\n\t                           *   *       W E L L C O M E      *   * ";
   cout<<"\n\t                         *   *                                *   *";
   cout<<"\n\t                        *  *                                    *  *";
   cout<<"\n\t                        *  *                 T O                *  *";
   cout<<"\n\t                        *  *                                    *  *";
   cout<<"\n\t                        *  *                T H E               *  *";
   cout<<"\n\t                        *  *                                    *  *";
   cout<<"\n\t                        *  *                                    *  *";
   cout<<"\n\t                        *  *        A M B E R  B A K E R Y     *  *";
   cout<<"\n\t                          *  *                                *  *";
   cout<<"\n\t                            *  *                            *  *";
   cout<<"\n\t                               *  *                       *  *";
   cout<<"\n\t                                 *  *********************  *";
   cout<<"\n\t                                   *********************** ";


                                    
                                                                                                   
	

	int a;
	for(a=0; a<100000000; a++)
	{
		cout << "";
		
	}
	system("cls");

main_menu:
	system("cls");	

		cout << "\n\n\n\n\n";                                                                              
		cout << "                        _____________________         ____________________            "<<endl;
		cout << "                       |                     |       |                    |           "<<endl;
		cout << "                       |                     |       |                    |           "<<endl;
		cout << "                       |   Customer Service  |       |   Manager service  |           "<<endl;
		cout << "                       |                     |       |                    |           "<<endl;
		cout << "                       |_____________________|       |____________________|           "<<endl;
		cout << "                                                                                      "<<endl;
		cout << "                               PRESS 1                      PRESS 2      \n\n           "<<endl;


        cout << "\n\n";
		cout << "                        _____________________         _____________________           "<<endl;
		cout << "                       |                     |       |                     |          "<<endl;
		cout << "                       |                     |       |                     |          "<<endl;
		cout << "                       |   Company Details   |       |         Exit        |          "<<endl;
		cout << "                       |                     |       |                     |          "<<endl;
		cout << "                       |_____________________|       |_____________________|          "<<endl;
		cout << "                                                                                      "<<endl;
		cout << "                               PRESS  3                     PRESS 4  \n\n              "<<endl;
		char button1;
		cout << "\nEnter Your Choice : ";
		cin >> button1;
		
		switch(button1)
		{
			//customer-----------------------------------------------------------------------------------------------------------------------------------
		
		time_t rawtime;
		  struct tm * timeinfo;

			case'1':

				customer_service:	
				system("cls");
				
	

					cout<<"\n======================================================================================================================="<< endl;
			   	 	cout <<setw(49)<< "Customer Service"<< endl;
			 		cout<< "=======================================================================================================================\n\n"<< endl;
					cout << "                                1 .Price list \n\n"<<endl;
					cout << "                                2 .Buy bakery items \n\n"<<endl;
					cout << "                                3 .Help  \n\n"<<endl;
					cout << "                                4 .Goto back  \n\n"<<endl;
					cout << "                                5 .Exit  \n\n"<<endl;
					
					char button2;
					cout << " Select a Option  ";
					cin>> button2;
					system("cls");
				
				switch(button2)//customer service
				{
					case'1': //price list
					 goto price_list;
						break;
					
					case'2'://buy foods
						cout<<"======================================================================================================================"<<endl;
  						cout <<setw(50)<< "Buy Bakery item"<<endl;
 						cout<<"======================================================================================================================\n\n"<< endl;
              
      
						system("pause");
						system("cls");
						buy_food();
						break;
						
					case'3':// customer help
					
						system("cls");
						cout<<"\n\n<___|**| HELP Center |**|___>\n\n"<<endl;
						cout<<"  1 How to get the price list\n\n "<<endl;
						cout<<"\t* Select Price List to see Price List\n\n"<<endl;
						cout<<"  2 How to buy bakery item \n\n "<<endl;								
						cout<<"\t* Fist Enter Your Name\n\n"<<endl;									
						cout<<"\t* Secondly, Enter The Number of bakery items You Want\n\n "<<endl;       
						cout<<"\t* Thirdly, Enter The Quantity you want\n\n "<<endl;
						cout<<"\t* Enter 0 after the end of the purchase\n\n"<<endl;
						system("pause");
						system("cls");
						goto customer_service;
						
						break;
					
					case'4'://goto back
						goto main_menu;
						
					case'5'://exit
						exit (0);
												
					default :
						system("cls");
						goto customer_service;
				}
				break;

			//manager login-------------------------------------------------------------------------------------------------------------------------------------	
			case'2':
				system("cls");
			login:{
				
				
				//user name and password
				cout<<"Please  Enter your USER NAME And PASSWORD to continue..."<<"\n"<<"\n";
				cout<<setw(25)<<"USERNAME :";
				string user;
				cin>>user;
			
						cout<<"\n";
						string pass ="";
						char ch;
						cout<<setw(26)<< "PASSWORD : ";
						ch = _getch();
						while(ch !=13)
						{
							pass.push_back(ch);
							cout << '*';
							ch = _getch();
						}
						
							if (pass=="admin"&&user=="admin")
							{ 
							goto manager_service;
							
							}else{
								cout<< "Invalid User Name or Password";
								system("cls");
								cout<< "\n "<<"            **Invalid User Name or Password**"<<endl;
								goto login;
							}
							
							
							
		   			}
		   			break;
		   	//---------------------------------------------------------------------------------------------------------------------------------------
		   	
		   	
		   	
		   	
			   //company details		
			case'3':
				system("cls");
				        cout<<"======================================================================================================================="<<endl;
  						cout <<setw(60)<< "[]__Company Details__[]"<<endl;
 						cout<<"=======================================================================================================================\n\n"<< endl;
						cout<<"\tCompany name    : Amber Bakery\n"<<endl;
						cout<<"\tOwner           : Mr.Harry Denis\n"<<endl;
						cout<<"\tEmail           : amberbakery99@gmail.com\n"<<endl;
						cout<<"\tContact Number  : +44798977566700 \n\t\t\t  +44798977665459\n\n"<<endl;
						cout<<"\tFax Number      : +4479897883\n"<<endl;
						cout<<"\tAdress          : 9111 West Street, \n\t\t\t  CHISWICK, \n\t\t\t  BRISTOL.\n\n"<<endl;


				
				system("pause");
				system("cls");
				goto main_menu;
				break;



			case'4':
				system("cls");
					exit(0);
			default :
				system("cls");
				goto main_menu;
				break;
		}
		
		
manager_service:
system("cls");
								//manager inter face
								cout<<"\n================================================================================================================="<< endl;
						   	 	cout <<setw(50)<< "Manager Service"<< endl;
						 		cout<<"  =================================================================================================================\n\n"<< endl;
								cout << "                     1 .Update Bakery items\n "<<endl;
								cout << "                     2 .Employee Salary\n "<<endl;
								cout << "                     3 .Add Employee\n "<<endl;
								cout << "                     4 .Sales Details\n "<<endl;
								cout << "                     5 .Help\n  "<<endl;
								cout << "                     6 .Goto back\n  "<<endl;
								cout << "                     7 .Exit  \n\n"<<endl;
								
								char button3;
								cout << " Select a Option  ";
								cin>> button3;
								
								switch(button3)
								{
								case'1': //update items
								system("cls");
								goto update_item;
								break;
						
								case'2'://employee salary
								goto salary;
								break;
								
								case'3'://employee 
								goto employee;
								break;
								
								case'4'://Sales Details
								 goto sales_details;
								break;
								
								case'5'://help
								
														system("cls");
														cout<<"\n\n    HELP Manager   \n\n"<<endl;
														cout<<"  1 How to Update Item List\n "<<endl;
														cout<<"\t* Goto Update Item\n"<<endl;
														cout<<"\t* Fist Enter Amount of Item Update\n"<<endl;
														cout<<"\t* Enter New Item\n"<<endl;
														cout<<"\t* Enter Item Price\n\n"<<endl;
														
														cout<<"  2 How Check Employee Salary \n "<<endl;								
														cout<<"\t*Goto Employee Salary\n\n"<<endl;									
											
														
														cout<<"  3 How to Update Salary List\n "<<endl;
														cout<<"\t* Goto Update Salary of emplo\n"<<endl;
														cout<<"\t* Fist Enter Amount of Employees\n"<<endl;
														cout<<"\t* Secondly, Enter Your Name\n "<<endl;
														cout<<"\t* Thirdly, Other Details\n\n"<<endl;
														
														
														system("pause");
														system("cls");
														goto manager_service;
								
														break;
								
								case'6'://goto back
								goto main_menu;
								break;
						
								case'7'://exit
								system("cls");
								exit(0);
								
								default:
									goto manager_service;
								
								}



employee:
	system("cls");
{
	
		struct employee
	{
		string name;
		string emp_no;
		double basic_salary;
		int ot_hour;
		int leave_day;
		double ingriment;
		double  net_salary1 ;
		double net_salary2;
		double epfemp;
		double epfcom ;
		double epf;
		double gross_salary2;
		double bank;
		double ot_rate;
	};
	
		cout<<"\n================================================================================================================="<< endl;
   	 	cout <<setw(50)<< "Details of Employees"<< endl;
 		cout<<"  ================================================================================================================="<< endl;
 	
	int p,o;
	
	cout <<setw(40)<< "First Enter The Number OF Employee Needed    : "; 
	cin >> o ;
	
	
	employee emp[o];
	
	for  (p=0; p<o ;p++){

	cout << "\n    Enter details of " << p+1 << " Employee "<<endl;
	
	
	cout <<setw(30)<< "Enter Your Name    : "; 
	cin >> emp[p].name ;
	
	cout <<setw(30) << "Input Employee No  : "; 
	cin >> emp[p].emp_no;                                
	
	cout <<setw(30) << "input Basic Salary : "; 
	cin >> emp[p].basic_salary ;
	
	
	cout <<setw(30) << "input OT Hours     : ";
	cin >> emp[p].ot_hour ;	
	
	cout <<setw(30)<< "input Leave days   : ";
	cin >> emp[p].leave_day ;	
	
	cout <<setw(30)<< "input Ingriment    : ";
	cin >> emp[p].ingriment ; 
	cout <<setw(60) << "*Data Entered to Data Base \n" << endl;


	
	emp[p].ot_rate = emp[p].basic_salary*0.01;
	emp[p].epf = emp[p].basic_salary * 3/100;
	emp[p].epfcom = emp[p].basic_salary * 12/100;
	emp[p].epfemp = emp[p].basic_salary * 8/100;
	emp[p].net_salary1= emp[p].basic_salary+ (emp[p].ot_rate *emp[p].ot_hour);
	
	

	emp[p].net_salary2 = emp[p].net_salary1 -( emp[p].basic_salary / 30 ) *emp[p].leave_day;
		
	emp[p].gross_salary2 = emp[p].net_salary2 + emp[p].ingriment - emp[p].epfemp;
	emp[p].bank = emp[p].epf + emp[p].epfcom + emp[p].epfemp;
	
	
	ifstream file("employee.txt");
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";
		
	}
	file.close();
	

		ofstream mf;
		mf.open("employee.txt");
		mf << content;

		
	
		mf<<setw(10)<< emp[p].name <<setw(13)<<emp[p].emp_no  <<setw(20)<<emp[p].basic_salary <<setw(10)<< emp[p].ot_rate<<setw(10)<<emp[p].ot_hour<<setw(17)<<emp[p].net_salary2 <<setw(12)<<emp[p].bank<<setw(15)<<emp[p].gross_salary2<<endl;
		mf.close();
 
	}
  system("pause");
	system("cls");
	goto manager_service;
}

salary:
{
 system("cls");
	

  	cout<<"\n=================================================================================================================\n"<<endl;
    cout <<setw(50)<< "Employees Salary" << endl;
    cout<<"  =================================================================================================================\n\n"<<endl;
 
 
 cout <<setw(8)<< "Name" <<setw(20)<<"Employee Id"  <<setw(18)<<"  Basic Salary(GBP)"<<setw(10)<<" OT Rate"<<setw(11)<<" OT hours"<<setw(15)<<"  Net salary(GBP)"<<setw(9)<<"  Bank(GBP)"<<setw(17)<<"  Gross Salry(GBP)"<<"\n"<<endl;
 
	ifstream file("employee.txt");
	string content;
	string line;

	while(getline(file,line))

		 cout<<line<<"\n";
		file.close();
	 cout<<"\n=================================================================================================================\n\n";



		
  system("pause");
	system("cls");
	goto manager_service;
}











//update Item		
	update_item:
	{
						struct food_i
									{
										string food_item;
										double food_price;
				
										};
				
					cout<<"\n================================================================================================================="<< endl;
			   	 	cout <<setw(50)<< "Add Details of Item"<< endl;
			 		cout<< "=================================================================================================================="<< endl;
			 	
				int j, m;

				cout <<setw(40)<< "First Enter The Number OF Items Needed   : "; 
				cin >> m ;
		
					
				food_i food[m];
				
				for  (j=0; j<m ;j++){
			
				cout << "\n    Enter details of " << j+1 << " Item "<<endl;
				
				
				cout <<setw(30)<< "Enter Name of Item    : "; 
				cin >> food[j].food_item ;
				
				cout <<setw(30) << "Input Price  : GBP :"; 
				cin >> food[j].food_price;                                
			
				
				ifstream file("fooditem.txt");
				string content;
				string line;
			
				while(getline(file,line)){
					content+=line +"\n";
					
				}
				file.close();
				
			
					ofstream mf;
					mf.open("fooditem.txt");
					mf << content;
			
					
				
					mf<<setw(15)<< food[j].food_item <<setw(13)<<"GBP"<<food[j].food_price <<".00"<<endl;
					mf.close();
			}
					goto manager_service;
					
				//update item End
			}
//see item list

price_list:
	{
		cout<<"\n\n"<<endl; 
 		 cout<<" =================================================================================================================\n"<< endl;
  	    cout <<setw(50)<< "Details of Items"<<endl;
 		cout<<"\n=================================================================================================================\n\n"<< endl;

 		cout <<"\t\t     NO:"<<setw(18)<<"      Item"<<setw(20)<<"    Price\n"<<endl;
 		cout <<setw(2)<<"                     1   "<<setw(30)<<"        Suasages Bun         GBP  0.70"<<endl;
 		cout <<setw(2)<<"                     2   "<<setw(30)<<"        Chicken Bun          GBP  1.00"<<endl;
 		cout <<setw(2)<<"                     3   "<<setw(30)<<"        Chocklet Cake        GBP  3.20"<<endl;
 		cout <<setw(2)<<"                     4   "<<setw(30)<<"        Bread                GBP  1.40"<<endl;
 		cout <<setw(2)<<"                     5   "<<setw(30)<<"        Donut                GBP  0.90"<<endl;
     	cout <<setw(2)<<"                     6   "<<setw(30)<<"        Ice Cream            GBP  0.80"<<endl;
        cout <<setw(2)<<"                     7   "<<setw(30)<<"        Coffe                GBP  0.70"<<endl;
        cout <<setw(2)<<"                     8   "<<setw(30)<<"        Omlet Bun            GBP  1.20"<<endl;
       	cout <<setw(2)<<"                     9   "<<setw(30)<<"        Cup Cake             GBP  1.10"<<endl;
 		cout <<setw(2)<<"                    10   "<<setw(30)<<"        Cookies              GBP  0.80"<<endl;
 		cout <<setw(2)<<"                    11   "<<setw(30)<<"        Cup Cake             GBP  1.10"<<endl;
 		cout <<setw(2)<<"                    12   "<<setw(30)<<"        Cookies              GBP  0.80"<<endl;
 		cout <<setw(2)<<"                    13   "<<setw(30)<<"        Marble Cake          GBP  3.20"<<endl;
 		cout <<setw(2)<<"                    14   "<<setw(30)<<"        Swiss Roll           GBP  1.00"<<endl;
 		cout <<setw(2)<<"                    15   "<<setw(30)<<"        Chocolate Mug Cake   GBP  2.00"<<endl;
     	cout <<setw(2)<<"                    16   "<<setw(30)<<"        Ice Cream            GBP  0.80"<<endl;
        cout <<setw(2)<<"                    17   "<<setw(30)<<"        Pies                 GBP  1.00"<<endl;
        cout <<setw(2)<<"                    18   "<<setw(30)<<"        Danish               GBP  1.20"<<endl;
        cout <<setw(2)<<"                    19   "<<setw(30)<<"        Cinnomon Rolls       GBP  1.50"<<endl;
        cout <<setw(2)<<"                    20   "<<setw(30)<<"        Sweet Rolls          GBP  1.50"<<endl;
        cout <<setw(2)<<"                    21   "<<setw(30)<<"        Salads               GBP  1.00"<<endl;
 		cout <<setw(2)<<"                    22   "<<setw(30)<<"        Taco Table           GBP  1.00"<<endl;
 		cout <<setw(2)<<"                    23   "<<setw(30)<<"        Doughnuts            GBP  3.00"<<endl;
 		cout <<setw(2)<<"                    24   "<<setw(30)<<"        Soup                 GBP  2.00"<<endl;
 		cout <<setw(2)<<"                    25   "<<setw(30)<<"        Lasanga              GBP  2.00"<<endl;
     	cout <<setw(2)<<"                    26   "<<setw(30)<<"        Wedding Cakes        GBP  5.50"<<endl;
        cout <<setw(2)<<"                    27   "<<setw(30)<<"        Macarons             GBP  2.00"<<endl;
 	    cout <<setw(2)<<"                    28   "<<setw(30)<<"        Petit Fours          GBP  2.80"<<endl;
     	cout <<setw(2)<<"                    29   "<<setw(30)<<"        Wedding Truffles     GBP  2.50"<<endl;
        cout <<setw(2)<<"                    30   "<<setw(30)<<"        Pudding Parfaits     GBP  2.10"<<endl;	
        
	    
			ifstream file("fooditem.txt");
			string content;
			string line;
		
			while(getline(file,line))
			
		
				 cout<<line<<"\n";
				file.close();
			 cout<<"\n=================================================================================================================\n\n";
			

     			system("pause");
     			
				system("cls");
				goto customer_service;
	}


sales_details: //Sales Details
{
	system("cls");
	cout<<"\n"<<endl; 
  cout<<"====================================================================================================================="<< endl;
    cout <<setw(50)<< "Details of Sales"<<endl;
 cout<<" =====================================================================================================================\n\n"<< endl;
 

 
 

 cout <<setw(13)<< "Name" <<setw(25)<<"item"  <<setw(15)<<"Price"<<setw(12)<<"Amount"<<setw(15)<<"Net Total"<<setw(10)<<"Total"<<"\n"<<endl;
 
	
 
	
	ifstream file("customerdata.txt");
	string content;
	string line;

	while(getline(file,line))
	

		 cout<<line<<"\n";
		file.close();
	 cout<<"\n=================================================================================================================\n\n";
	 
	 system("pause");
	 system("cls");
	 goto manager_service;
}

	//see item list end
	exit(0);                                                                                      
}          

void buy_food() //buy food
{

      	cout<<" =================================================================================================================" <<endl;
        cout<<"|                                                                                                                 |"<<endl;
  		cout <<setw(60)<<"              Buy Daily & Holiday Food Items"                                                         <<endl;
  		cout<<"|                                                                                                                 |"<<endl;
 		cout<<" =================================================================================================================\n"<< endl;
        
		
  		cout <<setw(51)<<"Details of Items\n"<<endl;
  		cout <<"                     NO:"<<setw(18)<<"Items"<<setw(20)<<"Price"     <<endl;
  		cout <<"                                                                    "<<endl; 
 		cout <<setw(2)<<"                     1   "<<setw(30)<<"        Suasages Bun         GBP  0.70"<<endl;
 		cout <<setw(2)<<"                     2   "<<setw(30)<<"        Chicken Bun          GBP  1.00"<<endl;
 		cout <<setw(2)<<"                     3   "<<setw(30)<<"        Chocklet Cake        GBP  3.20"<<endl;
 		cout <<setw(2)<<"                     4   "<<setw(30)<<"        Bread                GBP  1.40"<<endl;
 		cout <<setw(2)<<"                     5   "<<setw(30)<<"        Donut                GBP  0.90"<<endl;
     	cout <<setw(2)<<"                     6   "<<setw(30)<<"        Ice Cream            GBP  0.80"<<endl;
        cout <<setw(2)<<"                     7   "<<setw(30)<<"        Coffe                GBP  0.70"<<endl;
        cout <<setw(2)<<"                     8   "<<setw(30)<<"        Omlet Bun            GBP  1.20"<<endl;
        cout <<setw(2)<<"                     9   "<<setw(30)<<"        Smack                GBP  0.70"<<endl;
        cout <<setw(2)<<"                    10   "<<setw(30)<<"        Muffin               GBP  1.20"<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
     
        
        cout<<" =================================================================================================================" <<endl;
		cout<<"|                                                                                                                 |"<<endl;                                                        
  		cout <<setw(60)<<"            Buy Party Specials Food Items"                                                                           <<endl;
  		cout<<"|                                                                                                                 | "<<endl;
 		cout<<" =================================================================================================================\n "<<endl;                                                                                                            
        
		
  		cout <<setw(51)<<"Details of Items\n"<<endl;
  		cout <<"                    NO:"<<setw(18)<<"Items"<<setw(20)<<"Price"<<endl;
  		cout <<"                                                                    "<<endl;
 		cout <<setw(2)<<"                    11   "<<setw(30)<<"        Cup Cake             GBP  1.10"<<endl;
 		cout <<setw(2)<<"                    12   "<<setw(30)<<"        Cookies              GBP  0.80"<<endl;
 		cout <<setw(2)<<"                    13   "<<setw(30)<<"        Marble Cake          GBP  3.20"<<endl;
 		cout <<setw(2)<<"                    14   "<<setw(30)<<"        Swiss Roll           GBP  1.00"<<endl;
 		cout <<setw(2)<<"                    15   "<<setw(30)<<"        Chocolate Mug Cake   GBP  2.00"<<endl;
     	cout <<setw(2)<<"                    16   "<<setw(30)<<"        Ice Cream            GBP  0.80"<<endl;
        cout <<setw(2)<<"                    17   "<<setw(30)<<"        Pies                 GBP  1.00"<<endl;
        cout <<setw(2)<<"                    18   "<<setw(30)<<"        Danish               GBP  1.20"<<endl;
        cout <<setw(2)<<"                    19   "<<setw(30)<<"        Cinnomon Rolls       GBP  1.50"<<endl;
        cout <<setw(2)<<"                    20   "<<setw(30)<<"        Sweet Rolls          GBP  1.50"<<endl;
        
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        
        cout<<" =================================================================================================================" <<endl;
        cout<<"|                                                                                                                 |"<<endl;
  		cout <<setw(60)<<"            Buy Wedding functional Food Items"                                                                     <<endl;
  		cout<<"|                                                                                                                 |"<<endl;
 		cout<<" =================================================================================================================\n"<< endl;
 		
 		  		cout <<setw(51)<<"Details of Items\n"<<endl;
  		cout <<"                    NO:"<<setw(18)<<"Items"<<setw(20)<<"Price"<<endl;
  		cout <<"                                                                    "<<endl;
 		cout <<setw(2)<<"                    21   "<<setw(30)<<"        Salads               GBP  1.00"<<endl;
 		cout <<setw(2)<<"                    22   "<<setw(30)<<"        Taco Table           GBP  1.00"<<endl;
 		cout <<setw(2)<<"                    23   "<<setw(30)<<"        Doughnuts            GBP  3.00"<<endl;
 		cout <<setw(2)<<"                    24   "<<setw(30)<<"        Soup                 GBP  2.00"<<endl;
 		cout <<setw(2)<<"                    25   "<<setw(30)<<"        Lasanga              GBP  2.00"<<endl;
     	cout <<setw(2)<<"                    26   "<<setw(30)<<"        Wedding Cakes        GBP  5.50"<<endl;
        cout <<setw(2)<<"                    27   "<<setw(30)<<"        Macarons             GBP  2.00"<<endl;
 	    cout <<setw(2)<<"                    28   "<<setw(30)<<"        Petit Fours          GBP  2.80"<<endl;
     	cout <<setw(2)<<"                    29   "<<setw(30)<<"        Wedding Truffles     GBP  2.50"<<endl;
        cout <<setw(2)<<"                    30   "<<setw(30)<<"        Pudding Parfaits     GBP  2.10"<<endl;	
        
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
double total=0;

struct buy_foods
	{
		string name;
		string item;
		int amount;
		double price;
		double ntotal;
	};

int i,n=100;
buy_foods foods[n];

string name1;
	cout <<"\n"<<setw(25)<< "Enter Your Name    : "; 
	cin >> name1 ;
	cout<<"\t\t\t\t Enter 0 after the end of the purchase\n"<<endl;
for  (i=0; i<n ;i++){

	
	cout <<setw(30) << "Input Type of Item  : "; 
	cin >> foods[i].item; 
	
	if(foods[i].item=="0") {goto total_salary;	}                               


	
	cout <<setw(30) << "input Amount : "; 
	cin >> foods[i].amount ;
	cout<<"\n"<<endl;
	
	{
		if(foods[i].item=="1"){
			foods[i].price =0.70;
		}else if(foods[i].item=="2"){
			foods[i].price=1.00;
		}else if(foods[i].item=="3"){
			foods[i].price=3.20;
		}else if(foods[i].item=="4"){
			foods[i].price=1.40;
		}else if(foods[i].item=="5"){
			foods[i].price=0.90;
		}else if(foods[i].item=="6"){
			foods[i].price=0.80;
		}else if(foods[i].item=="7"){
			foods[i].price=0.70;
		}else if(foods[i].item=="8"){
			foods[i].price=1.20;
	    }else if(foods[i].item=="9"){
			foods[i].price=1.10;
	    }else if(foods[i].item=="10"){
			foods[i].price=0.80;	
	}
}
	
	{
		if(foods[i].item=="1"){
			foods[i].item="Suasages Bun";
		}else if(foods[i].item=="2"){
			foods[i].item="Chicken Bun";
		}else if(foods[i].item=="3"){
			foods[i].item="Chocklet Cake";
		}else if(foods[i].item=="4"){
			foods[i].item="Bread";
		}else if(foods[i].item=="5"){
			foods[i].item="Donut";
		}else if(foods[i].item=="6"){
			foods[i].item="Ice Cream";
		}else if(foods[i].item=="7"){
			foods[i].item="Coffe";		
		}else if(foods[i].item=="8"){
			foods[i].item="Omlet Bun";
	    }else if(foods[i].item=="9"){
			foods[i].item="Smack";
		}else if(foods[i].item=="10"){
			foods[i].item="Muffin";
	}
}
		{
		
			if(foods[i].item=="11"){
			foods[i].price =1.10;
		}else if(foods[i].item=="12"){
			foods[i].price=0.80;
		}else if(foods[i].item=="13"){
			foods[i].price=3.20;
		}else if(foods[i].item=="14"){
			foods[i].price=1.00;
		}else if(foods[i].item=="15"){
			foods[i].price=2.00;
		}else if(foods[i].item=="16"){
			foods[i].price=0.80;
		}else if(foods[i].item=="17"){
			foods[i].price=1.00;
		}else if(foods[i].item=="18"){
			foods[i].price=1.20;
		}else if(foods[i].item=="19"){
			foods[i].price=1.50;
		}else if(foods[i].item=="20"){
			foods[i].price=1.50;
	}
}
	{
	
		if(foods[i].item=="11"){
			foods[i].item="Cup Cake";
		}else if(foods[i].item=="12"){
			foods[i].item="Cookies";
		}else if(foods[i].item=="13"){
			foods[i].item="Marble Cake";
		}else if(foods[i].item=="14"){
			foods[i].item="Swiss Roll";
		}else if(foods[i].item=="15"){
			foods[i].item="Chocolate Mug Cake";
		}else if(foods[i].item=="16"){
			foods[i].item="Ice Cream";
		}else if(foods[i].item=="17"){
			foods[i].item="Pies";
		}else if(foods[i].item=="18"){
			foods[i].item="Danish";
		}else if(foods[i].item=="19"){
			foods[i].item="Cinnomon Rolls";
		}else if(foods[i].item=="20"){
			foods[i].item="Sweet Rolls";
		}
		
}
		

		{
		
			if(foods[i].item=="21"){
			foods[i].price =1.00;
		}else if(foods[i].item=="22"){
			foods[i].price=1.00;
		}else if(foods[i].item=="23"){
			foods[i].price=3.00;
		}else if(foods[i].item=="24"){
			foods[i].price=2.00;
		}else if(foods[i].item=="25"){
			foods[i].price=2.00;
		}else if(foods[i].item=="26"){
			foods[i].price=5.55;
		}else if(foods[i].item=="27"){
			foods[i].price=2.00;
		}else if(foods[i].item=="28"){
			foods[i].price=2.80;
		}else if(foods[i].item=="29"){
			foods[i].price=2.50;
		}else if(foods[i].item=="30"){
			foods[i].price=2.10;
		}
	}
		
	
    {
	
		if(foods[i].item=="21"){
			foods[i].item="Salads";
		}else if(foods[i].item=="22"){
			foods[i].item="Taco Table";
		}else if(foods[i].item=="23"){
			foods[i].item="Doughnuts";
		}else if(foods[i].item=="24"){
			foods[i].item="Soup";
		}else if(foods[i].item=="25"){
			foods[i].item="Lasanga";
		}else if(foods[i].item=="26"){
			foods[i].item="Wedding Cakes";
		}else if(foods[i].item=="27"){
			foods[i].item="Macarons";
		}else if(foods[i].item=="28"){
			foods[i].item="Petit Fours";
		}else if(foods[i].item=="29"){
			foods[i].item="Weddings Truffles";
		}else if(foods[i].item=="30"){
			foods[i].item="Pudding Parfaits";
		}
		
	}



	foods[i].ntotal=foods[i].price*foods[i].amount;
	total=total+foods[i].ntotal;
	
	


	//start file and save sale detailsa
	ifstream file("customerdata.txt"); 
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";
		
	}
	file.close();
	

		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;

		
		mf<<setw(15)<<name1;

		mf<<setw(25)<<foods[i].item<<setw(9)<<"GBP"<<setw(3)<<foods[i].price<<".00"<<setw(8)<<"x"<<foods[i].amount<<setw(10)<<"GBP"<<setw(4)<<foods[i].ntotal<<".00"<<endl;
		mf.close();
		//end file and save sale details
		
		//start create bill
		ifstream file2("bill.txt");
	string content2;
	string line2;

	while(getline(file2,line2)){
		content2+=line2 +"\n";
		
	}
	file.close();
		ofstream mf1;
		mf1.open("bill.txt");
		mf1 << content2;	
		mf1<<setw(19)<<foods[i].item<<setw(5)<<foods[i].price<<".00"<<setw(5)<<"x"<<foods[i].amount<<setw(10)<<"GBP"<<setw(4)<<foods[i].ntotal<<".00"<<endl;
		mf1.close();
		
		
		
		
}

//total salary print text file
total_salary:
{	
ifstream file("customerdata.txt");
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";	
	}
	file.close();

		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;

		mf<<setw(85)<<"___________GBP"<<setw(4)<<total<<".00\n"<<endl;
		mf.close();
		//end total salary print text file
		
}



//print bill
{
	system("cls");
cout<<"\n_______________________________________________"<<endl;	
cout<<"    _____    __   __    ____    ____   _____  "<<endl;
cout<<"   |     |  |  | |  |  |    |  |      |     | "<<endl;
cout<<"   |_____|  |  |_|  |  |____|  |___   |_____| "<<endl;
cout<<"   |     |  |       |  |    |  |      |  |     "<<endl;
cout<<"   |     |  |       |  |____|  |____  |   |       B A K E R Y"<<endl;
cout<<"_________________________________________________\n\n "<<endl;

cout<<"9111 West Street,CHISWICK,BRISTOL.\n"<<endl;
cout<<"--------------------------------------------------------\n"<<endl;
cout<<" Customer Name: "<<name1<<""<<endl;

	ifstream file3("bill.txt");
	string content3;
	string line3;

	while(getline(file3,line3))
	

		 cout<<line3<<"\n";
		file3.close();

cout<<"------------------------------------------------------"<<endl;
cout<<"\t\t     Total "<<setw(17)<<"GBP "<<total<<".00"<< endl;
cout<<"-----------------------------------------------------"<<endl;

cout<<"_____________________________________________________\n"<<endl;

		///open bill end
		

		//clear bill text file data
		std::ofstream ofs;
		ofs.open("bill.txt", std::ofstream::out | std::ofstream::trunc);
		ofs.close();
		
		system("pause");
		system("cls");

	}
	
	
	cout<<"\n\n\n\n\n\n\t\t\t\tThank you and Come Again"<<endl;
	
	
		int a;
	for(a=0; a<100000000; a++)
	{
		
		cout << "";
		
	}
	system("cls");
	mainmenu();
	exit(0);


} ;






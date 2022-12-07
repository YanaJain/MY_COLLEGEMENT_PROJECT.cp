#include <iostream>
#include <string.h>
#include <stdlib.h>

#include <bits/stdc++.h>
//#include <fstream>

#include <iomanip>
// <iomanip>. IO Manipulators. Header providing parametric manipulators: Parametric manipulators.
//Std::setw · Std::setfill · Std::setprecision ·Std::setiosflags

using namespace std;

class CollegeManagement{
    public:
    string ContactNumber="9425323089";
    string City="JABALPUR";
     CollegeManagement()
    {
        cout<<"*************************COLLEGE MANAGEMENT*************************"<<endl;



        cout<<"***********************WELCOME TO OUR COLLEGE***********************"<<endl;
        cout<<"**************ITS PRESENTING YOU TO THE WORLD OF BOUNTY****************"<<endl;
        cout<<"*************YOU ARE NOW IN THE CITY NAMED "<<City<<"***************"<<endl;
        cout<<"                                                                          "<<endl;
        cout<<"                                                                          "<<endl;
        cout<<"                                                                          "<<endl;
    }
    void CollegeDetails(){
        cout<<"**************GYANA GANGA INSTITUTE OF TECHNOLOGY AND SCIENCES*************"<<endl;


        cout<<"*******************************************************CONTACT NUMBER: "<<ContactNumber<<endl;
        cout<<"*******************************************************CONTACT INFO:contact@ggits.org"<<endl;
        cout<<"#NOTE: The Timings of college is from 9:00 am to 5:00 pm"<<endl;
        cout<<"                                                         "<<endl;
        cout<<"                                                         "<<endl;
        cout<<"                                                         "<<endl;
    }
};
class Department {
    public:
    char DepartmentId, DepartmentName;
    char HOD_Name[50];
    int TotalStaffs=15;
    int TotalStaffs1;
    int TotalStudents=340;
    int TotalStudents1;
    void DepartmentDetails(){
        do{
      cout<<"                                                "<<endl;
      cout<<"*****************1>MATHSDEPARTMENT******************"<<endl;
      cout<<"*****************2>ENGLISHDEPARTMENT******************"<<endl;
      cout<<"*****************3>CIVILDEPARTMENT******************"<<endl;
      cout<<"*****************4>PHYSICSDEPARTMENT******************"<<endl;
      cout<<"*****************5>EVENTS***************************"<<endl;
      cout<<"*****************6>ADD THE NAME OF NEW DEPARTMENTS******************"<<endl;
      cout<<"*****************0>Exit*******************************"<<endl;

      cout<<"                 ENTER YOUR CHOICE:"<<DepartmentId<<"        "<<endl;
      cin>>DepartmentId;
      cout<<"                                                         "<<endl;
      system("cls");
      switch(DepartmentId){
        case '0':
        break;
        case '1':
        cout<<"*****************WELCOME TO MATHS DEPARTMENT**************"<<endl;
        cout<<"Mr Dharmendra Kori is the HOD of Maths Department"<<endl;
        cout<<"Department Consist of "<<TotalStaffs<<" Faculty Members"<<endl;
        cout<<"There are Total Number "<<TotalStudents<<" of Students in the Department. "<<endl;
        break;

        case '2':
        cout<<"*****************WELCOME TO ENGLISH DEPARTMENT**************"<<endl;
        cout<<"Mrs Ruchi Ahloowalia is the HOD of Maths Department"<<endl;
        cout<<"Department Consist of "<<TotalStaffs<<" Faculty Members"<<endl;
        cout<<"There are Total Number "<<TotalStudents<<" of Students in the Department. "<<endl;
        break;

        case '3':
        cout<<"*****************WELCOME TO CIVIL DEPARTMENT**************"<<endl;
        cout<<"Mr Abhineet is the HOD of Maths Department"<<endl;
        cout<<"Department Consist of "<<TotalStaffs<<" Faculty Members"<<endl;
        cout<<"There are Total Number "<<TotalStudents<<" of Students in the Department. "<<endl;
        break;

        case '4':
        cout<<"*****************WELCOME TO PHYSICS DEPARTMENT**************"<<endl;
        cout<<"Mr Rajendra Kumar is the HOD of Maths Department"<<endl;
        cout<<"Department Consist of "<<TotalStaffs<<" Faculty Members"<<endl;
        cout<<"There are Total Number "<<TotalStudents<<" of Students in the Department. "<<endl;
        break;

        case '5':
           cout<<"***UPDATED EVENTS:-****"<<endl;
           cout<<"FRESHERS 2022"<<endl;
           cout<<"GYANOTSAV 2023"<<endl;
           cout<<"DJ NIGHT 2022"<<endl;
           break;

        case '6':
        cout<<"NAME OF THE DEPARTMENT:"<<endl;
        cin>>DepartmentName;
        cout<<"NAME OF HOD:"<<endl;
        cin>> HOD_Name;
        cout<<"NUMBER OF FACULTY:"<<endl;
        cin>>TotalStaffs1;
        cout<<"NUMBER OF NEW STUDENTS:"<<endl;
        cin>>TotalStudents1;
        
        break;
           }
        }
        while(DepartmentId!='0');
    }
    
};
class Student {
    public:
    char StudentId[50];
    char StudentName[50];
    int month, day, year, Sem;
    int ClassId;
    int choice;
    long long int contact_no;
    char address[100];

    void PayFees();
    void StudentDetails();
    void insert();
    void show();
    void search();
    void UGS();
    void PGS();
   
    };
    void Student:: StudentDetails(){
    int choice;
    char x;
    do{

    cout << "      -----------------------------" << endl;
    cout << "**********| STUDENTS DETAIL INFO |***********" << endl;
    cout << "      -----------------------------" << endl;

    cout<<"                                                     "<<endl;
    cout << "********** 1. Enter New Commer/Student record******" << endl;
    cout << "********** 2. Display New Students record**********" << endl;
    cout << "********** 3. Search student record****************" << endl;
    cout << "********** 4. Payment details**********************" << endl;
    cout<<"*************0. Exit*********************************"<<endl;
 
    cout << "............................" << endl;
    cout << "       YOUR Options:[1/2/3/4/0]" << endl;
    cout << "............................" << endl;
    cout << " Enter Your Choose: ";
    cin >> choice;
    system("cls");
    switch (choice)
    {
    case 0:
    break;
    case 1:
        do
        {
            insert();
            cout << " Add Another Student Record (Y) : ";
            cin >> x;
        } while (x == 'y' || x == 'Y');
        break;
    case 2:
        show();
        break;
    case 3:
        search();
        break;

    case 4:
        PayFees();
        break;

        default:
        cout << "Offooo Invalid Choice... Please Try Again...";
        break;
    }
    }while(choice!=0);
    }
void Student::insert() 
{
    cout << " PERSONAL DETAILS" << endl; 

    cout << "Enter The Name of Student: ";
    cin >> StudentName;
    cout << "Enter DOB.: ";
    cin >> month >> day >> year;
    cout << "Enter your Sem: ";
    cin >> Sem;
    cout << "Enter Student Id(name@ggits.net): ";
    cin >> StudentId;
    cout << "Enter Contact No: ";
    cin >> contact_no;
    cout << "Enter Address: ";
    cin >> address;
}
   
  void Student::show(){
    int start = 1;
    cout << "Displaying Record........." << endl;
    if (start != 0)
    {
        cout<<"                                            "<<endl;
        cout << "*************STUDENT RECORD**************" << endl;
        cout << "Student No.: " << start++ << endl;
        cout << "StudentName: " << StudentName <<endl;
        cout << "dob.: " << day << "," << month << "," << year << ", " << endl;
        cout << "Semester: " << Sem<< "\n";
        cout << "Email Id: " << StudentId<< "\n";
        cout << "Contact No.: " << contact_no << "\n";
        cout << "Address: " << address << "\n";
    }
    else
    {
        cout << "\n  No Data is Present" << endl;
    }  
}
void Student::search() 
{
    int start = 0;
    cout << "Searching Record........." << endl;

    cout<<"                                               "<<endl;
    cout << "***********SEARCHED STUDENT RECORD**********" << endl;
    cout << "Enter the name of student which you want to search for" << endl;
    cin >> StudentName;

    if (StudentName == StudentName)
    {
        cout << "Your Searched Data" << endl
             << endl;

        cout << " " << StudentName << "\n " << month << " " << year << " " << day << " \n " << Sem << "\n " << StudentId << "\n " << contact_no << "\n " << address << "\n";
    }
    else{
        cout << "no data present" << endl;
        cout<<  "Put something else"<<endl;
    }
}
void Student:: PayFees(){
    char mode_of_payment[10];
        
        cout<<"Enter the mode of payment(cash/online)"<<endl;
        cin>>mode_of_payment;
        cout<<"YOU HAVE TO PAY THE FOLLOWING PAYMENTS FOR THE RESPECTIVE COURSES."<<endl;
        cout<<endl;
        cout<<"B-TECH = 1500" "\t\t" "M-TECH = 2000"<<endl;
        cout<<"MBA = 1800"    "\t\t" "BSc = 1400" <<endl;
        cout<<"BA = 1500"     "\t\t" "Bcom = 1600" <<endl;
        system("cls");
    }

class UGStudent:public Student{
    public:
    void UGS(){
    cout<<"------------------------------------------"<<endl;  
    cout<<"***********ARE YOU UGSTUDENT ???**********"<<endl;
    cout<<"------------------------------------------"<<endl;  
   
    cout<<"Enter 5 for yes or 6 for no"<<endl;
    cin>>choice;
    switch (choice){
    
    case 5 :
       {   
            cout<<"Welcome My Dear"<<endl;
            cout<<"YOU ARE AN UNDERGRADUATE STUDENT"<<endl;
            cout<<"Want to opt for PG???\n its a good opprtunity\n if you are interested then Enter your name here."<<endl;
            cin>>StudentName;
            break;
        }
      
    case 6:
     PGS();
     break;
    default:
        cout<<"Either you are a UGStudent or another college Student"<<endl;
        break;
    } 
    }   
};
class PGStudent: public Student{
    public:
    
};
void Student ::PGS(){
    cout<<"*************THANKYOU FOR ADMITTING HERE*************"<<endl;
    cout<<"*************WISHING YOU HAVE A GOOD AHEAD**************"<<endl;
    cout<<"*************HOPE YOU ENJOY HERE********************* "<<endl;
}
class Staff {
      public:
    int StaffId;
    char Staffname[30];
    char DepartmentName[30];
    int salary;

   void AddStaffDetails();
   void Print_StaffDetails();
   void Staff1();
   void Staff2();
   
};
void Staff:: AddStaffDetails()
{    
    cout<<"                                                  "<<endl; 
     cout<<"-------------------------------------------------"<<endl;	
     cout<<"*********WELCOME TO STAFF SECTION OF COLLEGE**********"<<endl;
     cout<<"-------------------------------------------------"<<endl;
    cout<<"                                                  "<<endl; 
	
   
        cout<<"Enter the STAFF ID. "<<endl;;         
         cin>>StaffId;
         cout<<"Enter the Staff Name: "<<endl;;         
         cin>>Staffname;
         cout<<"Name of the department staff member belongs to:"<<endl;
         cin>>DepartmentName;
         cout<<"Enter The salary of particular Staff Member: "<<endl;
         cin>>salary;
    
}
void Staff:: Print_StaffDetails(){
    
        cout<<StaffId<<"\n"<<Staffname<<"\n"<<DepartmentName<<"\n"<<salary<<endl;
    
}

class TeachingStaff:public Staff{
    public:
    void Staff1();
};

    void Staff:: Staff1(){
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"**********TEACHING STAFF OF COLLEGE******************"<<endl;
        cout<<"-----------------------------------------------------"<<endl;

        cout<<"THE PROFESSOR'S WHO TEACH YOU ARE THE TEACHINGSTAFF OF YOUR COLLEGE...."<<endl;
        cout<<"We have a very good faculty for different department\n we can also add new members too"<<endl;
        
    }

class NonTeachingStaff:public Staff{
    public:
    void Staff2();
};
 void Staff:: Staff2(){
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"**********NON-TEACHING STAFF OF COLLEGE******************"<<endl;
        cout<<"-----------------------------------------------------"<<endl;

        cout<<"THE FACULTY MEMBERS WFO ORGANISE THE OTHER SYSTEMS OF COLLEGE RATHER THAN TECHING ARE THE NONTEACHING STAFF MEMBERS OF COLLEGE"<<endl;
        cout<<"Also We have NonTeaching Faculty for different department\nWe can add new members too"<<endl;
        
    }

class Classroom:public Student{
        public:
    int ClassId;
    int section;
    int DepartmentId;
    
    void ClassroomDetails()
           {
            
do
{
system("cls");
cout<<"                                                 "<<endl;
cout<<"-------------------------------------------------"<<endl;	
cout<<"***********WELCOME TO THE CLASSROOM**************"<<endl;
cout<<"-------------------------------------------------"<<endl;	

cout<<" 1 ClassRoom Details:";
cout<<"\n 2 DepartmentId Classes belong To";
cout<<"\n 3 Hall";
cout<<"\n 0 Exit";


cout<<"\n Enter your choice: ";
cin>>choice;
switch (choice){
    case 0:
    break;
    case 1:
    cout<<"There are about 500 ClassRooms in the college"<<endl;
    IsOccupied();
    
    break;
    case 2:
    cout<<"Enter the Class ID you want to go"<<endl;
    cin>>ClassId;
    if(ClassId<=500){
        IsOccupied();
    }
    else {
        cout<<"You are not allowed to enter in the Classroom"<<endl;
    }
    break;
    case 3:
    cout<<"GUYYYS.... WELCOME TO THE SPANDAN HALL....."<<endl;
    cout<<"ITS A PLACE FOR THE MEMORY..........."<<endl;
    break;
    default:
    cout<<"Invalid Choice,Enter again"<<endl;

}
    }
    while(choice!=0);
}
    void IsOccupied(){
        cout<<"Enter the ClassId:"<<endl;
        cin>>ClassId;
        cout<<"Enter the section of the Classroom"<<endl;
        cin>>section;
        cout<<"Department Id for the Classroom belong to."<<endl;
        cin>>DepartmentId;
        cout<<"Congratulations.....You Are now in the college's Classroom"<<endl;

    }
            
};

class Canteen{
    public:
    int price,price1;int TotalPrice;int Offer,Offer1;

    void ShowItems(){
       char a;
   
    do
    {
        cout<<"                                              "<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"****************WELCOME TO CANTEEN GUYYS***************"<<endl;
        cout<<"            |                     |"<<endl;
        cout<<"            |       1)Fast Food   |"<<endl;
        cout<<"            |       2)SouthIndian |"<<endl;
        cout<<"            |       3)Chinese     |"<<endl;
        cout<<"            |       4)Indian      |"<<endl;
        cout<<"            |       0)Exit        |"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"                 select the menu: "<<endl;
        cin>>a;
        switch(a)
        {
        case '0':
            break;
        case '1':
             system("CLS");
           cout<<"1.French Fries=60"<<"\n"<<"2.Momos=50"<<"\n"<<"3.Grtilled Sandwich=70"<<"\n"<<endl;
            break;
        case '2':
             system("CLS");
           cout<<"1.Dosa=60"<<"\n"<<"2.Idli=30"<<"\n"<<"3.Utpam=40"<<"\n"<<endl;
            break;
         case '3':
             system("CLS");
           cout<<"1.Noodles=60"<<"\n"<<"2.Pasta=50"<<"\n"<<"3.Manchuriun=70"<<"\n"<<endl;
            break;
         case '4':
             system("CLS");
           cout<<"1.Dal Rice =60"<<"\n"<<"2.Chapati=8"<<"\n"<<"3.Paneer Bhurji=70"<<"\n"<<endl;
            break;   
        }
    }
    while(a!='0');
    }
    void Buy(){
        cout<<"                                              "<<endl;
        cout<<"Enter the price of dish you want to Eat: "<<endl;
        cin>>price;
        cout<<"Enter the price of another item you want to take: "<<endl;
        cin>>price1;
        TotalPrice=price+price1;
        TotalPrice=TotalPrice+3;
    }
    void Bill(){
        cout<<"                                              "<<endl;

        cout<<"*******Thanks for your order Ma'am /Sir******"<<endl;
        cout<<"Your Total Bill is: "<<TotalPrice<<endl;
        }
    void Discount(){
        if(TotalPrice >=100){
            cout<<"                                              "<<endl;

            cout<<"*******Congratulations*******"<<endl;
            cout<<"We have some offers for you."<<endl;
            cout<<"You got the discout of 5% for your order"<<endl;
            Offer=(5*TotalPrice)/100;
            Offer1=TotalPrice-Offer;
            cout<<Offer1;
            cout<<"                                              "<<endl;
            cout<<"Thanks for Visiting....."<<endl;
        }
        else{
            cout<<"                                              "<<endl;
        
            cout<<"Your Total Bill is: "<<TotalPrice<<endl;
            cout<<"Thanks for Visiting....."<<endl;

        }
        }
    };

//discount = (amount*25)/100;
    //     topaid = amount-discount
class Library{
    public:
    int LibraryId=9876;
    int days;
    
    int TotalBooks;
    char BookName[50];
    void SearchBooks();
    void LendBooks();
    void ReturnBooks();
    void PayFine();

     void LibraryDetails(){
          
          char z;
   
    do
    {
        cout<<"                                              "<<endl;
    
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"*********WELCOME TO THE LIBRARY OF YOUR COLLEGE******"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        
        cout<<"|                                  |"<<endl;
        cout<<"|       1)Mathematics Department   |"<<endl;
        cout<<"|       2)Enviorment Chemistry     |"<<endl;
        cout<<"|       3)Coding Section           |"<<endl;
        cout<<"|       4)Novels                   |"<<endl;
        cout<<"|       0)Exit                     |"<<endl;
        
        cout<<"----------------------------------------------"<<endl;
        cout<<"                 select the place: "<<endl;
        cin>>z;
        switch(z)
        {
        case '0':
            break;
        case '1':
             {system("CLS");
           cout<<"                                              "<<endl;
         
           cout<<"IT'S MATHEMATICS DEPARTMENT.............."<<endl;
           cout<<"We have different books related to different Branch"<<endl;
           cout<<"Select the Section you want to take.>>>>>"<<endl;
           char e;
           do{
        cout<<"----------------------------------------------"<<endl;

          cout<<"|       1)ENGINEERING              |"<<endl;
          cout<<"|       2)PHARMACY                 |"<<endl;
          cout<<"|       3)MCA                      |"<<endl;
          cout<<"|       *)Exit                     |"<<endl;
        
        cout<<"----------------------------------------------"<<endl;
        cout<<"         select the BookSection: "<<endl;
        cin>>e;
         switch(e)
        {
        case '0':
            break;
        case '1':
             system("CLS");
           cout
           <<"We have Various Books for Engineering Student..."<<endl;
           cout<<"1.M1"<<"\n"<<"2.M2"<<"\n"<<"3.M3"<<"\n"<<"And Many More"<<endl;
            break;
        case '2':
             system("CLS");
            cout<<"We have Various Books for Pharmacy Student..."<<endl;
            cout<<"1.Matrices"<<"\n"<<"2.Intro to Trigonometry" <<endl;
            break;
         case '3':
             system("CLS");
            cout<<"We have Various Books for MCA Student..."<<endl;
            cout<<"1.Statistic"<<"\n"<<"2.Probability"<<endl;
            break;
        }
           }
           while(e!='*');
        }    
        case '2':
             system("CLS");
           cout<<"IT'S CHEMISTRY DEPARTMENT.............."<<endl;
           cout<<"We have different books related to different Branch"<<endl; 
           cout<<"1.EEES(Energy and Enviornment Engineering)"<<endl;
           cout<<"2.Enviornmental Chemistry"<<endl;
            break;
         case '3':
            system("CLS");
           cout<<"IT'S CODING SECTION.............."<<endl;
           cout<<"1.JAVA SECTION."<<endl; 
           cout<<"2.C Language"<<endl;
           cout<<"3.C++ Language"<<endl;
           cout<<"4.Python"<<endl;
           case '4':
            system("CLS");
           cout<<"IT'S A NOVEL SECTION.............."<<endl;
           cout<<"1.Romance"<<endl; 
           cout<<"2.Thriller"<<endl;
           cout<<"3.Fiction"<<endl;
           cout<<"4.Fantasy"<<endl;
          
        }
     }    
    while(z!='0');
    
   }  };
     void Library ::SearchBooks(){
       cout<<"Name of the Book you want to search for: "<<endl;
       cin>> BookName;
       if(BookName==BookName){
           cout<<"It is available"<<endl;
       }
       else{
           cout<<"It is not available"<<endl; 
       }
     }
     void Library ::LendBooks(){
         cout<<"Enter the Library ID: "<<endl;
         cin>>LibraryId;
         if(LibraryId==LibraryId){
             cout<<"You are eligible to lend a book."<<endl;
         }
         else{
            cout<<"You are not eligible to lend a book."<<endl; 
         }
        cout<<"Enter the name of the book you want to lend: "<<endl;
        cin>> BookName;
        cout<<"Enter the name of the another book you want to lend: "<<endl;
        cin>> BookName;
        }
     void Library ::ReturnBooks(){
         cout<<"You lend the book: "<<BookName<<endl;
         cout<<"You have to return it  under 30 days,otherwise you have to pay the fine."<<endl;
         }
     void Library ::PayFine(){
        cout<<"Enter the number of days you returned your book= "<<endl;
        cin>>days;
        if(days>31){
        cout<<"you have to pay 50 rupees as a fine for late returning."<<endl;
        cout<<"*************HAPPY LEARNING*************"<<endl;
        }
        else{
        cout<<"                                        "<<endl;
        cout<<"*************HAPPY LEARNING*************"<<endl;
        }
     }
 
class Bus{
    public:
    int BusId;
    int BusNumber;
    int TotalSeats;
   
     void BusDetails();
     void SeatsAvailability();
     void ShowSeatAvailability();
}; 

    void Bus:: BusDetails(){
do
{
system("cls");
cout<<"----------------------------------------------------"<<endl;
cout<<"*****************BUS RELATED INFO.******************"<<endl;
cout<<"----------------------------------------------------"<<endl;

cout<<" 1. This is the Bus N0 1"<<endl;
cout<<" 2. This is the Bus N0 2"<<endl;
cout<<" 3. This is the Bus N0 3"<<endl;
cout<<" 4. Exit"<<endl;
cout<<"\n Enter your choice: ";
cin>>BusId;
switch (BusId)
{
    
case 1:
     cout<<"You have entered 1 and want to know about it"<<endl;
     cout<<"your bus number is 1111"<<endl;
     cout<<"Which is going to Damoh Naka"<<endl;
     cout<<"You Can check the availability here"<<endl;
     cin>>TotalSeats;
     SeatsAvailability();
     ShowSeatAvailability();
    break;
case 2:    
     cout<<"You have entered 2 and want to know about it"<<endl;
     cout<<"your bus number is 2222"<<endl;
     cout<<"Which is going to Adhaartal"<<endl;
     cout<<"You Can check the availability here"<<endl;
     cin>>TotalSeats;
     SeatsAvailability();
     ShowSeatAvailability();
    break;
case 3:
     cout<<"You have entered 3 and want to know about it"<<endl;
     cout<<"your bus number is 3333"<<endl;
     cout<<"Which is going to SmanvayChowk"<<endl;
     cout<<"You Can check the availability here"<<endl;
     
     cin>>TotalSeats;
     SeatsAvailability();
     ShowSeatAvailability();
    break;
    case 4:
    break;
   
default:
cout<<"You have entered Something Wrong"<<endl;
    break;
}
     }while(BusId!=4);
    
    }
     
     void Bus:: SeatsAvailability(){
           if(TotalSeats<=35){
            cout<<"**********Congratulations************"<<endl;
            cout<<"We have the availability of seat for you"<<endl;
           }
           else{
            cout<<"We Are really SORRY:(  ..............."<<endl;
            cout<<"We don't have the availability of seat for you"<<endl;
           }
     }
     void Bus:: ShowSeatAvailability(){
        cout<<"your bus number is: "<<BusId<<endl;
       }


class Hostel{
    public:
    int StudentId;
    int BlockNumber;
    int RoomNumber;

    virtual void HostelDetails(){
        cout<<"                                                    "<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"*****************HOSTEL RELATED INFO.******************"<<endl;
        cout<<"***WE ARE PROVIDING YOU THE HOSTEL FACILITIES TOO*****"<<endl;
        cout<<"----------------------------------------------------"<<endl;

        cout<<"Enter the  Student ID:"<<endl;
        cin>>StudentId;
        cout<<"Enter his/her Block number in the Hostel:"<<endl;
        cin>>BlockNumber;
        cout<<"Room number of the Student that has given to him/her:"<<endl;
        cin>>RoomNumber;
        
    }
    void In(){
        cout<<"The Timing for the Student to entered in the Hostel is 6:00 am "<<endl;
    }
    void Out(){
        cout<<"The Timing for the Student to entered in the Hostel is before 9:00 pm "<<endl;
    }
    void ShowHostelDetails(){
        cout<<"******YOU HAVE FOLLOWING DETAILS ABOUT YOUR HOSTEL******"<<endl;
        cout<<"Your Id is          :"<<StudentId<<endl;
        cout<<"your block number is:"<<BlockNumber<<endl;
        cout<<"your Room number is : "<<RoomNumber<<endl;
        In();
        Out();
    }
};

class BoysHostel:Hostel{
    public:
    virtual void HostelDetails1(){
        system("cls");
        cout<<"                                      "<<endl;
        cout<<"**************************************"<<endl;
        cout<<"#####WELCOME TO THE GYAN GANGA BOYS HOSTEL####"<<endl;
        cout<<"Enter the Student name and Student ID:"<<endl;
        cin>>StudentId;
        cout<<"Enter his/her Block number in the Hostel:"<<endl;
        cin>>BlockNumber;
        cout<<"Room number of the Student that has given to him:"<<endl;
        cin>>RoomNumber;
        
    }
    void In1(){
        cout<<"The Timing for the Student to entered in the Hostel is 5:00 am "<<endl;
    }
    void Out1(){
        cout<<"The Timing for the Student to entered in the Hostel is before 10:00 pm "<<endl;
    }
    void ShowHostelDetails1(){
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        cout<<"******YOU HAVE FOLLOWING DETAILS ABOUT YOUR HOSTEL******"<<endl;
                cout<<"You are now in the Boys Hostel"<<endl;

        cout<<"Your Id is          :"<<StudentId<<endl;
        cout<<"your block number is:"<<BlockNumber<<endl;
        cout<<"your Room number is : "<<RoomNumber<<endl;
        In();
        Out();
    }
};
class GirlsHostel:Hostel{
    public:
    virtual void HostelDetails2(){
        system("cls");
        cout<<"**************************************"<<endl;
        cout<<"#####WELCOME TO THE GYAN GANGA GIRLS HOSTEL####"<<endl;
        cout<<"Enter the Student name and Student ID:"<<endl;
        cin>>StudentId;
        cout<<"Enter his/her Block number in the Hostel:"<<endl;
        cin>>BlockNumber;
        cout<<"Room number of the Student that has given to her:"<<endl;
        cin>>RoomNumber;
        
    }
    void In2(){
        cout<<"The Timing for the Student to entered in the Hostel is 6:00 am "<<endl;
    }
    void Out2(){
        cout<<"The Timing for the Student to entered in the Hostel is before 8:00 pm "<<endl;
    }
    void ShowHostelDetails2(){
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;

        cout<<"******YOU HAVE FOLLOWING DETAILS ABOUT YOUR HOSTEL******"<<endl;
                  cout<<"You are now in the Girls Hostel"<<endl;
        cout<<"Your Id is          :"<<StudentId<<endl;
        cout<<"your block number is:"<<BlockNumber<<endl;
        cout<<"your Room number is : "<<RoomNumber<<endl;
        In();
        Out();
    }
};
                 
class Parking : public Student{
    public:
    int SlotId;
    int VehicleNumber;
    char VehicleOwnerName[50];

    void ParkVehicle(){
        cout<<"                                                    "<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"****************WELCOME TO THE PARKING**************"<<endl;
        cout<<"----------------------------------------------------"<<endl;
          cout<<"Enter the Name of the Student"<<endl;
          cin>>StudentName;
          if(StudentName==StudentName){
            cout<<"You Have Given A slot for Parking"<<endl;
          }
          else{
            cout<<"You have to Show your parking slip"<<endl;
          }
    }
    void ParkedVehicle(){
          ParkVehicle();
          cout<<"Your slot number is:"<<endl;
          cin>>SlotId;
          cout<<"Your Vehicle number is:"<<endl;
          cin>>VehicleNumber;
          cout<<"Your Vehicle Owner Name:"<<endl;
          cin>>VehicleOwnerName;
    }
    void PrintParkingR(){
        cout<<"YOU ARE ELIGIBLE FOR PARKING:::"<<endl;
        cout<<"you are :"<<VehicleOwnerName<<"\n"<<"Your vehicle No is: "<<VehicleNumber<<"\n"<<"Your slot number for Parking is: "<<SlotId<<"\n"<<"Student Name is: "<<StudentName<<endl;
    }
    
};

class Auditorium{
    public:
    string AuditoriumName;
    string EventsList;
    int Date;
    int TotalSeats;
    int DepartmentId;
    void Events(){
        system("cls");
        cout<<"----------------------------------------------------"<<endl;
        cout<<"                                                     "<<endl;
        cout<<"WELCOME TO THE COLLEGE'S AUDITORIUM------'SPANDAN'"<<endl;
        cout<<"                                                    "<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"                                                    "<<endl;
        cout<<"GYANOTSAV IS GOING TO ORGANISE IN THE NEXT MONTH"<<endl;
        cout<<"Events are  1.RAMP "<<endl;
        cout<<            "2.DJ   "<<endl;
        cout<<            "3.DANCE   "<<endl;
        cout<<            "4.RAP  "<<endl;
        cout<<"DATES TO RESERVE FOR THE CELEBRATION ARE  3 4 5 JAN 2023"<<endl;
        cout<<"                                      "<<endl;
        cout<<"@@@@@@@@@@@@@@@@HURRYUP@@@@@@@@@@@@@@@"<<endl;
        cout<<"                                      "<<endl;
        cout<<"THERE ARE LIMITED SEATS AVAILABLE FOR THE LIMITED TIME PERIOD"<<endl;
        
    }
    void AddE(){
        cout<<"Name of the place: "<<AuditoriumName<<endl;
        cout<<"We can add some of the events:  "<<endl;
        cin>>EventsList;
        cout<<"we will be waiting for you: "<<endl;
        cin>>Date;
        
       }
    void BookEvents(){
        cout<<"Enter your Department ID: "<<endl;
        cin>>DepartmentId;
        
        if(DepartmentId==DepartmentId){
            cout<<"YOU ARE MOST WELCOME ...."<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"That's All about My College Management Project......"<<endl;
    cout<<"THANKYOU SO MUCH FOR YOUR PATIENCE.................."<<endl;
            }
           else{
                cout<<"SORRY,,,YOU ARE LATE"<<endl;
            }

    }

};
int main(){
    CollegeManagement C;
    C.CollegeDetails();
    Department D;
    D.DepartmentDetails();
    Student S;
    S.StudentDetails();
    S.insert();
    S.show();
    S.search();
    S.PayFees();
    UGStudent U;
    U.UGS();
    U.PGS();
    Staff s;
    s.AddStaffDetails();
    cout<<"****Staff Information is :"<<endl;
    s.Print_StaffDetails();
    s.Staff1();
    s.Staff2();
    Classroom c;
    c.ClassroomDetails();
    c.IsOccupied();
    Canteen t;
    t.ShowItems();
    t.Buy();
    t.Bill();
    t.Discount();
     Library L;
    L.LibraryDetails();
    L.SearchBooks();
    L.LendBooks();
    L.ReturnBooks();
    L.PayFine();
    Bus B;
    B.BusDetails();
    B.SeatsAvailability();
    B.ShowSeatAvailability();
    Hostel H;
    H.HostelDetails();
    H.In();
    H.Out();
    H.ShowHostelDetails();
    BoysHostel b;
    b.HostelDetails1();
    b.In1();
    b.Out1();
    b.ShowHostelDetails1();
    GirlsHostel G;
    G.HostelDetails2();
    G.In2();
    G.Out2();
    G.ShowHostelDetails2();
    Parking P;
    P.ParkVehicle();
    P.ParkedVehicle();
    P.PrintParkingR();
    Auditorium A;
    A.Events();
    A.AddE();
    A.BookEvents();
    
   return 0;

}

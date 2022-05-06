#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int age;
string name,tr="No trainer selected";

class gym
{
    public:
    void registration() //Registration fees of the gym
    {
        std:: cout<< "Registration Fees for Male   : Rs 250"<<std::endl;
        std:: cout<< "Registration Fees for Female : Rs 200"<<std::endl;
    }
    void memborship(int m) // Memborship charges according to the number of months
    {
       double rs=1000.00;
       if(m==0)
       std:: cout<< "For 1 month memborship fees   : Rs  0.00"<< fixed << setprecision(2)<<std::endl;
       else if(m==1)
       std:: cout<< "For "<<m<<" month memborship fees  : Rs  "<< fixed << setprecision(2)<<rs<<std::endl;
       else if(m>1 && m<=3)
       std:: cout<< "For "<<m<<" months memborship fees  : Rs "<< fixed << setprecision(2)<<(rs*m)-(0.10*rs*m)<<std::endl; //discount of 10 %
       else if(m>3 && m<=6)
       std:: cout<< "For "<<m<<" months memborship fees  : Rs "<< fixed << setprecision(2)<<(rs*m)-(0.20*rs*m)<<std::endl; //discount of 20 %
       else if(m>6 && m<=12)
       std:: cout<< "For "<<m<<" months memborship fees  : Rs "<< fixed << setprecision(2)<<(rs*m)-(0.30*rs*m)<<std::endl; //discount of 30 %
       else
       std:: cout<< "For "<<m<<" months memborship fees  : Rs "<< fixed << setprecision(2)<<(rs*m)-(0.40*rs*m)<<std::endl; //discount of 40 %
    }

    void trainers() //trainer's details
{
   string s[]={"No trainer selected","Mr. Arnav Krishna Saxena","Ms. Mahima Saxena","Mr. Virat", "Mr. Yatinder Singh "};
   int ch;
   std::cout<<"Trainers of the Gym are :"<<std::endl;
   std::cout<<"1. Mr. Arnav Krishna Saxena"<<std::endl;
   std::cout<<"2. Ms. Mahima Saxena"<<std::endl;
   std::cout<<"3. Mr. Virat "<<std::endl;
   std::cout<<"4. Mr. Yatinder Singh "<<std::endl;
   std::cout<<"Enter which no. of trainer you want to choose"<<std::endl;
   std::cin>>ch;
   if(ch<5 && ch>0)
   {
       tr=s[ch];
   }
   else
   {
       tr=s[0];
   }
}

void timings() //timings of the gym
{
   std:: cout<< "Timings of the Gym are :"<<std::endl;
   std:: cout<< "Monday    : 7:00 am to 1:00 pm and 4:00 pm to 9:00 pm"<<std::endl; 
   std:: cout<< "Tuesday   : 7:00 am to 1:00 pm and 4:00 pm to 9:00 pm"<<std::endl;
   std:: cout<< "Wednesday : 7:00 am to 1:00 pm and 4:00 pm to 9:00 pm"<<std::endl;
   std:: cout<< "Thursday  : 7:00 am to 1:00 pm and 4:00 pm to 9:00 pm"<<std::endl;
   std:: cout<< "Friday    : 7:00 am to 1:00 pm and 4:00 pm to 9:00 pm"<<std::endl;
   std:: cout<< "Saturday  : 7:00 am to 1:00 pm and 4:00 pm to 9:00 pm"<<std::endl;
   std:: cout<< "Sunday    : 7:00 am to 11:00 am"<<std::endl;
}

void equipments() //equipments available in the gym
{
  std::cout<< " 1.Dumbells"<<std::endl;
  std::cout<< " 2.Adjustable bench"<<std::endl;
  std::cout<< " 3.Barbell stand"<<std::endl;
  std::cout<< " 4.Cable Crossover or Functional Trainer"<<std::endl;
  std::cout<< " 5.Decline Bench press"<<std::endl;
  std::cout<< " 6.Flat bench presss"<<std::endl;
  std::cout<< " 7.Smith machine"<<std::endl;
  std::cout<< " 8.Treadmill"<<std::endl;
  std::cout<< " 9.Lat Pulling Down"<<std::endl;
  std::cout<< "10.Hack squat"<<std::endl;
  std::cout<< "11.Hammer single station"<<std::endl;
  std::cout<< "12.Indoor Rower"<<std::endl;
  std::cout<< "13.Leg Curl Extensions"<<std::endl;
  std::cout<< "14.Leg Curl Extension"<<std::endl;
}

void exercises() //exercises for diffrent body parts
{
  std::cout<< "Hamstrings:\nSquats\nDeadlifts\nCalves:\nJump rope\nDumbbell jump squat\nChest:\nBench press\nDips\nBack:\nDeadlifts\nPull-ups/ Chin-ups"<<std::endl;
}

void location() //location and contact information of the gym
{
  std::cout<< "Location : Thakurganj , Lucknow , Uttar Pradesh , 226003"<<std::endl;
  std::cout<< "Contact Information :"<<std::endl;
  std::cout<< "Phone Number : +91 9876543210"<<std::endl;
  std::cout<< "Email Id     : ruffit8055@gmail.com"<<std::endl; 
}
 
void choice(int ch)
{
  switch(ch)
        {
             case 1:
             {
                 registration();
                 break;
             }
             case 2:
             {
             int m;
             std::cout<<"Enter months for taking gym"<<std::endl;
             std::cin>>m;
             memborship(m);
             break;
             }
             case 3:
             {
                trainers();
                break;

             }
             case 4:
             {
                timings();
                break;

             }
             case 5:
             {
                equipments();
                break;

             }
             case 6:
             {
                exercises();
                break;

             }
             case 7:
             {
                location();
                break;

             }
             default:
             { 
               std::cout<<"Wrong choice"<<std::endl;
               break;  
             }
    
        }
} 

};


int main()
{
    gym obj1;
    std:: cout<< "*****WELCOME TO RUFFIT GYM*****"<<std::endl;
    std:: cout<< "Enter your name and age"<<std::endl;
    std::cin>>name;
    std::cin>>age;
    int ch=0;
    std::cout<<"Enter your choice :"<<std::endl;
    std::cout<<"1. Registration fees"<<std::endl;
    std::cout<<"2. Memborship fees"<<std::endl;
    std::cout<<"3. Trainers"<<std::endl;
    std::cout<<"4. Timings of the Gym"<<std::endl;
    std::cout<<"5. Equipments"<<std::endl;
    std::cout<<"6. Exercises for different days"<<std::endl;
    std::cout<<"7. Location and Contact Information"<<std::endl;
    std::cout<<"8. Exit"<<std::endl;
    
    while(true) // To execute code till user wants to exit
    {
        std::cout<<"Enter your choice"<<std::endl;
        std::cin>>ch;
        if(ch==8) // to exit from the code and display user details
        {
           std::cout<<"*****THANK YOU ! "<<name<<"*****"<<std::endl;
          std::cout<<"Trainer Selected : "<<tr<<std::endl;
          return 0;
        }
        else
        {
           obj1.choice(ch); // to execute the user's choice
        }
    }
    
    return 0;
}
#include<iostream>
using namespace std;
void calculate_fuel(float dis);
main(){
float distance; 
cout<<"Enter the distance: ";
cin>>distance;
calculate_fuel(distance);
}
void calculate_fuel(float dis)
{
float fuel;
fuel=dis*10;
cout<<"Fuel needed: "<<fuel;
}
#include<iostream>
using namespace std;
void feet(float inch);
main(){
float m_v_inches;
cout<<"Enter the measurement in inches: ";
cin>>m_v_inches;
feet(m_v_inches);
}
void feet(float inch)
{float feets;
feets=inch/12;
cout<<"Equivalent in feet: "<<feets;
}
#include<iostream>
using namespace std;
void sticker(int l);
main()
{
int length;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>length;
sticker(length);
}
void sticker(int l)
{ int stickers;
stickers=l*l*6;
cout<<"Number of stickers needed: "<<stickers;
}
#include<iostream>
using namespace std;
void add(float a,float b);
void sub(float a,float b);
void mult(float a,float b);
void div(float a,float b);
main()
{
	float num1,num2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	if(op=='+')
{
	add(num1,num2);
}
	if(op=='-')
{	
	sub(num1,num2);
}	 
	if(op=='*')
{
	mult(num1,num2);
}
	if(op=='/')
{
	div(num1,num2);
}
}
void add(float a,float b)
{
	float sum=a+b;
	cout<<"Addition: "<<sum;
}
void sub(float a,float b)
{
	float subt=a-b;
	cout<<"Subtraction: "<<subt;
}
void mult(float a,float b)
{
	float mul=a*b;
	cout<<"Multiplication: "<<mul;
}
void div(float a,float b)
{
	float divd=a/b;
	cout<<"Division: "<<divd;
}
#include<iostream>
using namespace std;
void age(int n);
main(){
int age_of_person;
cout<<"Enter your age: ";
cin>>age_of_person;
age(age_of_person);	
}
void age(int n)
{

if(n>=18)
cout<<"You are eligible to vote.";
else
cout<<"You are not eligible to vote.";
}
#include<iostream>
using namespace std;
void result(int scores);
main(){
int marks;
cout<<"Enter your score: ";
cin>>marks;
result(marks);
}
void result(int scores)
{

if(scores>50)
cout<<"Pass";
else
cout<<"Fail";
}
#include<iostream>
using namespace std;
void even(int num);
void odd(int num);
main()
{ 
int number;
cout<<"Enter a number: ";
cin>>number;
if(number%2==0)
 even(number);
else
odd(number);
}
void even(int num)
{
cout<<"Number "<<num<<" is even";
}
void odd(int num)
{
cout<<"Number "<<num<<" is odd";
}
#include<iostream>
using namespace std;
void discount(float purchase,string A);
main()
{
string day;
float total_purchase;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>total_purchase;
discount(total_purchase,day);

}
void discount(float purchase,string A)
{
if(A =="Sunday")
{ 
float discount,payable_amount;
discount=(purchase*10)/100;
payable_amount=purchase-discount;
cout<<"Payable Amount: $"<<payable_amount;
}
else
{
cout<<"Payable Amount: $"<<purchase;
}
#include<iostream>
using namespace std;
void discount(float purchase,string A);
main()
{
string day;
float total_purchase;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>total_purchase;
discount(total_purchase,day);

}
void discount(float purchase,string A)
{
if(A =="Sunday")
{ 
float discount,payable_amount;
discount=(purchase*10)/100;
payable_amount=purchase-discount;
cout<<"Payable Amount: $"<<payable_amount;
}
else
{
cout<<"Payable Amount: $"<<purchase;
}
}
#include<iostream>
using namespace std;
void calculate_fuel(float dis);
main(){
float distance; 
cout<<"Enter the distance: ";
cin>>distance;
calculate_fuel(distance);
}
void calculate_fuel(float dis)
{
float fuel;
fuel=dis*10;
if(fuel<100)
cout<<"Fuel needed: 100";
else
cout<<"Fuel needed: "<<fuel;
}
#include<iostream>
void numbers(int num_1,int num_2);
using namespace std;
main()
{
int a,b;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
numbers(a,b);
}
void numbers(int num_1,int num_2)
{
if(num_1==num_2) 
{
cout<<"true";
}
else
{
cout<<"false";
}
}
#include<iostream>
void true_false(std::string a);
using namespace std;
main(){
string a;
cout<<"Enter 'true' or 'false': ";
cin>>a;
true_false(a);
}
void true_false(std::string a)
{
if(a=="true")
cout<<"false";
if(a=="false")
cout<<"true";
}
#include<iostream>
void Pakistan(float a,float b);
void Ireland(float a,float b);
void India(float a,float b);
void England(float a,float b);
void Canada(float a,float b);
using namespace std;
main(){
float num1,num2;
string name;
cout<<"Enter the country's name: ";
cin>>name;
cout<<"Enter the ticket price in dollars: $";
cin>>num1;
if(name=="Pakistan")
Pakistan(num1,num2);
else if(name=="Ireland")
Ireland(num1,num2);
else if(name=="India")
India(num1,num2);
else if(name=="England")
England(num1,num2);
else
Canada(num1,num1);

}
void Pakistan(float a,float b)
{
b=a-a*0.05;
cout<<"Final ticket price after discount: $"<<b;
}
void Ireland(float a,float b)
{
b=a-a*0.1;
cout<<"Final ticket price after discount: $"<<b;
}
void India(float a,float b)
{
b=a-a*0.2;
cout<<"Final ticket price after discount: $"<<b;
}
void England(float a,float b)
{
b=a-a*0.3;
cout<<"Final ticket price after discount: $"<<b;
}
void Canada(float a,float b)
{
b=a-a*0.45;
cout<<"Final ticket price after discount: $"<<b;
}
#include<iostream>
void check_Speed(int speed);
using namespace std;
main ()
{
int s;
cout<<"Speed: ";
cin>>s;
check_Speed(s);
}
void check_Speed(int speed)
{
if(speed>100)
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
if(speed<=100)
cout<<"Perfect! You're going good.";
}
#include<iostream>
void bonus(int num_1,int num_2);
using namespace std;
main ()
{
int a;
int b;

cout<<"Enter your position: ";
cin>>a;
cout<<"Enter your friend's position: ";
cin>>b;
bonus (a,b);
}
void bonus(int num_1,int num_2)
{
if(num_2-num_1>6)
cout<<"false";
if(num_2-num_1<=6)
cout<<"true";
}
#include<iostream>
void time(int num_1, int num_2);
using namespace std;
main ()
{
int b;
int a;
cout<<"Enter the number of hours: ";
cin>>a;
cout<<"Enter the number of minutes: ";
cin>>b;
time(a,b);
}
void time(int num_1, int num_2)
{
int convert;
convert=num_1*60;
if(convert<num_2)
cout<<num_2;
if (convert>num_2)
cout<<num_1;
}
# include <iostream>
void flower_Shop(int red_Rose,int white_Rose,int tulip);
using namespace std;
main ()
{
int rose,white_rose,tulip;
cout<<"Red Rose: ";
cin>>rose;
cout<<"White Rose: ";
cin>>white_rose;
cout<<"Tulips: ";
cin>>tulip;
flower_Shop(rose,white_rose,tulip);
}
void flower_Shop(int rose,int white_rose,int tulip)
{
float rose_price,white_price,tulip_price,total_price,discount,final_price;
rose_price=2.00*rose;
white_price=4.10*white_rose;
tulip_price=2.50*tulip;
total_price=rose_price+white_price+tulip_price;
if(total_price>200)
{
discount=(total_price/100)*20;
final_price=total_price-discount;
cout<<"Original Price: $"<<total_price<<endl;
cout<<"Price after Discount: $"<<final_price;
}
if (total_price<=200)
{
cout<<"Original Price: $"<<total_price<<endl;
cout<<"No discount applied.";
}
}
# include <iostream>
void pet (int h);
using namespace std;
main ()
{
int h;
cout<<"Holidays: ";
cin>>h;
pet(h);
}
void pet (int h)
{
int t;
int w_days,t1, hrs, mins;
w_days=365-h;
t=(w_days*63)+(h*127);
if (t<30000)
{
t1=30000-t;
hrs=t1/60;
mins=t1%60;
cout<<"Tom sleeps well"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes less for play";
}
if (t>30000)
{
t1=t-30000;
hrs=t1/60;
mins=t1%60;
cout<<"Tom will run away"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes for play";
}
}
# include <iostream>
void t_pChecker(int people,int t_p);
using namespace std;
main ()
{
int people, t_p;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>t_p;
tpChecker(people,t_p);
}
void tpChecker(int people,int t_p)
{
int sheet = t_p*500;
int up_day = 57*people;
int t_usage=upday*14;
int avail = sheet/up_day;
if (sheet>t_usage)
cout<<"Your TP will last "<<avail<<" days, no need to panic!";
if (sheet<t_usage)
cout<<"Your TP will only last "<<avail<<" days, buy more!";
}
#include<iostream>
using namespace std;
main(){
string name;
int rollnumber;
float aggregate;
char section;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter your rollnumber:";
cin>>rollnumber;
cout<<"Enter your aggregate:";
cin>>aggregate;
cout<<"Enter your section:";
cin>>section;
Student Information ;
cout<<"Name:"<<name;
cout<<"rollnumber:"<<rollnumber;
cout<<"aggregate:"<<aggregate;
cout<<"section:"<<section;
}
#include<iostream>
using namespace std;
main(){
float weight_in_lb,weight_in_kg;
cout<<"Enter weight in pounds: ";
cin>>weight_in_lb ;
weight_in_kg=0.45*weight_in_lb; 
cout<<"400 pounds is equal to 180 kilograms.";
}
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the length of the rectangle: ";
int length;
cin>>length;
cout<<"Enter the width of the rectangle: ";
int width;
cin>>width;
int area;
area=length*width;
cout<<"The area of the rectangle is: "<<area;
} 
#include<iostream>
using namespace std;
main(){
float charge,time;
float current;
cout<<"Enter the charge (Q) in Coulombs: ";
cin>>charge;
cout<<"Enter the time (t) in seconds: ";
cin>>time;
current=charge/time;
cout<<"The current (I) is: "<<current<<" Amperes";
}
#include<iostream>
using namespace std;
main(){
double megabyte,bits,kilobytes,bytes;
cout<<"Enter the size in megabytes (MB): ";
cin>>megabyte;
kilobytes=megabyte*1024;
bytes=kilobytes*1024;
bits=bytes*8;
cout<<megabyte<<" MB is equivalent to "<<bits<<" bits.";
}
#include<iostream>
using namespace std;
main(){
string name;
float matric,inter,ecat;
float aggregate;
cout<<"Enter the student's name: ";
cin>>name;
cout<<"Enter matriculation marks (out of 1100): ";
cin>>matric;
cout<<"Enter intermediate marks (out of 550): ";
cin>>inter;
cout<<"Enter Ecat marks (out of 400): ";
cin>>ecat;
aggregate=(0.5*ecat/400)+(0.4*inter/550)+(0.1*matric/1100);
float totalaggregate;
totalaggregate=aggregate*100;
cout<<"Aggregate score for "<<name<<" in UET is: "<<totalaggregate<<"%";
} 
#include<iostream>
using namespace std;
main(){
int hours;
int time;
cout<<"Enter the number of hours: ";
cin>>hours;
time=hours*60*60;
cout<<hours<<" hours is equvilent to "<<time<<" seconds.";
}
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the name of the cricket team: ";
string name;
cin>>name;
cout<<"Enter the number of wins: ";
int wins;
cin>>wins;
int twins;
twins=wins*3;
cout<<"Enter the number of draws: ";
int draws;
cin>>draws;
int tdraws;
tdraws=draws*1;
cout<<"Enter the number of losses: ";
int loses;
cin>>loses;
 int tloses;
tloses=loses*0;
int totalPoints;
totalPoints=twins+tdraws+tloses;
cout<<name<<" has obtained "<< totalPoints<<" points in the Asia Cup tournament.";
}
#include<iostream>
using namespace std;
main(){
int number_of_minute;
int frames_per_second,total_number_of_frames;
cout<<"Number of Minutes: ";
cin>>number_of_minute;
cout<<"Frames per Second: ";
cin>>frames_per_second;
total_number_of_frames=number_of_minute*frames_per_second*60;
cout<<"Total Number of Frames: "<<total_number_of_frames;

} 
#include<iostream>
using namespace std;
main(){
float initial_velocity,final_velocity,acceleration,time;

cout<<"Enter Initial Velocity (m/s): ";

cin>>initial_velocity;

cout<<"Enter Acceleration (m/s^2): ";

cin>>acceleration;

cout<<"Enter Time (s): ";

cin>>time;

final_velocity=acceleration*time+initial_velocity;

cout<<"Final Velocity (m/s): "<<final_velocity;

}
#include<iostream>
using namespace std;
main(){
float imposter_count,player_count,chance;
cout<<"Enter Imposter Count: ";
cin>>imposter_count;
cout<<"Enter Player Count: ";#include<iostream>
using namespace std;
main(){
string name;
float weight,days;
cout<<"Enter the Name of the Person: ";
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>weight;
days=weight*15;
cout<<name<<" will need "<<days<<" days to lose " <<weight<<" kg of weight by following the doctor's suggestions";
}
#include<iostream>
using namespace std;
main(){
double size,cost,area,cost_of_fertilizer,cost_of_fertilizing;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of the bag: $";
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
cost_of_fertilizer=cost/size;
cout<<"Cost of fertilizer per pound: $"<<cost_of_fertilizer<<endl;
cost_of_fertilizing=cost/area;
cout<<"Cost of fertilizing per square foot: $"<<cost_of_fertilizing;
}
  
#include<iostream>
using namespace std;
main(){
double size,cost,area,cost_of_fertilizer,cost_of_fertilizing;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of the bag: $";
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
cost_of_fertilizer=cost/size;
cout<<"Cost of fertilizer per pound: $"<<cost_of_fertilizer<<endl;
cost_of_fertilizing=cost/area;
cout<<"Cost of fertilizing per square foot: $"<<cost_of_fertilizing;
}
  
#include<iostream>
using namespace std;
main(){
float vegetable_price,fruit_price,total_earning;
int total_vegetable,total_fruit;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegetable_price;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruit_price;
cout<<"Enter total kilograms of vegetables: ";
cin>>total_vegetable;
cout<<"Enter total kilograms of fruits: ";
cin>>total_fruit;
total_earning=(total_vegetable*vegetable_price+total_fruit*fruit_price)/1.94;
cout<<"Total earnings in Rupees (Rps): "<<total_earning;
}

#include<iostream>
using namespace std;
main(){
int num;
cout<<"Enter a 4-digit number: ";
cin>>num;
int a;
a=num%10;
num=num/10;
int b;
b=num%10;
num=num/10;
int c;
c=num%10;
num=num/10;
int d;
d=num%10;
int add;
add=a+b+c+d;
cout<<"Sum of the individual digits: "<<add;
}
#include<iostream>
using namespace std;
main(){
int num1;
cout<<"Number 1: ";
cin>>num1;
int num2;
cout<<"Number 2: ";
cin>>num2;
int num3;
cout<<"Number 3: ";
cin>>num3;
int num4;
cout<<"Number 4: ";
cin>>num4;
int num5;
cout<<"Number 5: ";
cin>>num5;
int num6;
cout<<"Number 6: ";
cin>>num6;
int num7;
cout<<"Number 7: ";
cin>>num7;
int num8,num9,num10,num11,num12,num13,num14,num15;
cout<<"Number 8: ";
cin>>num8;
cout<<"Number 9: ";
cin>>num9;
cout<<"Number 10: ";
cin>>num10;
cout<<"Number 11: ";
cin>>num11;
cout<<"Number 12: ";
cin>>num12;
cout<<"Number 13: ";
cin>>num13;
cout<<"Number 14: ";
cin>>num14;
cout<<"Number 15: ";
cin>>num15;
int add,sub,multiply,adds,subs;
add=num1+num2+num3+num4+num5;
multiply=num6*num7*num8*num9*num10;
sub=num11-num12-num13-num14-num15;
adds=add+multiply;
subs=adds-sub;
cout<<"The final result is: "<<subs;
}


#include<iostream>
using namespace std;
main(){
int age,move,moves,avg;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they've moved: ";
cin>>moves;
move=moves+1;
avg=age/move;
cout<<"Average number of years lived in the same house: "<<avg;
}
#include<iostream>
using namespace std;
main()
{
float square_meters,height,width,number;
cout<<"Number of square meters you can paint: ";
cin>>square_meters;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;
number=square_meters/(height*width);
cout<<"Number of walls you can paint: "<<number;
}


#include<iostream>
using namespace std;
main()
{
string name;
float adult_price,child_price,A_T_sold,C_T_SOLD,charity,total_amount;
cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>adult_price;
cout<<"Enter the child ticket price: $";
cin>>child_price;
cout<<"Enter the number of adult tickets sold: ";
cin>>A_T_sold;
cout<<"Enter the number of child tickets sold: ";
cin>>C_T_SOLD;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>charity;
cout<<endl;
cout<<"Movie: "<<name<<endl;
total_amount=(adult_price*A_T_sold)+(child_price*C_T_SOLD);
cout<<"Total amount generated from ticket sales: $"<<total_amount<<endl;

float charity_amount;
charity_amount=total_amount*charity/100;
cout<<"Donation to charity ("<<charity<<"%): $"<<charity_amount<<endl;
float remaining_amount;
remaining_amount=total_amount-charity_amount;
cout<<"Remaining amount after donation: $"<<remaining_amount;
}



 


cin>>player_count;
chance=100*(imposter_count/player_count);
cout<<"Chance of being an imposter: "<<chance<<"%";
}


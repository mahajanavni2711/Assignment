#include<iostream>
#include<iomanip>
using namespace std;
void print_line()
     {
        for(int i=0;i<100;i++)
       {cout<<"-";}
       cout<<endl;
     }
class Details{
    public:
    string name[10];
    int sem[10];
    int reg_no[10];
    string dob[10];
    string par[10];
    int att[10];
    float marks[10][5];
    float subject[5];
    double percent[10];
    float percentage[10];
public:
void get_details()
{

    for(int i=1; i<11; i++)
    {
        cout<<"Enter the name of the student:"<<endl;
        cin>>name[i];
        cout<<"Enter the semester:"<<endl;
        cin>>sem[i];
        cout<<"Enter the roll number:"<<endl;
        cin>>reg_no[i];
        cout<<"Enter the date of birth:"<<endl;
        cin>>dob[i];
        cout<<"Enter Parentage:"<<endl;
        cin>>par[i];
    }
}

void show_details()
{
 for(int i=1; i<11; i++){
cout<<setw(5)<<name[i]<<setw(25)<<par[i]<<setw(20)<<sem[i]<<setw(20)<<reg_no[i]<<setw(25)<<dob[i]<<endl;
print_line();
}
}
void get_att(){
for(int i=1; i<11; i++)
{
    cout<<"Enter the classes attended by roll no. "<<reg_no[i]<<" out of 30: "<<endl;
    cin>>att[i];
    percent[i] = static_cast<double>(att[i]/30.00)*100.00;
    cout<<"Your attendance is:"<<percent[i]<<" %"<<endl;
}
}
void print_att(){
cout<<setw(5)<<"NAME"<<setw(20)<<"ROLL NO."<<setw(30)<<"ATTENDANCE(%)"<<endl;
print_line();

 for(int i=1; i<11; i++){
cout<<setw(5)<<name[i]<<setw(17)<<reg_no[i]<<setw(25)<<percent[i]<<endl;
print_line();
}   
}
void show_shortage(){
    
 cout<<setw(5)<<"NAME"<<setw(20)<<"ROLL NO."<<setw(30)<<"ATTENDANCE(%)"<<endl;
print_line();
 for(int i=1; i<11; i++){
    cout<<"Students in shortage:"<<endl;
 if(percent[i]< 75){
cout<<setw(5)<<name[i]<<setw(17)<<reg_no[i]<<setw(25)<<percent[i]<<endl;
print_line();}
}
}
void sub_mark(){
    for(int i = 1; i<11; ++i){
    cout<<"Enter Roll number:";
    cin>> reg_no[i];}
    for(int i = 1; i<11; ++i){
        cout<<"Enter marks of 5 subjects:";
            float total =0;
            for(int j= 0; j<5; ++j){
                cout<<"Subject "<<(j+1)<<":";
                cin>> marks[i][j];
                total += marks[i][j];
            }
        percentage[i] = (total / 500)*100;
    }
}
void total_marks()
{
    cout<<setw(5)<<"ROLL NO."<<setw(20)<<"PERCENTAGE"<<endl;
    print_line();
    for( int i=1; i< 11 ; ++i){
        cout<<setw(5)<<reg_no[i]<<setw(20)<<percentage[i]<<"%"<<endl;
    }
}
void above_90()
{
    cout<<"Students above 90% are: "<<endl;
   cout<<setw(5)<<"NAME"<<setw(20)<<"ROLL NO."<<setw(25)<<"PERCENTAGE"<<endl;
    print_line();   
    for(int i =1; i< 11; i++){
         if(percentage[i]> 90){
    cout<<setw(5)<<name[i]<<setw(20)<<reg_no[i]<<setw(25)<<percentage[i]<<endl;
    }
  }
}
};
void show_heading()
{
cout<<setw(5)<<"NAME"<<setw(25)<<"PARENTAGE"<<setw(20)<<"SEMESTER"<<setw(20)<<"ROLL NO."<<setw(25)<<"DATE OF BIRTH"<<endl;
print_line();
}


int main()
{
int i =1;
Details s[i];
s[i].get_details();
show_heading();
s[i].show_details();
s[i].get_att();
s[i].print_att();
s[i].show_shortage();
s[i].sub_mark();
s[i].total_marks();
s[i].above_90();
return 0;
 }

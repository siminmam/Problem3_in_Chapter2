#include<iostream>
using namespace std;
int main()
{
    const int YEAR_TO_MONTH=12;
    const int YEAR_TO_DAY=365;
    int year,day,month;
    cout<<"\n Enter the year:";
    cin>>year;
    day=year*365;
    cout<<"\n The day is:"<<day;
    month=year*12;
    cout<<"\n The month is :"<<month;
    return 0;
    
}
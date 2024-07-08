/*Write a C++ program to convert kilometers/hr to miles/hr. The program (coding) should
produce a table of 10 conversions, starting at 60 km/hr and incremented by 5 km/hr. The
display (output) should have appropriate headings and a list of each km/hr and its equivalent
miles/hr value. (40 points)
Hint: Use the relationship that 1 kilometer = 0.6241 mile*/
#include <iostream>
using namespace std;
const int SIZE=10;
int main()
{
    double kilometers[SIZE];
    double miles[SIZE];

    double starting=60.0;
    for(int index=0;index<SIZE;index++)
    {
        kilometers[index]=starting;
        starting +=5;
    }
    for(int index=0;index<SIZE;index++)
    {
        miles[index]=kilometers[index]*0.6241;
    }
    cout<<"\nConverts from Kilometers/hr to Miles/hr\n";
    cout<<"\n**********************************\n";
    for(int index=0;index<SIZE;index++)
    {
        cout<<kilometers[index]<<" kilometers/hr = "<<miles[index]<<" miles/hr."<<endl;
    }

}

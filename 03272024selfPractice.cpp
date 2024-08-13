/* goross: all income before tax. deduction: the tax. total: all income after tax.
 this should use float type variable. 
 because only calculate hours between 20-60, I need to use if statement and && to creat condition.
 I need another if statement and a else if statement for hourly rate(r) between 10-25, the tax is 5% (it could be r*0.05 or r/100*5) 
 and 7% for r between 26-50.
  I need to creat an if statements for h <=40, and else statement for h >= 40
 the first condition when h <= 40 does not change anything.
 the second condition when h >= 40 it does increast hourly-rate for 5%/h for over time. 
*/

/*#include <iostream>
using namespace std;

int main()
{
    float h, r, d, total, gross;// h for hours, r for hourly-rate, d for deduction.
    cout << "please enter your worked hours: \n";
    cin >> h;
    cout << "please enter your hourly-rate: \n";
    cin >> r;

    if (h >= 20 && h <= 60) 
    {
        if (h <= 40) 
        {
            if (r >= 10 && r <= 25) { 
                gross = r * h;
                d = (r * 0.05) * h;
                total = gross - d ;

                cout << "Gross: " << gross << endl;
                cout << "Total: " << total << endl;
                cout << "deductions: " << d << endl;
            }
            else if (r >= 26 && r <= 50) { 
                gross = r * h;
                d = (r * 0.07) * h;
                total = gross - d ;

                cout << "Gross: " << gross << endl;
                cout << "Total: " << total << endl;
                cout << "deductions: " << d << endl;
            }
        }
        else
        {
            //here is calculate worked hour >40, so after 40 hours, the hourly rate increast 5% for overtime.
            // I need new variable to hold extra hours(h2) and over-pay(r2).
            float h2 = h - 40; 
            float r2; //overtime hourly rate increast 5%
            float over = r2 * h2;
           
            if (r >= 10 && r <= 25) {
                float d2 = r2 * 0.05;//because the houly rate is increated for overtime, so I creat (d2) taht is deductions for overtime.            
                for (int i = 1; i <= h2; i++) {
                    r2 = r * 0.05;
                    cout << r2 << " " << endl;
                }
                gross = r * 40 + over;
                d = (r * 0.05) * 40 + d2 * h2;
                total = (gross + over) - d;

                cout << "Gross: " << gross << endl;
                cout << "Total: " << total << endl;
                cout << "deductions: " << d << endl;
            }
            if (r >= 26 && r <= 50) {
                float d3 = r2 * 0.07;// d3 for 7% tax.
                for (int j = 1; j <= h2; j++) {
                    r2 = r * 0.05;
                }
                gross = r * 40 + over;
                d = (r * 0.07) * 40 + d3 * h2;
                total = (gross + over) - d;

                cout << "Gross: " << gross << endl;
                cout << "Total: " << total << endl;
                cout << "deductions: " << d << endl;

            }
        }
    }
    else {
        cout << "Not valid.";
    }
}*/

//2.write a program to get a number x from user and calculate the following series 1 / x + (2 / x - 1) + 3 / (x - 2) + ......x / 1

// the numerator is increasing, and the denominator is decreasing.
// I need a user input and variable type should be int.
// I need a first loop for the numerator star from 1 and increasts untill equal to user input.
// I need a second loop for the denominator equals to 1 and increasing to x-1.

/*#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "please enter a number: ";
    cin >> x;
    float sum = 0;
    //I was useing two for loops, one for i, another one inside i loop for j and repect every row x times.
    //therefore, I use one for loop to creat both i and j.
    for (int i = 1, j = x; i <= x; i++, j--) {
      // I was using two conditions: i<=x,j>=1 . However, I realized that I only need one of them.
        cout << i << "/" << j << " + ";
        sum = sum + i / j;
        //this is the most difficult part, untill I declear sum=0 I finally got a right equition.
    }
    cout << " = " << sum; 
}
*/

//3.Write a program to print following patterns, by getting number of rows from user
// (a) print A

//creat a int variable x for user input 
//I need two loops, one insdie another one. first loop for column, second loop for row.
//both loops are increating, but wants to outpu right triangle, need to set condition of sencond <= first.

/*#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "please enter a number: ";
    cin >> x;

    for (int i = 1; i <= x; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << "A"; // instead of output number, output A. 
        }
        cout << endl;
    }
    
    
}
*/

//3.(b) print numbers. the logic same as (a), but instead of print "A", print number.

/*#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "please enter a number: ";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
*/

//3.(c) print "*" but the triangle should be a equilateral triangle
//the logic same as (a)and(b), but while the i and j are increasing
//the space in front of "*" should start with x-1 and being decreasted.

#include <iostream>
using namespace std;

int main()
{
    int x;
    int s = x - 1;
    cout << "plesae enter a number: ";
    cin >> x;

    for (int i = 1; i <= x; i++) 
    {
        for (int s = x - i; s >= 1; s--) 
        // the condition s=x-1 does not work well, the space dose not change
        // therefore, I set s=x-i, but I still cannot find out what is the difference.
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            
            cout << "* ";
            //I was set two bool variables, the true print out "*", and the false print out " ".
            //it doesn't work not matter how I calculate.
            //finally, i found out that i only need to add a space after *.
        }
        cout << endl;
    }
}




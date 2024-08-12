/*#include <iostream>
using namespace std;
   
int main()
{
    int number = 1;
    while (number < 11)
    {
        cout << number << endl;
        number = number + 1;
    }

}
*/


/*#include <iostream>
using namespace std;

int main() 
{
    int number = 10;
    while (number > 0)
    {
        cout << number << endl;
        number = number - 1;
    }
}
*/

#include <iostream>
using namespace std;

int main() {

    //for the number sequence, I should use integer.
    int first, second, next, count = 0;
    first = 0, second = 1;
    cout << "The fibonacci sequence is: 0, 1";
    while (count <= 20)
    {
        next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
        count++;
    }
    cout << ".\n";
}

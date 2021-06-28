#include <iostream>
#include <math.h>

using namespace std;

void successioneA();
void successioneB();
void successioneC();
void successioneD();

int main()
{
    cout << "----Successione A----"<<endl<<endl;
    successioneA();
    cout << "----Successione B----"<<endl<<endl;
    successioneB();
    cout << "----Successione C----"<<endl<<endl;
    successioneC();
    cout<<"----Successione D----"<<endl<<endl;
    successioneD();
    return 0;
}

void successioneA()
{

    for (int i = 1; i < 100; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

void successioneB()
{

    for (int i = 1; i <= 50; i++)
    {

        cout << pow(i, 2) << " ";
    }
    cout << endl;
}

void successioneC()
{

    for (int i = 1; i <= 100;)
    {

        if (i % 2 == 0)
        { /*Pari*/

            cout<<-i<<" ";
            i++;
        }
        else if (i % 2 != 0)
        { /*Dispari*/

            cout<<i<<" ";
            i++;
        }

        
    }
    cout << endl;
}

void successioneD()
{

    for (float i = 1.1; i <= 100;i+=1.1)
    {

        printf("%.1f ",i);
        
        
    }
    cout << endl;
}


/*  
    a)  1,3,5,7,9...99
    b)  1,4,9,16,25...2500
    c)  1,-2,3,-4,5,-6...-100
    d)  1, 2.2, 3.3, 4.4, 5.5 ... 100

*/
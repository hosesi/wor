#include <iostream>
using namespace std;

int bmm(int x,int y)
 {
    int temp=x, temp2=y;
    int result=1;
    int min=y;

    if(y>x) {min=x;}
    
    for (int i = 2; i <= min; i++)
    {
        int counter = 0;
        while (temp % i == 0 && temp2 % i == 0)
        {
            temp/=i;
            temp2/=i;
            counter++;
        }

        for (int j = 0; j < counter; j++)
            {result*=i;}
    }
    return result;
}

int kmm(int x, int y)
{
    return x*y/bmm(x,y);
}
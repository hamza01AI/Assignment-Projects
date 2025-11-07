#include <iostream>
using namespace std;
int main()
{
    int x[5]={1,2,3,1,1};
    int  check[5]={0,0,0,0,0}

    for(int i=0;i<=4;i++)
    {
        for(int j=0; j<=4;j++)
        {
            if(x[i]==x[j])
            {
                int check[i]=check[i]+1;
            }

        }
    }
}
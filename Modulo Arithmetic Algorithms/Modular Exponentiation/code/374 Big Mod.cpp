//Number Theory
//big mod basic problem-UVA374 Big Mod with c++

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int big_mod(int ba,int ex,int mo)
{

    if(ex==0)return 1;

    if(ex%2==0)
    {
        int p1 = (big_mod(ba,ex/2,mo))%mo;

        return (p1*p1)%mo;

    }


    else return ((ba%mo)*big_mod(ba,ex-1,mo))%mo;



}



int main()
{

    int ba,ex,mo;



    int result;

    while ( scanf("%d %d %d",&ba,&ex,&mo) != EOF)
    {

        result=big_mod(ba,ex,mo);

        printf ("%d\n",result);


    }



    return 0;
}

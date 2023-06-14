#include<bits/stdc++.h>
using namespace std;
void fun(int *&a) //void fun(int *a)
{
    cout<<a<<endl;
}
int main()
{
    int a;
    cin>>a;
    int *p=&a;
    fun(p);
    cout<<p<<endl;
    return 0;
}
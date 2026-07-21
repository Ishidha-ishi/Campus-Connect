#include<stdio.h>
#include<iostream>
using namespace std;
class abc
{
    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;

    }
};
int main(){
    abc d;
    d.add(5,6);
    return 0;
}
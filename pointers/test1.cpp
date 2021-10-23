#include<iostream>

using namespace std;


int main(){

    int a = 10;
    int *p1;
    p1 = &a;
    int **p2;
    p2 = &p1;

    cout<<p1<<endl<<*p1<<endl<<&p1<<endl;
    cout<<endl<<p2<<endl<<*p2<<endl<<&p2<<endl<<*(*p2);

    return 0;
}
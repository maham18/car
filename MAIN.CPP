#include<iostream>
#include"CAR.h"
int main()
{
cout << "my first choice" << endl;
car bughattichirron;

bughattichirron.setcost(500);
bughattichirron.displaycar();

cout << "my second choice" << endl;
car brv;
brv.setcost(500);
brv.setfuelstatus(status::FULL);
brv.displaycar();


getchar();


}
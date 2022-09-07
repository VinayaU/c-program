#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int rows,i,j,space,counter=1;
 cout<<"Enter the No of rows: ";
 cin>>rows;
 for( i=0; i<rows;  i++){
   for(space=1; space<=rows-i; space++ ){
   cout<<" ";
   }
   for(j=0; j<=i; j++){
   if(j==0 || i==0)
    counter=1;
   else
     counter=counter*(i-j+1)/j;
     cout<<counter<<" ";
   }
   cout<<"\n";
}
getch();
return 0;
}

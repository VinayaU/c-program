#include<iostream>
using namespace std;
class fibonacci
{
	public:
		int a,b,c,d,i;
		void series()
		{
			cout<<"enter the number of terms: ";
			cin>>a;
			b=0;
			c=1;
			d=0;
			cout<<"\n The fibonacci series: "<<"\n";
			for(i=1;i<=a;++i)
			{
				cout<<b<<"\n";
				d=b+c;
				b=c;
				c=d;
			}
		}
};
int main()
{
	fibonacci seq;
	seq.series();
	return 0;
}

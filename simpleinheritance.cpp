#include<iostream>
using namespace std;
class human{
	public:
		void eat(){
			cout<<"i can eat!"<<endl;
		}
		void sing();{
			cout<<" i can sing!!"<<endl;
		}
};
class man:public human
{
	public:
		void sleep()
		{
			cout<<"i can sleep!"<<endl;
		}
};
int main()
{
human human1;
human1.eat();
human1.sing()
}
return 0;
}

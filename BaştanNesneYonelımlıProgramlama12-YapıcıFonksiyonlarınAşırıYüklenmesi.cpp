#include <iostream>

using namespace std;

class deneme
{
	private:
		
		float x;
		
	public:
		
		deneme(int n)
		{
			x=n;
		}
		
		deneme(int n, float m)
		{
			x=n+m;
		}
		
		deneme(int n,float m)
		{
			x=n+m;
		}
		
		deneme(int n,float m,leng c)
		{
			x=(n+m)/c;
		}
		
		int goster()
		{
			return x;
		}
};

int main ()
{
	deneme ob1(20);
	
	deneme ob2(20,10,7);
	
	deneme ob3(25,425,400);
	
	cout<<"1.sayi"<<ob1.goster()<<endl;
	
	cout<<"2.sayi"<<ob2.goster()<<endl;
	
	cout<<"3.sayi"<<ob3.goster()<<endl;

	return 0;
}

#include <iostream>
using namespace std;

int CalcularMaximo(int a, int b);

int main()
{ int a; int b;
int mayor;
cout<<"ingresar un numero"<<endl;
cin>>a;
cout<<"ingresar un numero"<<endl;
cin>>b;
mayor=CalcularMaximo (a,b);
cout<<mayor<<endl;
return 0;
}
int CalcularMaximo(int a,int b)
{
	int max;
	if(a>b)
	{
		max= a;
	}
	
	else{
		max=b;
	}
{
	return max;
}
}


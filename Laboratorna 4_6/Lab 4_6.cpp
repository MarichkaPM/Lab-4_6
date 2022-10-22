#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long double P, S;
	int i, k;
	
	S = 0;
	i = 5;
	while (i <= 25)
	{
		P = 1;
		k = 1;
		while (k <= i*i)//k<=25
		{
			P *= k;
			k++;
		}
		S += (sqrt(i * i + P)) / (1.0*i);
		i++;
	}
	cout << "S = " << S << endl;

	i = 5;
	S = 0;
	do
	{
		P = 1;
		k = 1;
		do
		{
			P *= k;
			k++;
		} while (k <= i*i);//while(k<=25)
		S += (sqrt(i * i + P)) / (1.0 *i);
		i++;
	} while (i <= 25);
	cout << "S = " << S << endl;
	
	S = 0;
	for (i = 5;i <= 25;i++)
	{
		P = 1;
		for (k = 1;k <= i * i;k++)//k<=25
		{
			P *= k;
		}
		S += sqrt(i * i + P) / (1.0*i);
	}
	cout << "S = " << S << endl;
	
	S = 0;
	for (i = 25;i >= 5;i--)
	{
		P = 1;
		for (k = i * i; k >= 1;k--)//k=25
		{
			P *= k;
		}
		S += sqrt(i * i + P) / (1.0*i);
	}
	cout << "S = " << S << endl;
}
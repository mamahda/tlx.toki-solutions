#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n,m,p;
	cin >> n >> m >> p;
	int a[n][m], b[m][p], c[n][p];
	//a
	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
		
	}
	//b
	for (int i = 0;i < m;i++)
	{
		for (int j = 0; j < p; j++)
		{
			cin >> b[i][j];
		}
		
	}
	//a*b
	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < p; j++)
		{
			c[i][j]=0;
			for (int k = 0; k < m; k++)
			{
				c[i][j]+= a[i][k]*b[k][j]; 
			}
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}


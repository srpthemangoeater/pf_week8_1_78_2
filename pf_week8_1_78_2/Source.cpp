//64010846
#include <stdio.h>

int main()
{
	bool ans=true;
	int n;
	scanf_s("%d", &n);
	int check = (n * ((n * n) + 1)) / 2;
	
	int table[100][100];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf_s("%d", &table[i][j]);

	for (int i = 0; i < n; i++)
	{
		int sumA = 0 , sumB = 0;
		for (int j = 0; j < n; j++)
		{
			sumA += table[i][j];
			sumB += table[j][i];
		}
		if (sumA != check || sumB != check)
			ans = false;
	}
	
	printf("\n");
	int sumC = 0, sumD = 0;
	for (int i = 0; i < n; i++)
	{
		sumC += table[i][i];
		sumD += table[n-i-1][n-i- 1];
	}

	if (sumC != check || sumD != check)
		ans = false;

	if (ans == true)
		printf("YES");
	else
		printf("NO");

	return 0;


}
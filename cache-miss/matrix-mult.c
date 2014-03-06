#define N 2024

int mul1[N][N];
int mul2[N][N];
int res[N][N];

void calculate(void)
{
	int i, j, k;

	for (i = 0; i < N; ++i)
		for (j = 0; j < N; ++j)
			for (k = 0; k < N; ++k)
				res[i][j] += mul1[i][k] * mul2[k][j];
}

int main(void)
{
	calculate();
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const int N=9;
int main()
{
    setlocale(LC_ALL, "Rus");
    int a[N][N], i,j,sum=0;
    printf("������� �������� �������\n");
    for(i=0; i<N; i++)
        for(j=0; j<N; j++)
            scanf("%d", &a[i][j]);
    for(i=0; i<N; i++)
        for(j=0; j<N; j++)
        {
            if((j>=i && j<=N-1-i)|| (j<=i && j>=N-1-i))
                sum+=a[i][j];

        }

    printf(" ����� ��������� �� ������� 1 �������� %d", sum);

    return 0;
}

#include <stdio.h>
#include <stdlib.h> 

/*
예시 입력
6 8
1 2 2
1 5 7
2 3 2
2 4 3
2 5 1
4 3 1
5 4 7
6 4 7 
*/ 
int main(int argc, char *argv[]) {
	// point : 정점, line : 간선의 수 
	int point = 0 , line = 0;
	// i,j : 반복에 사용됨, l1, l2 : 간선 번호, weight : 가중치 
	int i, j, l1, l2, weight; 
	int lines[7][7] = {0};
	int result[10][10] = {0};
	scanf("%d %d", &point, &line);
	 
	for(i=0; i<line; i++) 
	{
		scanf("%d %d %d", &l1, &l2, &weight);
		lines[l1][l2] = weight;
	}
	
	for(i=0;i<point+1;i++)
	{
		for(j=0;j<point+1;j++)
		{
			if(lines[i][j] > 0) {
				result[i-1][j-1] = lines[i][j];
				result[j-1][i-1] = lines[i][j];
			}
		}
	}
	
	printf("인접 행렬로 나타내기\n"); 
	for(i=0;i<point;i++)
	{
		for(j=0; j<point; j++)
		{
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}
	
	printf("인접 리스트로 나타내기 \n");
	for(i=0;i<point;i++)
	{
		printf("A[%d] = ", i+1);
		for(j=0;j<point;j++)
		{
			if(result[i][j] > 0)
				printf("(%d, %d) \t", j+1, result[i][j]);
		}
		printf("\n");
	}
	return 0;
}

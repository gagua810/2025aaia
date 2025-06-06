// week04-2.cpp
// SOIT107_Base_018
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	for(int i=1; i<=N; i++) {
		if(i%2==0) printf("%d ", i);
	}
}

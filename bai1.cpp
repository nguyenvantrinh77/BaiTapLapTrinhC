#include <stdio.h>

int kiemTraBoiSo7(int num)
{
	return (num % 7 == 0);
}
int main(){
	printf("Cac so nguyen co 2 chu so va la boi so cua 7 la:\n");

	for (int i = 10; i < 100; i++)
	{
		if (kiemTraBoiSo7(i))
		{
			printf(" %d ", i);
		}
	}
	return 0;

}
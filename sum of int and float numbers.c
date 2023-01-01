#include <stdio.h>
int main()
{
    int var1, var2;
	float var3, var4;
	
	printf("Enter integers= \n");
	scanf("%d %d", &var1, &var2);
	printf("enter float numbers= \n");
	scanf("%f %f", &var3, &var4);

    printf("your output is = ");
	printf("%d %d", (var1+var2), (var1-var2));
	printf("\n");
	printf("%.1f %.1f", (var3+var4), (var3-var4));
        
    return 0;
    
}
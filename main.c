#include<stdio.h>

float math_fucntion(float x)
{
	
	return 0;
}

int main()
{
	int boundA, boundB;
	float dt;
		
	printf("Enter your bounds (a, b); ");
	scanf("%d", "%d", &boundA, &boundB);
	printf("Enter your dt: ")l
	scanf("%d", &dt);

	float integral = 0l
	for(float x= boundA; x<boundB; x+=dt)
		{
			integral+=math_function(x)*dt;
		}
		
		printf("Integral between %d and %d with dt of %f is: %f\n", boundA, boundB, dt, integral);

	
	return 0;
}

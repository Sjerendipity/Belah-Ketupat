#include <stdio.h>
float f(float sisi){
	return 4*sisi;
}
main()
{
	float sisi, hasil;
	printf("sisi= "); scanf("%f", &sisi);
	hasil= f(sisi);
	printf("f(%.2f)= %.2f",sisi,hasil);
}

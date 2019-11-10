#define USE_TI89
#define SAVE_SCREEN

#include <tigcclib.h>

void _main(){
	long int a;
	long int b;

	long int r0;
	long int s0;
	long int t0;
	long int r1;
	long int s1;
	long int t1;
	long int next_r;
	long int next_s;
	long int next_t;
	long int quotient;
	long int temp;

	clrscr();	
	printf("Enter a: ");
	scanf("%ld", &a);
	printf("\nEnter b: ");
	scanf("%ld", &b);

	if(a < b){
		temp = a;
		a = b;
		b = temp;
	}

	r0 = a;
	s0 = 1;
	t0 = 0;
	r1 = b;
	s1 = 0;
	t1 = 1;
	while(r1){
		quotient = r0/r1;
		next_r = r0%r1;
		next_s = s0 - quotient*s1;
		next_t = t0 - quotient*t1;

		r0 = r1;
		r1 = next_r;
		s0 = s1;
		s1 = next_s;
		t0 = t1;
		t1 = next_t;
	}

	printf("\n%ld*%ld + %ld*%ld = %ld", a, s0, b, t0, r0);
	ngetchx();
}

//#include <stdio.h>
//#include <iostream>
//int main(void)
//{
//	int minus;
//	int value1, value2;
//
//	value1 = 87;
//	value2 = 15;
//	minus = value1 - value2;
//
//	printf("%i minus %i is %i\n", value1, value2, minus);
//
//	return 0;
//}

//int main(void)
//{
//	int a = 100;
//	int b = 2;
//	int c = 25;
//	int d = 4;
//	int result;
//
//	result = a - b;
//	printf("a-b = %i\n", result);
//
//	return 0;
//}

//int main(void)
//{
//	int a = 50;
//	int b = 25;
//	float c = 14.0;
//	float d = 2.0;
//
//	printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
//	printf("-a = %i\n", -a);
//	printf("-d = %f\n", -d);
//
//	return 0;
//}

//int main(void)
//{
//	float f1 = 123.125, f2;
//	int il, i2 = -150;
//	char c = 'a';
//	il = f1;
//	printf("%f assigned to an int produces %i\n", fl, i1);
//
//	return 0;
//}

//void initialize(int& i)
//{
//	i = 21;
//}
//
//int main()
//{
//	int s, t, u, v;
//
//	s = t + u + v;
//	std::cout << "Value in s: " << s << std::endl;
//
//	int w, x;
//	initialize(x);
//	int y{ 10 };
//	int z{ 11 };
//
//	w = x + y + z;
//	std::cout << "Value in w: " << std::endl;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int C, F;
//	F = 27;
//	C = (F - 32) / 1.0;
//	
//	printf("%i is converted by %i\n", F, C);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	char c, d;
//
//	c = 'd';
//	d = 'c';
//	printf("d = %c\n", d);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int x;
//	x = 2.55;
//
//	printf("2.55 ^ 2 = %f\n", pow(2.55, 2));
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int n = 12;
//	int x = 5;
//	int k = pow(x, n);
//	
//	printf("K is %i\n", k);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main(int a, int b)
//{
//	a = 5;
//	b = 6;
//
//	printf("Result %i\n", a + b);
//
//	return a + b;
//}

//#include <stdio.h>
//int main()
//{
//	int triangularNumber;
//	triangularNumber = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;
//
//	printf("The eighth triangular number is %i\n", triangularNumber);
//
//	return 0;
//}

// for 반복문의 일반적인 형식 for( init_expression; loop_condition;, loop_expression )
//		프로그램문;
//#include <stdio.h>
//int main(void)
//{
//	int n, triangularNumber;
//	triangularNumber = 0;
//
//	for (n = 1; n <= 200; n = n + 1) // python for문 함수의 for i in range(시작, 끝)과 연계지어서 생각하자
//		triangularNumber = triangularNumber + n;
//
//	printf("The 200th triangular number is %i\n", triangularNumber);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, tri;
//
//	printf("Table of tri numbers\n\n");
//	printf("n        Sum from 1 to n\n");
//	printf("---      --------------\n");
//
//	tri = 0;
//
//	for (n = 1; n <= 10; ++n) {
//		tri += n;
//		printf("%2i              %i\n", n, tri);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n, number, tri;
//
//	printf("What tri number do you want? ");
//	scanf_s("%i", &number); //scanf 사용 결과 컴파일에서 불안정하므로, scanf 대신 scanf_s를 사용한다.
//
//	tri = 0;
//
//	for (n = 1; n <= number; n += 1)
//		tri += n;
//
//	printf("Tri number %i is %i\n", number, tri);
//
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	int n, number, tri, counter;

	for (counter = 1; counter <= 5; ++counter) {
		printf("What tri number do you want? ");
		scanf_s("%i", &number);

		tri = 0;

		for (n = 1; n <= number; ++n)
			tri += n;

		printf("Tri number %i is %i\n\n", number, tri);
	}

	return 0;
}
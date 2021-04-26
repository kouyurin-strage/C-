#include <stdio.h>

int main(void) {
	//puts関数（標準出力へ文字列を出力する）
	puts("Hello, World");
	//printf関数（標準出力へ、変数指定に沿って変換された文字列を出力する)
	printf("Hello, World\n");
	//開業しないprintf関数の使い
	printf("Hello, ");
	printf("World\n");
	//\n（改行のためにつける）
	printf("Hello,\nWorld\n");
	//Q1
	puts("1行目");
	puts("2行目");
	puts("3行目");
	puts("1行目\n2行目\n3行目");
	//Q2
	printf("1行目\n");
	printf("2行目\n");
	printf("3行目\n");
	//Q3
	printf("1行目\n2行目\n3行目\n");
	//Q4
	printf("1行目\n3行目\n");

	//変数
	int num;

	num = 100;

	printf("%d\n", num);

	//代入
	int num1;
	int num2;

	num1 = 100;
	num2 = num1;

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);

	//変数の初期化
	double d = 3.5;

	printf("%f\n", d);
	//Q1
	/*
	double
	123
	*/
	//Q2
	/*
	int a;
	printf("%d\n", a);
	*/
	//Q3
	printf("%d\n",  3.141534);
	//Q4
	int a = 10;
	int b = 20;

	printf("a: %d, b: %d\n", a, b);//a:10,b:20
	a = b;
	printf("a: %d, b: %d\n", a, b);//a:20,b:20
	b = 30;
	printf("a: %d, b: %d\n", a, b);//a:20,b:30
	a = b;
	printf("a: %d, b: %d\n", a, b);//a:30,b:30

	//計算
	int sum = 10 + 20;
	int sub = 10 - 20;
	int mul = 10 * 20;
	int div = 10 / 20;

	printf("sum: %d\n", sum);
	printf("sub: %d\n", sub);
	printf("mul: %d\n", mul);
	printf("div: %d\n", div);
	//符号
	printf("%d\n", -10);
	
	num = -10;

	printf("%d\n", -num);

	num = +10;

	printf("%d\n", +num);

	//徐算
	printf("div: %f\n", 10 / 20);

	/*ゼロ除算
	num = 0;
	int ans = 10 / num;
	printf("ans: %d\n", ans);//未定義されてる
	*/

	//少し複雑な計算
	int ans1 = 10 * 2 + 5;
	int ans2 = 10 * (2 + 5);
	printf("ans1: %d\n", ans1);
	printf("ans2: %d\n", ans2);
	printf("ans: %d\n", (10 + 5) / (10 - (3 + 2)));
	
	num1 = 10 + 5;
	num2 = 10 - (3 + 2);
	int ans = num1 / num2;
	printf("ans: %d\n", ans);

	//剰余の求め方
	printf("%d\n", 10 % 3);
	printf("%d\n", 10 % -3);
	printf("%d\n", -10 % 3);
	printf("%d\n", -10 % -3);

	//Q1
	int min = 4 * 60;
	int sec = 31;
	printf("%d秒\n", min + sec);//271秒

	//Q2
	min = 502 / 60;
	sec = 502 % 60;
	printf("%d分%d秒\n", min, sec);//8分22秒

	//Q3
	double i = 3;
	double f = 2;
	printf("%f\n", i / f);
	printf("%f\n", 3.0 / 2.0);

	//Q4
	a = 567;
	b = a / 10;
	int c = b % 10;
	printf("%d\n", c);

	//Q5
	a = 0;
	b = 10;
	c = 20;

	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", c, b, c / b);//aで割ると未定義されているので0と満たされる
	printf("%d + %d = %d\n", b, c, b + c);

	//標準入力1

	//fgets関数
	char str[80];

	puts("何か文字列を入力してください。");
	fgets(str, 80, stdin);

	puts(str);

	//ヌル文字
	str[5];

	puts("何か文字列を入力してください。");
	fgets(str, 5, stdin);
	puts(str);

	//バッファオーバーフロー
	/*str[5];

	puts("何か文字列を入力してください。");
	fget(str, 10, stdin);
	puts(str);*/

	//バッファオーバーフローエラーにならないようにする方法
	str[5];

	puts("何か文字列を入力してください。");
	fgets(str, sizeof(str), stdin);//sizeof()配列の長さを図る
	puts(str);

	//Q1
	char str1[5];

	puts("何か入力してください。");
	fgets(str1, sizeof(str1), stdin);
	puts(str1);
	puts(str1);

	char str2[10];
	char str3[10];
	fgets(str2, sizeof(str2), stdin);
	fgets(str3, sizeof(str3), stdin);
	printf(str2);
	printf(str3);


	return 0;
}
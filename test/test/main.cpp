#include<stdio.h>
#include<string.h>

/*
*第１問(一問2点)
 以下の計算に2進数で答えよ。
 00101100 + 01010101
 10110000 + 00001111

 00101100 + 01010101 = 1000 0001
 10110000 + 00001111 = 1011 1111
*/

/*
*第２問(一問2点)
 第１問の答えを10進数で答えよ

 00101100 + 01010101 = 129
 10110000 + 00001111 = 191
*/

/*
*第３問(一問2点)
 char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ

 char  : 1byte
 int   : 4byte
 float : 4byte
 double: 8byte
*/

/*
*第４問(一問2点)
 char *、int *、float *、double *のバイトサイズはそれぞれいくつか答えよ。
 
  char *  : 4byte
  int *   : 4byte
  float * : 4byte
  double *: 4byte
*/

/*
*第５問(20点)
 以下のプログラムを実行した場合、
 ①～③のどの部分が実行されるか答えよ。
 int main()
 {
	int num = 5;

	num = num % 3;

	if( num == 0)
	{
		①
	}
	else if( num == 2)
	{
		②
	}
	else
	{
		③
	}
 }

 int main()
{
	int num = 5;

	num = num % 3;

	if (num == 0)
	{
		printf("①");
	}
	else if (num == 2)
	{
		printf("②");
	}
	else
	{
		printf("③");
	}
}

Ans ②
*/

/*
*第６問(25点)
 数値を2つ入力し、
 1番目に入力された値が奇数なら足し算、
 1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。

 結果)
 1 // 1番目に入力された値
 5 // 2番目に入力された値
 6 // 1番目が奇数なので足し算

 4 // 1番目に入力された値
 3 // 2番目に入力された値
 1 // 1番目が偶数なので引き算

 Ans
 int main()
{
	int a = 0;
	int b = 0;

	printf("数値を2つ入力してください \n");
	scanf_s("%d ", &a);
	scanf_s("%d", &b);

	if (a % 2 >= 1)
	{
		printf("%d - %d = %d \n", a, b, a - b);
	}
	else
	{
		printf("%d + %d = %d \n", a, b, a + b);
	}
}
*/

/*
*第７問(25点)
 第６問のプログラムをループで行うようにし、
 endと入力された場合終了するようにしてください。
 endの入力は1番目の値の場所でも、2番目の値の場所でも、
 別途endの入力を受け付けるようでもどれでもいいです。
 どこか一か所でendと入力して終了していれば正解とします。

 Ans

 int main()
{
	int a = 0;
	int b = 0;

	int end = -1;
	char str1[4] = {};

	bool End = false;

	do
	{
		printf("数値を2つ入力してください \n");
		scanf_s("%d", &a);
		scanf_s("%d", &b);

		printf("終わるならend,続けるならそれ以外を入力 \n");
		scanf_s("%s", str1, 4);

		if (strcmp(str1, "end") == 0)
		{
			End = true;
			continue;
		}
		else if (a % 2 >= 1)
		{
			printf("%d - %d = %d \n", a, b, a - b);
		}
		else
		{
			printf("%d + %d = %d \n", a, b, a + b);
		}
	} while (!End);
}
*/

/*
* 
第８問(10点)
以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
実行できるようにしてください。
解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
(途中確認のためにコメントアウトをする分はOKです。)
間違えている個所は4か所です。

class Point
{
public:
    Point() { Clear(); }

    Clear()
    {
        x = 0;
        y = 0;
        z = 0;
    }
public:
    int x, y, z;
}

{
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.X < nextPoint.x)
        {
            point.x++;
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
        }

        if (point.y < nextPoint.y)
        {
            point.y++;
        }
        else if (point.y > nextPointy)
        {
            point.y--;
        }
        printf("pointX = %d\n", point.x);
        printf("pointY = %d\n", point.y);

        if (point.x == nextPoint.x &&
            point.y == nextPoint.y)
        {
            break;
        }
    }
}


Ans

class Point
{
public:
     Point() { Clear(); }

    void Clear()
    {
        x = 0;
        y = 0;
        z = 0;
    }
public:
    int x, y, z;
};


int main()
{
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.x < nextPoint.x)
        {
            point.x++;
            printf("pointX = %d\n", point.x);
            printf("pointY = %d\n", point.y);
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
            printf("pointX = %d\n", point.x);
            printf("pointY = %d\n", point.y);
        }
        else if (point.y < nextPoint.y)
        {
            point.y++;
            printf("pointX = %d\n", point.x);
            printf("pointY = %d\n", point.y);
        }
        else if (point.y > nextPoint.y)
        {
            point.y--;
            printf("pointX = %d\n", point.x);
            printf("pointY = %d\n", point.y);
        }
        else if (point.x == nextPoint.x && point.y == nextPoint.y)
        {
            break;
        }
    }
}
*/


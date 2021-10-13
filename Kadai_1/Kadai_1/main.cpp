#include<stdio.h>

/*
メモリ確保を使用し、
1000個の配列を確保して、
その配列に0～999を設定するプログラムを作成してください。
更にnewとdeleteで配列を確保する処理を、
クラスにしてデストラクタで自動でdeleteが呼ばれるようにしてください。
*/

class Test
{
public:

	Test(int n)
	{
		Array = new int[n];
	}

	~Test()
	{
		delete []Array;
		Array = nullptr;
	}

	void Set(int n)
	{
		Array[n] = n;
	}

	int Get(int n)
	{
		if (n >= 0 && n < 1000)
		{
			return Array[n];
		}
		else
		{
			printf("配列外");
		}
	}
private:

	int* Array;
};

int main()
{
	Test test(1000);

	for (int i = 0; i < 1000; ++i)
	{
		test.Set(i);
	}

	for (int i = 0; i < 1000; ++i)
	{
		printf("num = %d\n", test.Get(i));
	}

	//配列外
	printf("num = %d\n", test.Get(-1));
	printf("num = %d\n", test.Get(1000));

}
#include<stdio.h>

/*
�������m�ۂ��g�p���A
1000�̔z����m�ۂ��āA
���̔z���0�`999��ݒ肷��v���O�������쐬���Ă��������B
�X��new��delete�Ŕz����m�ۂ��鏈�����A
�N���X�ɂ��ăf�X�g���N�^�Ŏ�����delete���Ă΂��悤�ɂ��Ă��������B
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
			printf("�z��O");
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

	//�z��O
	printf("num = %d\n", test.Get(-1));
	printf("num = %d\n", test.Get(1000));

}
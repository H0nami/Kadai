#include<stdio.h>

/*
Object�N���X
x,y,z���W��ۑ�����ϐ��AUpdate�֐������B
Update�֐���virtual�ō���Ă��������B


Vehicle(��蕨)�N���X
Object�N���X���p�������N���X�B
�����ł�SpeedUp�N���X��ǉ����Ă��������B
�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
SpeedUp�N���X��virtual�ō���Ă��������B
(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
�x�N�g�����v�Z������@�ł��\���܂���B)


Car(��)�N���X
Vehicle�N���X���p�������N���X
SpeedUp��SpeedDown��������Car�p�Ɏ������Ă��������B

*/

class Object
{
public:
	Object(){}
	virtual int Vector3(int a, int b, int c)
	{
		int X = a;
		int Y = b;
		int Z = c;
	}
public:
	virtual void Update(){}
};

class Vehicle : public Object
{
	/*
	Virtual��class?
	
	virtual class SpeedUp
	{
		int speed = n;
		int accel = m;
	}
	*/
};

class Car : public Vehicle
{
public:
	void SpeedUp() 
	{

	};

	void SpeedDown()
	{

	};

};
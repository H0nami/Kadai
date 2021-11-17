#include<stdio.h>

/*
Object�N���X
x,y,z���W��ۑ�����ϐ��AUpdate�֐������B
Update�֐���virtual�ō���Ă��������B


Vehicle(��蕨)�N���X
Object�N���X���p�������N���X�B
�����ł�SpeedUp�֐���ǉ����Ă��������B
�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
SpeedUp�֐���virtual�ō���Ă��������B
(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
�x�N�g�����v�Z������@�ł��\���܂���B)


Car(��)�N���X
Vehicle�N���X���p�������N���X
SpeedUp��SpeedDown��������Car�p�Ɏ������Ă��������B

*/

class Object
{
public:
	Object() {};

public:
	virtual void Update()
	{
		printf("(% d, % d, % d)\n", x, y, z);
	};

public:
	int x = 0;
	int y = 0;
	int z = 0;

private:
};

class Vehicle : public Object
{
public:
	Vehicle() {};
	
public:
	virtual void SpeedUp()
	{
		printf("spped1 = %d \naccel  = %d \n", speed, accel);

		speed += accel;

		printf("speed2 = %d \n", speed);
	}

public:
	void Update()
	{
		x += speed;

		printf("speed3 = %d \n x = %d \n y = %d \n z = %d \n", speed, x, y, z);
	};

public:
	int speed = 1;
	int accel = 1;

private:
};

class Car : public Vehicle
{
public:
	Car()
	{
		speed = 5;
		accel = 5;
	};

	void Update()
	{
		Vehicle::Update();
	}

private:
};



int main()
{
	Car car;

	for (int i = 0; i < 10; i++)
	{
		car.SpeedUp();
		car.Update();
	}
}
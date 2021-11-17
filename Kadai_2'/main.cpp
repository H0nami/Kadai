#include<stdio.h>

/*
Objectクラス
x,y,z座標を保存する変数、Update関数を持つ。
Update関数はvirtualで作ってください。


Vehicle(乗り物)クラス
Objectクラスを継承したクラス。
ここではSpeedUp関数を追加してください。
またspeedとaccelの変数をここで追加してください。
SpeedUp関数はvirtualで作ってください。
(正確な速度の処理を行いたい場合は、向きと加速度で、
ベクトルを計算する方法でも構いません。)


Car(車)クラス
Vehicleクラスを継承したクラス
SpeedUpとSpeedDownをここでCar用に実装してください。

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
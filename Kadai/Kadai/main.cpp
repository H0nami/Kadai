#include<stdio.h>

/*
// 問１.　外部参照？scanf_s？
struct Vector2
{
public:
	int GetX; 
	int GetY;
	void SetX(int setX) { GetX = setX; }
	void SetY(int setY) { GetY = setY; }
	void SetPosition();
};

void Vector2::SetPosition()
{
	printf("Vector2 = (%d , %d)", GetX, GetY);
	return;
}

int main()
{
	Vector2 vec;
	printf("xの値を入力\n");

	scanf_s("%d", &vec.GetX);
	
	printf("yの値を入力\n");
	
	scanf_s("%d", &vec.GetY);
	
	vec.SetPosition();
}
*/


/*
//問２　関数を介する　関数？
struct Vector2
{
private:
	int x, y;

public:
	int GetX() { return x; }
	int GetY() { return y; }
	void SetX(int setX) { x = setX; }
	void SetY(int setY) { y = setY; }
	void SetPosition();
};

void Vector2::SetPosition()
{
	printf("Vector2 = (%d , %d)", x, y);
	return;
}

int main()
{
	Vector2 vec;
	vec.SetX(20);
	vec.SetY(15);

	vec.SetPosition();
}
*/


//問３　関数を介する　Vector3
struct Vector3
{
private:
	int x, y, z;

public:
	int GetX() { return x; }
	int GetY() { return y; }
	int GetZ() { return z; }
	void SetX(int setX) { x = setX; }
	void SetY(int setY) { y = setY; }
	void SetZ(int setZ) { z = setZ; }
	void SetPosition();
};

void Vector3::SetPosition()
{
	printf("Vector3 = (%d , %d , %d)", x, y, z);
	return;
}

int main()
{
	Vector3 vec;
	vec.SetX(20);
	vec.SetY(15);
	vec.SetZ(30);

	vec.SetPosition();
}

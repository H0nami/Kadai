#include <stdio.h>
#include <memory>
#include <vector> 
#include <list>

// 第1問(10点)
// 以下のクラスにコンストラクタ、デストラクタを追加してください。
// コンストラクタ、デストラクタの処理の内容はなんでも構いません

/*
class Point
{
private:
    int x;
    int y;

public:
   
    Point()
    {
        printf("Pointのコンストラクタ\n");
    }

    ~Point()
    {
        printf("Pointのデストラクタ\n");
    }

};
*/

// 第2問(10点)
// int型の変数をnewを使い確保してください。
// また、char型の配列をnewを使い確保してください。
// どちらもdeleteを呼び出すようにしてください。

/*
int main()
{
    int* newInt = new int(10);

    char* newChar = new char[10];

    printf("newInt = %d\n", *newInt);
    printf("newChar = %d\n", *newChar);


    delete newInt;
    newInt = nullptr;

    delete newChar;
    newChar = nullptr;
}
*/

// 第3問(15点)
// 以下の継承先クラスのデストラクタが正しく呼び出されるように、
// クラスを修正してください。

/*
class Test
{
public:
    Test()
    {
        printf("Test\n");
    }
    virtual ~Test()
    {
        printf("~Test\n");
    }
};
class Test2 : public Test
{
public:
    Test2()
    {
        printf("Test2\n");
    }
    ~Test2()
    {
        printf("~Test2\n");
    }
};
int main()
{
    Test* t;
    t = new Test2();

    delete t;
    return 0;
}
*/

// 第4問(25点)
// 以下の関数をテンプレート化して、
// 様々な型で計算できるようにしてください。

/*
template <typename T>

T Calc(T a, T b, int type)
{
    float ans = 0;
    switch (type)
    {
    case 0:
        ans = a + b;
        break;
    case 1:
        ans = a - b;
        break;
    case 2:
        ans = a * b;
        break;
    case 3:
        ans = a / b;
        break;
    }

    return ans;
}

int main()
{
    int ans1;
    float ans2;
    char ans3;

    ans1 = Calc<int>(2, 5, 0);
    ans2 = Calc<float>(10.0f, 2.5f, 3);
    ans3 = Calc<char>(10, 4, 2);

    printf("%d\n", ans1);
    printf("%d\n", ans2);
    printf("%d\n", ans3);

    return 0;
}
*/

// 第5問(25点)
// 次のプログラムを修正し、以下のような表示になるようにプログラムを作成してください。
// num = 50
// num = 40
// num = 30
// num = 20
// num = 10
// また、リストを修正してください。その際表示は以下のようになるようにしてください。
// num = 30

/*
int main()
{
    std::list<int> lst;
    for (int i = 10; i < 60; ++i)
    {
        if (i % 2 == 0 && i % 5 == 0)
        {
            lst.push_front(i);
        }
    }

    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        printf("num = %d\n", *it);
    }

    // リストを修正してnum=30と表示されるようにプログラムを記述
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end();)
    {
        if (*(it) % 3 == 0)
        {
            ++it;
        }
        else
        {
            it = lst.erase(it);
        }
    }

    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        printf("\nnum = %d\n", *it);
    }
}
*/

// 第6問(25点)
// 第5問と同じ表示になるようにstd::vectorを使ってプログラムを記述してください。

/*
int main()
{
    std::vector<int> vec;
    for (int i = 50; i > 0; --i)
    {
        if (i % 2 == 0 && i % 5 == 0)
        {
            vec.push_back(i);
        }
    }

    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        printf("num = %d\n", *it);
    }

    // リストを修正してnum=30と表示されるようにプログラムを記述
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end();)
    {
        if (*(it) % 3 == 0)
        {
            ++it;
        }
        else
        {
            it = vec.erase(it);
        }
    }

    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        printf("\nnum = %d\n", *it);
    }

}
*/



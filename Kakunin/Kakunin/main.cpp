#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

/*
 **第１問**
 
 以下の計算に答えよ。
 1011 + 0101
 110100 + 11011

 1011 + 110011
 1011 + 0101  = 1 0000
 110100 + 11011 = 100 1111
 1011 + 110011 = 11 1110
 */

/*
	**第２問**

	以下の計算に答えよ。
	FF + FF
	ed + 10
	563 + cd

	FF + FF = 1FE
	ed + 10 = FD
	563 + cd = 630
*/

/*
	**第３問**
	* 
	char、int、float、doubleのサイズはそれぞれいくつか答えよ。

	char   1バイト　
	int    4バイト 
	float  4バイト
	double 8バイト

*/

/*
	**第４問**
	
	int judge = true;
	if(judge)
	{
	①
	}
	else
	{
	②
	}
	①と②どちらが処理されるか答えよ。

	int main()
	{
		int judge = true;
	
		if(judge)
		{
			printf("①");
		}
		else
		{
			printf("②");
		}
	}

	Ans ①

*/

/*
	**第５問**
	
	for( int i = 0; i < 100; i = i + 3)
	{
	①
	}
	①の処理が何回実行されるか答えよ。

	int main()
	{
		for( int i = 0; i < 100; i = i + 3)
		{
			printf("%d \n", &i / 3 + 1);
			//①
		}
	}

	Ans 34回
*/

/*	
	**第６問**
	
	int i = 0;
	while( i < 100)
	{
 		i = i + 5;
 		①
	}
	①の処理は何回実行されるか答えよ。

	int main()
	{
		int i = 0;
		while( i < 100)
		{
 			i = i + 5;
			printf("%d \n", &i / 5);
 			//①
		}
	}

	Ans 20回
*/

/*
	**第７問**

	int array[4][5];
	上記配列のサイズはいくつか答えよ。

	int main()
	{
		int array[4][5];

		printf("サイズの大きさ = %d。\n", &sizeof(array));
	}

	Ans 80
	
*/

/*
	**第８問**
	
	int array[5][20]
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < ①; ++j)
		{
			array[i][j] = i * ① + j;
		}
	}
	①には何という数字が入るか答えよ。

	Ans 20
*/

/*第９問
	① testFunc(int a)
	{
		return;
	}
	①にはint, float, voidのどれが正しいか答えよ。

	Ans void
*/

/*
	**第１０問**
	２点間の距離を求める関数を作成してください。

	#define sqr(n) ((n)*(n))

	struct Point
	{
		double x;
		double y;
	};

	double distance(Point pl, Point en)
	{
		return sqrt(sqr(pl.x - en.x) + sqr(pl.y - en.y));
	}

	int main()
	{
		Point player, enemy;
		printf("プレイヤーのx座標:");	scanf_s("%lf", &player.x);
		printf("プレイヤーのy座標:");   scanf_s("%lf", &player.y);
		printf("エネミーのx座標:");		scanf_s("%lf", &enemy.x);
		printf("エネミーのy座標:");		scanf_s("%lf", &enemy.y);

		printf("\nお互いの距離は%.2f。\n", distance(player, enemy));
	}

	ネットで調べました。
*/

/*
	**第１１問**
	
	カード構造体を作成してください。
	このカードはトランプのカードのことです。
	情報として、なんのカードなのかを持っていてください。
	スペードの7である、ハートの13であるなど。
	この構造体には現在の自分の情報を設定する処理と、
	現在の自分の情報を開示する処理を作ってください。


	トランプの山札の構造体を作成してください。
	その際カードには先ほど作った構造体を使用してください。
	以下の条件を満たしておくこと。
	トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
	Card card[53];

	シャッフル機能を実装する。
	card[53]にランダムにカード情報を付与してください。
	card[0]がクラブの6、card[1]がハートの5といったように。
	その際同じカードは存在しないようにしてください。


	typedef struct card
	{
		int no;
		char mark;
	}trump;

	void card_input	 (trump* card);	//カードに数字とマークを代入
	void card_shuffle(trump* card);	//カードをシャッフル
	void card_output (trump* card); //カードを表示

	void main()
	{
		trump card[53];	//カード構造体を配列で定義
		card_input(card);
		card_output(card);
		card_shuffle(card);
		card_output(card);
	}

	void card_input(trump * card)
	{
		int i;
		for (i = 0; i < 53; i++)
		{
			(card + i)->no = i % 13 + 1;
		
			switch (i / 13)
			{
			case 0:
				(card + i)->mark = 'S';
				break;
			case 1:
				(card + i)->mark = 'Q';
				break;
			case 2:
				(card + i)->mark = 'H';
				break;
			case 3:
				(card + i)->mark = 'D';
				break;
			default:
				(card + i)->mark = 'J';
				break;
			}
		
		
		
		}
		printf("\n");
	}

	void card_shuffle(trump * card)
	{
		int i, r, tmp_n;	//乱数を格納する変数と一時変数を定義
		char tmp_m;			//一時変数

		srand((unsigned)time(NULL));	//乱数の種に現在時刻を使用
		for (i = 0; i < 53; i++)
		{
			r = rand() % 53;	//乱数を取得

			**乱数で得た番号と配列の(先頭+i)番号を入れ替え**

			tmp_n = (card + i)->no;
			(card + i)->no = (card + r)->no;
			(card + r)->no = tmp_n;

			**マークを入れ替え**
			
			tmp_m = (card + i)->mark;
			(card + i)->mark = (card + r)->mark;
			(card + r)->mark = tmp_m;
		}
		printf("\n");
	}

	void card_output(trump * card)
	{
		int i;
		printf("\n");
		for (i = 0; i < 53; i++)
		{
			printf("%c%d \n", (card + i)->mark, (card + i)->no );
		}
	}

	// ネットのを写しました。
	// Jokerは自力で入れました。

*/
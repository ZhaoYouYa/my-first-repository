#include<iostream>

using namespace std;

int v = 0;

float w = 0;

int ww=0;

int zhuantang(int n)

{

	v = n % 6;

	if (v == 0) 

	{

		v = rand() % 5+1;

	}

	n = n - v;

	if (n == 0)

	{

		cout << "我拿完了！我赢了，要不要在玩一次？"<<endl;

		return 0;

	}

	else if (n < 0)

	{

		cout << "恭喜你，你赢了! 再玩一次？"<<endl;

		return  0;

	}

	cout << "我拿走" << v << "个糖。 现在还剩："<<n<<"个糖。"<<endl;

	cout << "轮到你了，告诉我你要拿走的糖吧！输入你拿走的糖：\n" << endl;

	cin >> w;

	ww = w;

	while ((w < 1 || w>5)||w!=ww)

	{

		cout << "不许犯规，只能拿1-5个糖，而且不能把糖切碎的。重新告诉我你拿了多少颗糖！ " << endl;

		cin.clear();

		cin.ignore();

		cin >> w;

		ww = w;

	}

	cout << " 你拿了" << w << "个糖，" << endl;

	n = n - w;

	cout << "现在还有" << n << "个糖.\n"<<endl;

	zhuantang(n);

}

int main()

{

	cout << "现在我们来玩个抓糖的游戏吧！游戏的内容如下：\n" << endl

		<< "1.你找来任意数目个糖，放在一起。\n\n" << "2.我们轮流从你找来的糖里拿走1-5个糖，我先来。比如：我拿1个，你拿2个。\n\n"

		<< "3.谁先把糖拿完，谁就赢啦！比如：现在还剩7个糖，我拿4个，你拿3个，然后，就没有糖了，这代表你赢了！！\n\n了解规则了吗？ 那么现在，游戏开始!!\n";

	cout << endl << endl << endl<<"你现在找来多少颗糖，告诉我吧！。\n\n输入你找来的糖：\n\n";

	float tang;

	cin >> tang;

	int n = tang;

	while (tang <= 0||n!=tang)

	{

		cout << "你真的可以找来这个数目的糖吗？\n\n" << "再一次告诉我你找来了多少糖~：\n\n";

		cin.clear();

		cin.ignore();

		cin>>tang;

		n = tang;

	}

	cout << "好的，那么你现在找到了" << tang << "个糖。我开始先抓啦！\n\n" << endl;

	zhuantang(n);

	system

		("pause");

	return 0;

}

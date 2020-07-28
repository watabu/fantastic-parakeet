#include <string>
#include <iostream>
using namespace std;

//整数 num 回あいさつをする
void hello_N(int num) {
	for (int i = 0; i < num; i++) {
		cout << "hello ";
	}
	cout << endl;
}

//敵にアンブッシュされる　値が-10以下なら回避成功
void ambush(int num) {
	cout << "<<敵のアンブッシュ！>>\n";
	if (num <= -10) {
		cout << "アンブッシュに失敗したニンジャはすれ違い様にカラテを喰らい爆発四散！\n";
	}
	else {
		cout << "アンブッシュも見抜けないサンシタニンジャは爆発四散！\n";
	}

}

int main() {
	int N;
	cout << "何回あいさつする？:";
	cin >> N;

	if (N <= 0) {
		ambush(N);
		return 0;
	}

	hello_N(N);

	cout << "挨拶終わり\n";

	return 0;
}
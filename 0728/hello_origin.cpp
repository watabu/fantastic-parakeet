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

int main() {
	int N;
	cout << "何回あいさつする？:";
	cin >> N;

	hello_N(N);

	cout << "挨拶終わり\n";

	return 0;
}
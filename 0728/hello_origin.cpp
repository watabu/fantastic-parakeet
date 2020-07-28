#include <string>
#include <iostream>
using namespace std;

//®” num ‰ñ‚ ‚¢‚³‚Â‚ğ‚·‚é
void hello_N(int num) {
	for (int i = 0; i < num; i++) {
		cout << "hello ";
	}
	cout << endl;
}

int main() {
	int N;
	cout << "‰½‰ñ‚ ‚¢‚³‚Â‚·‚éH:";
	cin >> N;

	hello_N(N);

	cout << "ˆ¥AI‚í‚è\n";

	return 0;
}
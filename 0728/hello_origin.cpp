#include <string>
#include <iostream>
using namespace std;

//���� num �񂠂���������
void hello_N(int num) {
	for (int i = 0; i < num; i++) {
		cout << "hello ";
	}
	cout << endl;
}

int main() {
	int N;
	cout << "���񂠂�������H:";
	cin >> N;

	hello_N(N);

	cout << "���A�I���\n";

	return 0;
}
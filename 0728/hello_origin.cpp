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

//�G�ɃA���u�b�V�������@�l��-10�ȉ��Ȃ��𐬌�
void ambush(int num) {
	cout << "<<�G�̃A���u�b�V���I>>\n";
	if (num <= -10) {
		cout << "�A���u�b�V���Ɏ��s�����j���W���͂���Ⴂ�l�ɃJ���e����炢�����l�U�I\n";
	}
	else {
		cout << "�A���u�b�V�����������Ȃ��T���V�^�j���W���͔����l�U�I\n";
	}

}

int main() {
	int N;
	cout << "���񂠂�������H:";
	cin >> N;

	if (N <= 0) {
		ambush(N);
		return 0;
	}

	hello_N(N);

	cout << "���A�I���\n";

	return 0;
}
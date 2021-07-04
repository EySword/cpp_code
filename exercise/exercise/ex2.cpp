
#include<stdafx.h>
#include<iostream>
#include<string>
using namespace std;

class student {
private:
	char name[100], number[100];
	int age, score1, score2, score3, score4;
public:
	void Init(char name_[100],char number_[100],int age_,int score1_,int score2_,int score3_,int score4_){
		strcpy_s(name, name_);
		age = age_;
		strcpy_s(number, number_);
		score1 = score1_;
		score2 = score2_;
		score3 = score3_;
		score4= score4_;
	}
	void Message() {
		cout << name << ',' << age << ',' << number << ',' << (score1 + score2 + score3 + score4) / 4 << endl;
	}

};

int main() {

	char name[100], number[100];
	int age, score1, score2, score3, score4;
	char k;

	cin.getline(name, 100, ',');
	cin >> age >> k;
	cin.getline(number, 100, ',');
	cin >> score1 >> k >> score2 >> k >> score3 >> k >> score4;

	student Exe;
	Exe.Init(name, number, age, score1, score2, score3, score4);
	Exe.Message();
	return 0;
}

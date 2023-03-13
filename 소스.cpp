#include<iostream>
using namespace std;

class SoBase
{
	int baseNum;
public:
	SoBase() :baseNum(20) { cout << "SoBase()" << endl; }	//정의 없이는 20 출력
	SoBase(int n) :baseNum(n) { cout << "SoBase(int n)" << endl; }	//n으로 정의 시 n 출력
	void ShowBaseData() { cout << baseNum << endl; }
};

class SoDerived :public SoBase
{
	int derivNum;
public:
	SoDerived() :derivNum(30) { cout << "SoDerived()" << endl; }	//정의 없이는 30 출력
	SoDerived(int n) :derivNum(n) { cout << "SoDerived(int n)" << endl; }	//n으로 정의 시 n 출력
	SoDerived(int n1, int n2) :SoBase(n1), derivNum(n2) { cout << "SoDerived(int n1,int n2)" << endl; }	//baseNum을 n1, derivNum을 n2로 정의.
	void ShowDerivData()
	{
		ShowBaseData();	//baseNum 출력
		cout << derivNum << endl;
	}
};

int main()
{
	cout << "case1....." << endl;
	SoDerived dr1;	//20, 30
	dr1.ShowDerivData();
	cout << "_____________________" << endl;
	cout << "case2....." << endl;
	SoDerived dr2(12);	//20, 12
	dr2.ShowDerivData();
	cout << "_____________________" << endl;
	cout << "case3....." << endl;
	SoDerived dr3(23, 24);	//23, 24
	dr3.ShowDerivData();
	return 0;
}
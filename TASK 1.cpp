#include<iostream>
#include<string>
  
using namespace std;

class Beta;
class Alpha {
private:
	int a;
public:
	Alpha(int a) {
		this->a = a;
	}
	friend int sum(Alpha, Beta);
};

class Beta {
private:
	int b;
public:
	Beta(int b) {
		this->b = b;
	}
	friend int sum(Alpha ,Beta);
};

int sum(Alpha w,Beta z) {
	return w.a + z.b;
}
int main() {
	Alpha a(3);
	Beta b(7);
	cout<<"Sum : "<<sum(a, b);
	return 0;
}

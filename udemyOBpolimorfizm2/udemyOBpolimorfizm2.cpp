#include <iostream>
#include <string>

using namespace std;

class Postac {
public:
	virtual void PrzedstawSie() {
		cout << "Metoda Postac" << endl;
	}
};

class Czlowiek : public Postac {
public:
	void PrzedstawSie() {
		cout << "Metoda Czlowiek" << endl;
	}
};

class Mnich : public Postac {
public:
	void PrzedstawSie() {
		cout << "Metoda Mnich" << endl;
	}
};

void KtoTo(Postac& obiekt) {
	obiekt.PrzedstawSie();
}

	int main() {

		Czlowiek obiekt1;
		Mnich obiekt2;

		KtoTo(obiekt1);
		KtoTo(obiekt2);

};

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {
	double x, y, R;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		cout << "Enter x: "; cin >> x;
		cout << "Enter y: "; cin >> y;
		cout << "Enter R: "; cin >> R;

		if ((y <= 0 && x <= 0 && y >= -x - 2 * R) ||
			(y >= 0 && x >= 0 && y * y >= R * R - x * x && y <= 2 * R && x <= 2 * R))
			cout << "YES\n\n";
		else
			cout << "NO\n\n";
	}

	cout << endl << fixed;

	for (int i = 0; i < 10; i++) {
		x = -2 * R + rand() * 4 * R / RAND_MAX;
		y = -2 * R + rand() * 4 * R / RAND_MAX;

		if ((y <= 0 && x <= 0 && y >= -x - 2 * R) ||
			(y >= 0 && x >= 0 && y * y >= R * R - x * x && y <= 2 * R && x <= 2 * R))
			cout << setw(8) << setprecision(4) << x << " "
				 << setw(8) << setprecision(4) << y << " " << "  - YES\n";
		else
			cout << setw(8) << setprecision(4) << x << " "
				 << setw(8) << setprecision(4) << y << " " << "  - NO\n";
	}

	return 0;
}
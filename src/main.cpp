#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto mx = int{ 0 };
	while (0 < (n--)) {
		int a, d, g;
		cin >> a >> d >> g;

		const auto& x = d + g;
		auto sum = a * x;
		if (a == x) {
			sum *= 2;
		}

		if (mx < sum) {
			mx = sum;
		}
	}

	cout << mx;

	return 0;
}
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto sy = int{ 0 };
		auto sk = int{ 0 };
		for (auto i = 0; i < 9; ++i) {
			auto y = int{};
			auto k = int{};
			cin >> y >> k;

			sy += y;
			sk += k;
		}

		if (sk < sy) {
			cout << "Yonsei\n";
		}
		else if (sy < sk) {
			cout << "Korea\n";
		}
		else {
			cout << "Draw\n";
		}
	}

	return 0;
}
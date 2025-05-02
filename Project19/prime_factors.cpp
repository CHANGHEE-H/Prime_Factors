#include <vector>

using std::vector;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (1 < num) {
			if (4 == num || 6 == num || 9 == num) {
				for (int divisor = 2; 1 < num; divisor++) {
					while (0 == num % divisor) {
						ret.push_back(divisor);
						num /= divisor;
					}
				}
			}
			else {
				ret.push_back(num);
			}
		}
		return ret;
	}
};
#include <vector>

using std::vector;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (1 < num) {
			int divisor = 2;
			if (4 == num) {
				while (0 == num % divisor) {
					ret.push_back(divisor);
					num /= divisor;
				}
			}
			else if (6 == num) {
				for (divisor = 2; 1 < num; divisor++) {
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
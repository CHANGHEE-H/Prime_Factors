#include <vector>

using std::vector;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (1 < num) {
			if (4 == num) {
				while (0 == num % 2) {
					ret.push_back(2);
					num /= 2;
				}
			}
			else {
				ret.push_back(num);
			}
		}
		return ret;
	}
};
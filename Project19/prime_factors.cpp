#include <vector>

using std::vector;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		for (int divisor = 2; 1 < num; divisor++) {
			while (0 == num % divisor) {
				ret.push_back(divisor);
				num /= divisor;
			}
		}
		
		return ret;
	}
};
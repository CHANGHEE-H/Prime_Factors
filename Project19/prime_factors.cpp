#include <vector>

using std::vector;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (2 == num) {
			ret.push_back(2);
		}
		return ret;
	}
};
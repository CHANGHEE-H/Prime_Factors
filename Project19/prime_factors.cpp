#include <vector>

using std::vector;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> ret = {};
		if (1 < num) {
			ret.push_back(num);
		}
		return ret;
	}
};
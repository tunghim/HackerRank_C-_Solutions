#include <iostream>
using namespace std;

template<bool...> class reversed_binary_value;
 
template<bool first, bool... rest> class reversed_binary_value<first, rest...> {
    public:    
        operator int() const {
            return reversed_binary_value<rest...>() * 2 + (first ? 1 : 0);
        }
};
 
template<> class reversed_binary_value<> {
    public:
        operator int() const{
            return 0;
        }
};

template <int n, bool...digits>
struct CheckValues {
  	static void check(int x, int y)
  	{
    	CheckValues<n-1, 0, digits...>::check(x, y);
    	CheckValues<n-1, 1, digits...>::check(x, y);
  	}
};

template <bool...digits>
struct CheckValues<0, digits...> {
  	static void check(int x, int y)
  	{
    	int z = reversed_binary_value<digits...>();
    	std::cout << (z+64*y==x);
  	}
};

int main()
{
  	int t; std::cin >> t;

  	for (int i=0; i!=t; ++i) {
		int x, y;
    	cin >> x >> y;
    	CheckValues<6>::check(x, y);
    	cout << "\n";
  	}
}

#include <iostream>
#include <vector>
#include <algorithm>

class functor {
private:
    int summ;
    int count;
public:
    functor() : summ(0), count(0) { }
    void operator()(int n) {
        if (n % 3 == 0) {
            ++count;
            summ += n;
        }
    }
    int get_summ() { return summ; }
    int get_count() { return count; }
};

int main()
{
    std::vector<int> arr{ 4, 1, 3, 6, 25, 54 };
    functor f;
    f = std::for_each(arr.begin(), arr.end(), f);
    std::cout << f.get_summ() << "\n";
    std::cout << f.get_count() << "\n";
}

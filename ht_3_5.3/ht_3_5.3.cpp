#include <iostream>
#include <vector>
#include <algorithm>

class functor {
private:
    std::vector<int> v;
    int summ = 0;
    int count = 0;
public:
    functor(const std::vector<int> v) : v(v) { }
    void operator()() {
        for (auto i = v.begin(); i < v.end(); ++i) {
            if (*i % 3 == 0) { summ += *i; ++count; }
       }
    }
    int get_summ() { return summ; }
    int get_count() { return count; }
};

int main()
{
    auto f = functor(std::vector<int>{4, 1, 3, 6, 25, 54});
    f();
    std::cout << f.get_summ() << "\n";
    std::cout << f.get_count();
}

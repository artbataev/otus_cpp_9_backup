#include <boost/concept_check.hpp>

#include <algorithm>
#include <vector>

template <typename T>
struct LessThenComparableCustom {
        BOOST_CONCEPT_USAGE(LessThenComparableCustom) {
            bool result = left < right;  // required boolean < operator
        }
    private:
        T left, right;
};

struct SomeStruct {
    explicit SomeStruct(int a) {
        
    }

    bool operator<(const SomeStruct& ) const {
        return true;
    }
};

template<typename T>
void customSort(typename std::vector<T>& values) {
    BOOST_CONCEPT_ASSERT((LessThenComparableCustom<T>));
    std::sort(std::begin(values), std::end(values));
}

int main(int argc, char * argv[]) {
    std::vector<SomeStruct> values;
    customSort(values);
}

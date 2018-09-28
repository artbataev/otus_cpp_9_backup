#include <boost/concept_check.hpp>

#include <algorithm>
#include <vector>

struct SomeStruct {
    bool operator<(const SomeStruct& ) {
        return true;
    }
};

template<typename T>
void customSort(typename std::vector<T>& values) {
    BOOST_CONCEPT_ASSERT((boost::LessThanComparable<T>));
    std::sort(std::begin(values), std::end(values));
}

int main(int argc, char * argv[]) {
    std::vector<SomeStruct> values;
    customSort(values);
}
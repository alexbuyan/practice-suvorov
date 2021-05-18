#ifndef CONCAT_SEPARATED_H
#define CONCAT_SEPARATED_H

#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <utility>

namespace cls_27 {
// TODO: std::string concat_separated(std::string_view sep, .....) { std::stringstream .... }
template<class ...Args>
std::string concat_separated(std::string_view sep, const Args &...args) {
    std::stringstream s;
    return s.str();
}
}  // namespace cls_27

#endif  // CONCAT_SEPARATED_H

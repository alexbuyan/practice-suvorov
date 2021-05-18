#ifndef CONCAT_H
#define CONCAT_H

#include <sstream>
#include <string>

namespace cls_27 {
template<class ...Args>
std::string concat(const Args &...args) {
    std::stringstream s;
    (s << ... << args);
    return s.str();
}
}  // namespace cls_27

#endif  // CONCAT_H

#ifndef CONCAT_SEPARATED_H
#define CONCAT_SEPARATED_H

#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <utility>

namespace cls_27 {
// TODO: std::string concat_separated(std::string_view sep, .....) {
// std::stringstream .... }

namespace implement {
void append(bool first, std::stringstream &, std::string_view) {
}

template <class Arg, class... Args>
void append(bool first,
            std::stringstream &s,
            std::string_view sep,
            const Arg &arg,
            const Args &... args) {
    if (!first)
        s << sep;
    s << arg;
    append(false, s, sep, args...);
}
}  // namespace implement

template <class... Args>
std::string concat_separated(std::string_view sep, const Args &... args) {
    std::stringstream s;
    implement::append(true, s, sep, args...);
    return s.str();
}

template <class... Args>
std::string concat_separated(std::string_view sep, const std::tuple<Args...> &args) {
    return std::apply(
        static_cast<std::string (*)(std::string_view, const Args &...)>(
            concat_separated),
        std::tuple_cat(std::tuple{sep}, args));
}
}  // namespace cls_27

#endif  // CONCAT_SEPARATED_H

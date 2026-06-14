#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the messages
    std::size_t pos = line.find(": ");
    return  line.substr(pos + 2);
}

std::string log_level(std::string line) {
    // return the log level
    std::size_t endBracket = line.find("]");
    return line.substr(1, endBracket - 1);
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string msg = message(line);
    std::string log = log_level(line);

    return msg + " (" + log + ")";
}
}  // namespace log_line

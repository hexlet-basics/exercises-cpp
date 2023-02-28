#ifndef OUTPUT_STREAM_TEST
#define OUTPUT_STREAM_TEST

#include <iostream>
#include <string>

#ifndef NDEBUG
#   define ASSERT(condition, message, result) \
    do { \
        if (!(condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            std::terminate(); \
        } else { \
            std::cout << "Test Passed!!!" \
                      << '\n' << "Output: " << result << std::endl; \
        } \
    } while (false)
#else
#   define ASSERT(condition, message) do { } while (false)
#endif
#endif

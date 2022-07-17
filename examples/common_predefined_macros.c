#include <stdio.h>

int main()
{
    printf("__COUNTER__: %d %d %d\n", __COUNTER__, __COUNTER__, __COUNTER__);
    printf("__GNUC__: %d\n", __GNUC__);
    printf("__GNUC_MINOR__: %d\n", __GNUC_MINOR__);
    printf("__GNUC_PATCHLEVEL__: %d\n", __GNUC_PATCHLEVEL__);
    printf("__BASE_FILE__: %s\n", __BASE_FILE__);
    printf("__INCLUDE_LEVEL__: %d\n", __INCLUDE_LEVEL__);
    printf("__VERSION__: %s\n", __VERSION__);

    __SIZE_TYPE__ size_t = __SIZE_MAX__;
    __PTRDIFF_TYPE__ ptrdiff_t = __PTRDIFF_MAX__;
    __WCHAR_TYPE__ wchar_t_max = __WCHAR_MAX__;
    __WCHAR_TYPE__ wchar_t_min = __WCHAR_MIN__;
    __WINT_TYPE__ wint_t_max = __WINT_MAX__;
    __WINT_TYPE__ wint_t_min = __WINT_MIN__;
    __INTMAX_TYPE__ intmax_t = __INTMAX_MAX__;
    __UINTMAX_TYPE__ uintmax_t = __UINTMAX_MAX__;
    __SIG_ATOMIC_TYPE__ sig_atomic_t_max = __SIG_ATOMIC_MAX__;
    __SIG_ATOMIC_TYPE__ sig_atomic_t_min = __SIG_ATOMIC_MIN__;
    __INT8_TYPE__ int8_t = __INT8_MAX__;
    __INT16_TYPE__ int16_t = __INT16_MAX__;
    __INT32_TYPE__ int32_t = __INT32_MAX__;
    __INT64_TYPE__ int64_t = __INT64_MAX__;
    __UINT8_TYPE__ uint8_t = __UINT8_MAX__;
    __UINT16_TYPE__ uint16_t = __UINT16_MAX__;
    __UINT32_TYPE__ uint32_t = __UINT32_MAX__;
    __UINT64_TYPE__ uint64_t = __UINT64_MAX__;
    __INT_LEAST8_TYPE__ int_least8_t = __INT_LEAST8_MAX__;
    __INT_LEAST16_TYPE__ int_least16_t = __INT_LEAST16_MAX__;
    __INT_LEAST32_TYPE__ int_least32_t = __INT_LEAST32_MAX__;
    __INT_LEAST64_TYPE__ int_least64_t = __INT_LEAST64_MAX__;
    __UINT_LEAST8_TYPE__ uint_least8_t = __UINT_LEAST8_MAX__;
    __UINT_LEAST16_TYPE__ uint_least16_t = __UINT_LEAST16_MAX__;
    __UINT_LEAST32_TYPE__ uint_least32_t = __UINT_LEAST32_MAX__;
    __UINT_LEAST64_TYPE__ uint_least64_t = __UINT_LEAST64_MAX__;
    __INT_FAST8_TYPE__ int_fast8_t = __INT_FAST8_MAX__;
    __INT_FAST16_TYPE__ int_fast16_t = __INT_FAST16_MAX__;
    __INT_FAST32_TYPE__ int_fast32_t = __INT_FAST32_MAX__;
    __INT_FAST64_TYPE__ int_fast64_t = __INT_FAST64_MAX__;
    __UINT_FAST8_TYPE__ uint_fast8_t = __UINT_FAST8_MAX__;
    __UINT_FAST16_TYPE__ uint_fast16_t = __UINT_FAST16_MAX__;
    __UINT_FAST32_TYPE__ uint_fast32_t = __UINT_FAST32_MAX__;
    __UINT_FAST64_TYPE__ uint_fast64_t = __UINT_FAST64_MAX__;
    __INTPTR_TYPE__ intptr_t = __INTPTR_MAX__;
    __UINTPTR_TYPE__ uintptr_t = __UINTPTR_MAX__;

    printf("size_t = %lu\n", size_t); // 4294967295
    printf("ptrdiff_t = %ld\n", ptrdiff_t); // 2147483647
    printf("wchar_t_max = %d\n", wchar_t_max); // 65535
    printf("wchar_t_min = %d\n", wchar_t_min); // 0
    printf("wint_t_max = %d\n", wint_t_max); // 4294967295
    printf("wint_t_min = %d\n", wint_t_min); // 0
    printf("intmax_t = %ld\n", intmax_t); // 9223372036854775807
    printf("uintmax_t = %lu\n", uintmax_t); // 18446744073709551615
    printf("sig_atomic_t_max = %d\n", sig_atomic_t_max); // 2147483647
    printf("sig_atomic_t_min = %d\n", sig_atomic_t_min); // 0
    printf("int8_t = %d\n", int8_t); // 127
    printf("int16_t = %d\n", int16_t); // 32767
    printf("int32_t = %d\n", int32_t); // 2147483647
    printf("int64_t = %ld\n", int64_t); // 9223372036854775807
    printf("uint8_t = %u\n", uint8_t); // 255
    printf("uint16_t = %u\n", uint16_t); // 65535
    printf("uint32_t = %u\n", uint32_t); // 4294967295
    printf("uint64_t = %lu\n", uint64_t); // 18446744073709551615
    printf("int_least8_t = %d\n", int_least8_t); // 127
    printf("int_least16_t = %d\n", int_least16_t); // 32767
    printf("int_least32_t = %d\n", int_least32_t); // 2147483647
    printf("int_least64_t = %ld\n", int_least64_t); // 9223372036854775807
    printf("uint_least8_t = %u\n", uint_least8_t); // 255
    printf("uint_least16_t = %u\n", uint_least16_t); // 65535
    printf("uint_least32_t = %u\n", uint_least32_t); // 4294967295
    printf("uint_least64_t = %lu\n", uint_least64_t); // 18446744073709551615
    printf("int_fast8_t = %d\n", int_fast8_t); // 127
    printf("int_fast16_t = %ld\n", int_fast16_t); // 32767
    printf("int_fast32_t = %ld\n", int_fast32_t); // 2147483647
    printf("int_fast64_t = %ld\n", int_fast64_t); // 9223372036854775807
    printf("uint_fast8_t = %u\n", uint_fast8_t); // 255
    printf("uint_fast16_t = %lu\n", uint_fast16_t); // 65535
    printf("uint_fast32_t = %lu\n", uint_fast32_t); // 4294967295
    printf("uint_fast64_t = %lu\n", uint_fast64_t); // 18446744073709551615
    printf("intptr_t = %ld\n", intptr_t); // 2147483647
    printf("uintptr_t = %lu\n", uintptr_t); // 4294967295

    printf("__CHAR_BIT__: %d\n", __CHAR_BIT__); // 8
    printf("__SCHAR_MAX__: %d\n", __SCHAR_MAX__); // 127
    printf("__SHRT_MAX__: %d\n", __SHRT_MAX__); // 32767
    printf("__INT_MAX__: %d\n", __INT_MAX__); // 2147483647
    printf("__LONG_MAX__: %ld\n", __LONG_MAX__); // 2147483647
    printf("__LONG_LONG_MAX__: %lld\n", __LONG_LONG_MAX__); // 9223372036854775807

    printf("__INT8_C(c): %d\n", __INT8_C(127)); // 127
    printf("__INT16_C(c): %d\n", __INT16_C(32767)); // 32767
    printf("__INT32_C(c): %d\n", __INT32_C(2147483647)); // 2147483647
    printf("__INT64_C(c): %ld\n", __INT64_C(9223372036854775807)); // 9223372036854775807
    printf("__UINT8_C(c): %u\n", __UINT8_C(255)); // 255
    printf("__UINT16_C(c): %u\n", __UINT16_C(65535)); // 65535
    printf("__UINT32_C(c): %u\n", __UINT32_C(4294967295)); // 4294967295
    printf("__UINT64_C(c): %lu\n", __UINT64_C(18446744073709551615)); // 18446744073709551615
    printf("__INTMAX_C(c): %ld\n", __INTMAX_C(9223372036854775807)); // 9223372036854775807
    printf("__UINTMAX_C(c): %lu\n", __UINTMAX_C(18446744073709551615)); // 18446744073709551615

    printf("__SIZEOF_INT__: %d\n", __SIZEOF_INT__); // 4
    printf("__SIZEOF_LONG__: %d\n", __SIZEOF_LONG__); // 4
    printf("__SIZEOF_LONG_LONG__: %d\n", __SIZEOF_LONG_LONG__); // 8
    printf("__SIZEOF_SHORT__: %d\n", __SIZEOF_SHORT__); // 2
    printf("__SIZEOF_POINTER__: %d\n", __SIZEOF_POINTER__); // 4
    printf("__SIZEOF_FLOAT__: %d\n", __SIZEOF_FLOAT__); // 4
    printf("__SIZEOF_DOUBLE__: %d\n", __SIZEOF_DOUBLE__); // 4
    printf("__SIZEOF_LONG_DOUBLE__: %d\n", __SIZEOF_LONG_DOUBLE__); // 12
    printf("__SIZEOF_SIZE_T__: %d\n", __SIZEOF_SIZE_T__); // 4
    printf("__SIZEOF_WCHAR_T__: %d\n", __SIZEOF_WCHAR_T__); // 2
    printf("__SIZEOF_WINT_T__: %d\n", __SIZEOF_WINT_T__); // 2
    printf("__SIZEOF_PTRDIFF_T__: %d\n", __SIZEOF_PTRDIFF_T__); // 2

    printf("__BYTE_ORDER__: %d\n", __BYTE_ORDER__);
    printf("__ORDER_LITTLE_ENDIAN__: %d\n", __ORDER_LITTLE_ENDIAN__);
    printf("__ORDER_BIG_ENDIAN__: %d\n", __ORDER_BIG_ENDIAN__);
    printf("__ORDER_PDP_ENDIAN__: %d\n", __ORDER_PDP_ENDIAN__);
    printf("__FLOAT_WORD_ORDER__: %d\n", __FLOAT_WORD_ORDER__);

    return 0;
}

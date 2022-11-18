#include <uk/test.h>
#include <uk/config.h>

#ifndef CONFIG_LIBNOLIBC 
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_SORT_TESTS)
        uk_testsuite_register(uk_libc_sort_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_RANDOM_TESTS)
        uk_testsuite_register(uk_libc_random_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_STRUCTURE_SEARCH_TESTS)
        uk_testsuite_register(uk_libc_structure_search_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_SEMAPHORE_TESTS)
        uk_testsuite_register(uk_libc_semaphore_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_CRYPT_TESTS)
        uk_testsuite_register(uk_libc_crypt_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_TGMATH_TESTS)
        uk_testsuite_register(uk_libc_tgmath_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_POSIX_SPAWN_TESTS)
        uk_testsuite_register(uk_libc_posix_spawn_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_FPCLASSIFY_TESTS)
        uk_testsuite_register(uk_libc_fpclassify_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_SETJMP_TESTS)
        uk_testsuite_register(uk_libc_setjmp_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_MBFUNC_TESTS)
        uk_testsuite_register(uk_libc_mbfunc_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_ICONV_TESTS)
        uk_testsuite_register(uk_libc_iconv_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_NETWORK_TESTS)
        uk_testsuite_register(uk_libc_network_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_REGEX_TESTS)
        uk_testsuite_register(uk_libc_regex_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_CONVERSION_TESTS)
        uk_testsuite_register(uk_libc_conversion_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_PTHREAD_TESTS)
        uk_testsuite_register(uk_libc_pthread_tests, NULL);
    #endif
    #if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_ACCESS_TESTS)
        uk_testsuite_register(uk_libc_access_tests, NULL);
    #endif
#endif

#if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_MALLOC_TESTS)
        uk_testsuite_register(uk_libc_malloc_tests, NULL);
#endif

#if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_UDIV_TESTS)
        uk_testsuite_register(uk_libc_udiv_tests, NULL);
#endif

#if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_TIME_TESTS)
        uk_testsuite_register(uk_libc_time_tests, NULL);
#endif

#if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_FILE_FOLDER_TESTS)
        uk_testsuite_register(uk_libc_file_folder_tests, NULL);
#endif

#if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_ENV_TESTS)
        uk_testsuite_register(uk_libc_env_tests, NULL);
#endif

#if defined(CONFIG_LIBUKTEST_ALL) || defined(CONFIG_LIBLIBCTEST_STRING_TESTS)
        uk_testsuite_register(uk_libc_string_tests, NULL);
#endif

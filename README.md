# libc-test

Test suite for standard C libraries (libc).
[Upstream version](https://wiki.musl-libc.org/libc-test.html) developed as part of [Musl](https://www.musl-libc.org/).

## Configuration

To run these tests, you will need to have an app like `app-helloworld` that includes this library as an external one. To do that, you can add `lib-libctest` to your application's Makefile at the end. Example:
```
LIBS := $(UK_LIBS)/lib-musl:$(UK_LIBS)/lib-lwip:$(UK_LIBS)/lib-libctest
```

## Testing:
To run the tests, select `Libc-test Unikraft library` option in the menuconfig along with the tests that you want to run.

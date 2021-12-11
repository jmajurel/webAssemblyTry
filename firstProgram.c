#include <stdio.h>
#include <emscripten/emscripten.h>
#include <sys/utsname.h>

int main() {
	printf("hello World\n");
}

#ifdef __cplusplus
extern "C" {
#endif

EMSCRIPTEN_KEEPALIVE void myFunction(int argc, char ** argv) {
    struct utsname uname_pointer;

    uname(&uname_pointer);
	printf("Hardware on website (from webassembly) %s \n", uname_pointer.machine);
}

#ifdef __cplusplus
}
#endif
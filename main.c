#define MICROSOFT_CRAZINESS_IMPLEMENTATION
#include "microsoft_craziness.h"

#include <stdio.h>

int main(int argc, char **argv) {
    Find_Result result = find_visual_studio_and_windows_sdk();

    for(int i = 1; i < argc; i++) {
        char *param = argv[i];

        if(strcmp(param, "win_root") == 0) {
            wprintf(L"%s\n", result.windows_sdk_root);
        } else if(strcmp(param, "win_um") == 0) {
            wprintf(L"%s\n", result.windows_sdk_um_library_path);
        } else if(strcmp(param, "win_ucrt") == 0) {
            wprintf(L"%s\n", result.windows_sdk_ucrt_library_path);
        } else if(strcmp(param, "win_version") == 0) {
            wprintf(L"%d\n", result.windows_sdk_version);
        } else if(strcmp(param, "vs_exe") == 0) {
            wprintf(L"%s\n", result.vs_exe_path);
        } else if(strcmp(param, "vs_library") == 0) {
            wprintf(L"%s\n", result.vs_library_path);
        }
    }

    return 0;
}

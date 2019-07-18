# Find My Visual Studio
[![Build status](https://ci.appveyor.com/api/projects/status/abc5ovnxahbdm7j0?svg=true)](https://ci.appveyor.com/project/emily33901/find-my-visual-studio)

CI build for the single header created by Jonathan Blow which can be found [here](https://gist.github.com/Kalinovcic/b4d9cc55a37f929cb62320763e8fbb47).

Prebuilt binaries can be found in the [releases](https://github.com/josh33901/find_my_visual_studio/releases) tab.

Usage:

`find_my_visual_studio.exe <arg1> <arg2> <arg3>...`

Where args can be:
 - `win_root` - windows sdk root folder
 - `win_um` - windows sdk um lib folder
 - `win_ucrt` - windows sdk ucrt lib folder
 - `win_version` - windows sdk version
 - `vs_exe` - cl.exe folder
 - `vs_library` - visual studio libraries folder
 - `msbuild_exe` - msbuild exe folder
 - `vs_root` - visual studio root folder
 
Values are printed on their own line, in the order provided in the argument list.

PURPOSES
-------------------
Compile and use RxCpp Reactive library in Android using Visual Studio 2015 Update 1.

NOTE
--------
1)RxCpp is the ReactiveX (Reactive Extension) version for C++.
The GitHub Project is here:
https://github.com/Reactive-Extensions
2) In order to compile RxCpp I used this version of CMake:
http://blogs.msdn.com/b/vcblog/archive/2015/12/15/support-for-android-cmake-projects-in-visual-studio.aspx
This is a tweaked version from Microsoft that enable creation of Dynamic Library for Android.
In order generate the project use:
cmake -G “Visual Studio 14 ARM” –DCMAKE_SYSTEM_NAME=VCMDDAndroid
You need also to change this compile flags:
- Use of STL : GNU STL static library (gnustl_static)
- enable support for C++11
- enable exceptions

CREDIT GOES ALSO TO:
------------------------
1) Kirk Shoop for helping find the #define RXCPP_ON_IOS needed to compile and run successfully for Android

COMTRIBUTIONS
----------------
Contributions are welcomed. 
The main idea is to to port the RxCpp original examples to android as well as Visual Studio project as reference for further "production ready" project. 



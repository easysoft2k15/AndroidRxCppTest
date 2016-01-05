PURPOSE
-------------------
I'm  trying to compile and use RxCpp Reactive library in Android.

DESCRIPTION
---------------------
If You take the Solution as it is and deploy it to an Android phone (I have not tried with the emulator), everything work as expected.
If You uncomment  some line of code the application crash.

REPRODUCE PROBLEM
---------------------------------
- open test.cpp file
- uncomment the following line:
        //ints.subscribe([](int key)
        //{
        //    auto a = key;
        //    a = 10;
        //});
- compile and deploy
- Boom!! The application crash

MY OPINION
--------------------
- Seems that with the uncommented line the application is not able to load the library anymore. I suspect that this depend on the fact that with the new lines the library size increase and this does not like to Android
. I have not found any information regarding the max size of a dynamic library though.

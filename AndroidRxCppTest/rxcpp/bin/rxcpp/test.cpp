#include "rx.hpp"
#include "jni.h"

extern "C"
{
	JNIEXPORT int JNICALL Java_com_AndroidRxcpp_rxcppLib_test2(JNIEnv * env, jobject obj)
	{
		return 4;
	}

	JNIEXPORT int JNICALL test(JNIEnv * env, jobject obj)
	{
		auto ints = rxcpp::observable<>::from<int>(1, 2, 3, 4);

		//UNCOMMENT THIS WILL CRASH THE APPLICATION!!
		//PROBABLY DUE ANDROID NOT BEING ABLE TO LOAD THE LIBRxCppAndroid.SO LIBRARY
		//-----------------------------------------------------------------------------------------------
		//ints.subscribe([](int key)
		//{
		//	auto a = key;
		//	a = 10;
		//});

		return 0;
	}
}
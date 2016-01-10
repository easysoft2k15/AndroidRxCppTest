
//Do not remove this!
//See this:
//https://github.com/Reactive-Extensions/RxCpp/issues/184
//--------------------------------------------------------------------
#define RXCPP_ON_IOS

#include "rx.hpp"
#include "jni.h"

extern "C"
{
	//Function to be called from Java
	//---------------------------------------
	JNIEXPORT int JNICALL Java_com_Android1_rxcppLib_test(JNIEnv * env, jobject obj)
	{
		int res = 0;

		auto ints = rxcpp::observable<>::from<int>(1, 2, 3, 4);

		ints.subscribe([&](int key)
		{
			res = key;
		});

		return res;
	}
}
The error message when trying to load the library is this:

Trying to load lib /data/app-lib/com.Android1-1/librxcpp.so 0x41a662c8
dlopen("/data/app-lib/com.Android1-1/librxcpp.so") failed: dlopen failed: cannot locate symbol "__tls_get_addr" referenced by "librxcpp.so"...
Exception Ljava/lang/UnsatisfiedLinkError; thrown while initializing Lcom/Android1/rxcppLib;
java.lang.UnsatisfiedLinkError: dlopen failed: cannot locate symbol "__tls_get_addr" referenced by "librxcpp.so"...
at com.Android1.rxcppLib.<clinit>(rxcppLib.java:7)

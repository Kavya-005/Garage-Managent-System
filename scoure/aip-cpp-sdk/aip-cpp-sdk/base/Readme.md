Installing the Baidu AI Open Platform C++ SDK
C++ SDK Directory Structure:

base/base.h – Authorization-related class

base/base64.h – Base64 encoding class

base/http.h – HTTP request class

base/utils.h – Utility class

face.h – Face recognition interaction class

content_censor.h – Content review interaction class

image_classify.h – Image classification interaction class

image_search.h – Image search interaction class

kg.h – Knowledge graph interaction class

nlp.h – Natural language processing interaction class

ocr.h – Optical character recognition interaction class

speech.h – Speech recognition interaction class

Minimum supported standard: C++11 or above


Steps to Use the SDK Directly:
Download the C++ SDK zip package from the official website of the Baidu AI Open Platform.

Extract the downloaded aip-cpp-sdk-version.zip file. The extracted files are header files containing the implementation code.

Install the following dependencies:

curl (must support SSL)

openssl

jsoncpp (version must be greater than 1.6.2; versions in the 0.x range are not supported)

When compiling your project:

Enable C++11 support by adding -std=c++11 to the compiler flags (for gcc/clang)

Link the required third-party libraries using: -lcurl, -lcrypto, and -ljsoncpp

In your source code, include the header files for the interaction classes you need (such as face.h, image_censor.h, image_classify.h, kg.h, nlp.h, ocr.h, speech.h, etc.).
Once included, you can use the classes and methods under the aip namespace.

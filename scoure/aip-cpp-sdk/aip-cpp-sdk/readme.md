Installing the Baidu AI Open Platform C++ SDK
C++ SDK Directory Structure:

base/base.h: Authorization-related classes

base/base64.h: Base64 encoding class

base/http.h: HTTP request class

base/utils.h: Utility class

face.h: Face recognition interface class

content_censor.h: Content moderation interface class

image_classify.h: Image classification interface class

image_search.h: Image search interface class

kg.h: Knowledge graph interface class

nlp.h: Natural language processing interface class

ocr.h: Optical character recognition interface class

speech.h: Speech recognition interface class

Minimum requirement: C++11 or higher

Steps to Use the SDK
Download the C++ SDK zip package from the official Baidu AI Open Platform website.

Extract the downloaded aip-cpp-sdk-version.zip. The package contains header files that implement the SDK.

Install the required third-party libraries:

curl (must support SSL)

openssl

jsoncpp (version must be greater than 1.6.2; version 0.x is not supported)

During compilation, make sure to:

Enable C++11 support (use -std=c++11 with gcc or clang)

Link the required libraries: -lcurl, -lcrypto, and -ljsoncpp

In your source code, include the interface header files you need (such as face.h, image_classify.h, ocr.h, etc.).
Once included, you can use the classes and methods under the aip namespace directly.

Documentation:

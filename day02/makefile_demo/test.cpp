#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include<map>

#include"aip-cpp-sdk/ocr.h"

using namespace std;
using namespace cv;
const string app_id = "32714526";
const  string api_key = "pZkwfkgnDUAa5Ag69LoSN1oe";
const string secret_key = "4PKHvy7ZKSTF3mYPcj8CvXyXZ7v03QE0";

int num = 0;
int capture_image(){

	VideoCapture cam;


	cam.open(0);

	if(!cam.isOpened())
	{
		cout<<"Failed to open camera!"<<endl;
		exit(-1);
	}
	cout<<"Success to open canmera!"<<endl;

	
	Mat image;

	cam.read(image);

	if(image.empty())
	{
		cout<<"imaage is empty!"<<endl;
		exit(-2);
	}
	
	/*string save_name = "./in/image";
	save_name += to_string(num++);
	save_name += ".jpg";
	//imwrite("./image.jpg",image);
	imwrite(save_name,image);*/
	imwrite("./image.jpg",image);
	return 0;
}

int main()
{
	int ret = capture_image();
	if(ret != 0){
		cout<<"Failed to save image!"<<endl;
		return -1;
	}
	aip::Ocr client(app_id,api_key,secret_key);

	string image;
	aip::get_file_content("image.jpg",&image);

	map<string,string>options;

	options["multi_detect"]="false";
	
	Json::Value result =  client.license_plate(image,options);
	//Json
	//pkg-config --cflags jsoncpp
	//Json 的目录 -I/usr/include/jsoncpp	
	cout<<result.toStyledString()<<endl;

	if(!result["error_code"].isNull()){
		cout<<"error_code:"<<result["error_code"] <<endl;
		cout<<"License plate not recognized! 4"<<endl;
		cout<<"The buzzer sounds for 6 seconds."<<endl;
		return -1;
	}
	


	
	string plate = result["words_result"]["number"].asString();
	cout<<plate<<endl;
	cout<<result["words_result"]["number"]<<endl;
	return 0;
}

//g++ test.cpp -I/usr/include/jsoncpp -lopencv_core -lopencv_imcodecs -lcurl

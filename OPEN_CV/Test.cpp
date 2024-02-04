#include<iostream>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

void main() {

	int width = 300;
	int height = 300;

	Mat img1=imread("Resources/Input_Images/img1.jpg");
	Mat img2 = imread("Resources/Input_Images/img2.jpg");
	Mat img3 = imread("Resources/Input_Images/img3.jpg");
	Mat img4 = imread("Resources/Input_Images/img4.jpg");

	Mat rsImg1,rsImg2,rsImg3,rsImg4;
	resize(img1, rsImg1, Size(width, height));
	resize(img2, rsImg2, Size(width, height));
	resize(img3, rsImg3, Size(width, height));
	resize(img4, rsImg4, Size(width, height));

	Mat grayImg1;
	cvtColor(rsImg1, grayImg1, COLOR_BGR2GRAY);

	imshow("Gray Image 1", grayImg1);
	imshow("Resized Image1", rsImg1);
//	imshow("Resized Image2", rsImg2);
//  imshow("Resized Image3", rsImg3);
//	imshow("Resized Image4", rsImg4);


	waitKey(0);

	
}

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Resize and Crop  //////////////////////

void main() {
	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgResize, imgCrop;

	//cout << img.size() << endl;
	resize(img, imgResize,Size(640,480));

	Rect roi(100, 100, 300, 250);
	imgCrop = img(roi);


	imshow("Image", img);
	imshow("Image_Resize", imgResize);
	imshow("Image_Crop", imgCrop);


	waitKey(0);
}
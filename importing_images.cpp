#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/// <summary>
///  ////////// Importing Images
/// </summary>

void main() {

	string path = "Resources/test.png";
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(0);
}
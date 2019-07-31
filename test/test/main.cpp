#include<opencv2\opencv.hpp>
using namespace cv;
int main() 
{
	Mat test = imread("test.jpg");
	imshow("test", test);
	waitKey(0);
	return 0;
}
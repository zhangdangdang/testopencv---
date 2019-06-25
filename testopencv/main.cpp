#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
//#include<opencv2/core/core.hpp>
#include<iostream>
#include<math.h>
#define WINDOW_WIDTH 600
using namespace cv;
void drawellipse(Mat img, unsigned int x, unsigned int y, unsigned int a, unsigned int b,double angle)
{
	int thickness = 2;
	int linetype = 8;
	ellipse(img,Point(x,y),
		Size(a,b),
		angle,
		0,
		360,
		Scalar(0,255,0),
		thickness,
		linetype);

}
int main(int argc, char** argv)
{
	Mat ellipseimg = imread("E:/1.png");
	/*if (src.empty())
	{
		printf("could not load image..\n");
		return -1;
	}
	    namedWindow("opencv setup demo", CV_WINDOW_AUTOSIZE);
		imshow("opencv setup demo", src);
		namedWindow("output", CV_WINDOW_FREERATIO);//可调节窗口
		Mat output_image;
		cvtColor(src, output_image, CV_BGR2HLS);
		drawellipse(output_image, 360);

		imshow("output", output_image);
		//imwrite("D:/kk.png", output_image);
		printf("banben " CV_VERSION);*/
//	int width = 600;
	//int length = 500;
	//Mat ellipseimg = Mat::zeros(width, length, CV_8UC3);
	drawellipse(ellipseimg,70,70, 50, 50, 0);
	namedWindow("showimg", CV_WINDOW_FREERATIO);//可调节窗口
	imshow("showimg", ellipseimg);
	waitKey(0);
	return 0;
}
// L1_2_calcPixelAverage.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv.hpp>
using namespace cv;

int main()
{

	cv::Mat srcMat = imread("D:\\testImage\\1.jpg",0);
	imshow("src", srcMat);
	waitKey();

	return 0;
}

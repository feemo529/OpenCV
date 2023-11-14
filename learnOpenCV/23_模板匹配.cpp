//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = imread("./images/lena.jpg");
//	Mat temp = imread("./images/lena_face.jpg");
//
//	Mat result;
//
//	matchTemplate(img, temp, result, TM_CCOEFF_NORMED);
//	double maxVal, minVal;
//
//	Point maxLoc, minLoc;
//
//	minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc);
//
//	rectangle(img, Point(maxLoc.x, maxLoc.y), Point(maxLoc.x + temp.cols, maxLoc.y + temp.rows), Scalar(0, 0, 255), 2);
//
//	imshow("Ô­Í¼Ïñ", img);
//	imshow("Ä£°å", temp);
//	imshow("result", result);
//
//
//	waitKey(0);
//
//	return 0;
//}

//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = imread("./images/noobcvqr.png");
//
//	Point2f src_points[4];
//	Point2f dst_points[4];
//	//通过Image Watch查看的二维码四个角坐标
//	src_points[0] = Point2f(223.0, 26.0);
//	src_points[1] = Point2f(563.0, 171.0);
//	src_points[2] = Point2f(14.0, 517.0);
//	src_points[3] = Point2f(372.0, 658.0);
//
//	//期望透视变换后二维码四个角点的坐标
//	dst_points[0] = Point2f(0.0, 0.0);
//	dst_points[1] = Point2f(583.0, 0);
//	dst_points[2] = Point2f(0.0, 692.0);
//	dst_points[3] = Point2f(583.0, 692.0);
//
//	Mat rotation, img_warp;
//
//	rotation = getPerspectiveTransform(src_points, dst_points); //计算透视变换矩阵
//
//	warpPerspective(img, img_warp, rotation, img.size()); //透视变换投影
//
//	imshow("img", img);
//	imshow("img_warp", img_warp);
//
//	waitKey(0);
//
//	return 0;
//}
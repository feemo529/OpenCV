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
//	//ͨ��Image Watch�鿴�Ķ�ά���ĸ�������
//	src_points[0] = Point2f(223.0, 26.0);
//	src_points[1] = Point2f(563.0, 171.0);
//	src_points[2] = Point2f(14.0, 517.0);
//	src_points[3] = Point2f(372.0, 658.0);
//
//	//����͸�ӱ任���ά���ĸ��ǵ������
//	dst_points[0] = Point2f(0.0, 0.0);
//	dst_points[1] = Point2f(583.0, 0);
//	dst_points[2] = Point2f(0.0, 692.0);
//	dst_points[3] = Point2f(583.0, 692.0);
//
//	Mat rotation, img_warp;
//
//	rotation = getPerspectiveTransform(src_points, dst_points); //����͸�ӱ任����
//
//	warpPerspective(img, img_warp, rotation, img.size()); //͸�ӱ任ͶӰ
//
//	imshow("img", img);
//	imshow("img_warp", img_warp);
//
//	waitKey(0);
//
//	return 0;
//}
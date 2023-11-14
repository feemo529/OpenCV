//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//void drawLine(Mat& img, //要标记直线的图像
//	vector<Vec2f> lines,	//检测的直线数据
//	double rows,	//原图像的行数（高）
//	double cols,	//原图像的列数（宽）
//	Scalar scalar,	//绘制直线的颜色
//	int n	//绘制直线的线宽
//)
//{
//	Point pt1, pt2;
//	for (size_t i = 0; i < lines.size(); i++)
//	{
//		float rho = lines[i][0]; //直线距离坐标跟原点的距离
//		float theta = lines[i][1];	//直线国坐标原点垂线与x轴夹角
//		double a = cos(theta); //夹角的余玹值
//		double b = sin(theta); //夹角的正玹值
//		double x0 = a * rho, y0 = b * rho; //直线与过坐标原点的垂线的交点
//		double length = max(rows, cols); //图像高宽的最大值
//		
//		pt1.x = cvRound(x0 + length * (-b));
//		pt1.y = cvRound(y0 + length * (a));
//		//计算直线上另一点
//		pt2.x = cvRound(x0 - length * (-b));
//		pt2.y = cvRound(y0 - length * (a));
//		//两点绘制一条直线
//		line(img, pt1, pt2, scalar, n);
//	}
//}
//
////int main01()
////{
////	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
////
////	Mat img = imread("./images/HoughLines.jpg", IMREAD_GRAYSCALE);
////
////	Mat edge;
////	//检测边缘图像，并二值化
////	Canny(img, edge, 80, 180, 3, false);
////
////	//用不同的累加器进行检测直线
////	vector<Vec2f> lines1, lines2;
////	HoughLines(edge, lines1, 1, CV_PI / 180, 50, 0, 0);
////	HoughLines(edge, lines2, 1, CV_PI / 180, 150, 0, 0);
////
////	//在原图像中检测直线
////	Mat img1, img2;
////	img.copyTo(img1);
////	img.copyTo(img2);
////	drawLine(img1, lines1, edge.rows, edge.cols, Scalar(255), 2);
////	drawLine(img2, lines2, edge.rows, edge.cols, Scalar(255), 2);
////
////	imshow("img", img);
////	waitKey(0);
////	imshow("edge", edge);
////	waitKey(0);
////	imshow("img1", img1);
////	waitKey(0);
////	imshow("img2", img2);
////	waitKey(0);
////
////	return 0;
////}
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	Mat img = imread("./images/HoughLines.jpg", IMREAD_GRAYSCALE);
//
//	Mat edge;
//	//检测边缘图像，并二值化
//	Canny(img, edge, 80, 180, 3, false);
//
//	//用不同的累加器进行检测直线
//	vector<Vec4i> linesP1, linesP2;
//	HoughLinesP(edge, linesP1, 1, CV_PI / 180, 150, 30, 10);	//两个点连接最大距离10
//	HoughLinesP(edge, linesP2, 1, CV_PI / 180, 150, 30, 30);	//两个点连接最大距离30
//
//	//绘制两个点连接最大距离10直线检测结果
//	Mat img1, img2;
//	img.copyTo(img1);
//	for (size_t i = 0; i < linesP1.size(); i++)
//	{
//		line(img1, Point(linesP1[i][0], linesP1[i][1]), Point(linesP1[i][2], linesP1[i][3]), Scalar(255), 3);
//	}
//
//	//绘制两个点连接最大距离30直线检测结果
//	img.copyTo(img2);
//	for (size_t i = 0; i < linesP2.size(); i++)
//	{
//		line(img2, Point(linesP2[i][0], linesP2[i][1]), Point(linesP2[i][2], linesP2[i][3]), Scalar(255), 3);
//	}
//
//	imshow("img1", img1);
//	imshow("img2", img2);
//	waitKey(0);
//
//	return 0;
//}
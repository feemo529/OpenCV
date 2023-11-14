//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	system("color F0");	//将DOS界面调成白底黑字
//	Mat img = imread("./images/lena.jpg");
//
//	RNG rng(10086);	//随机数
//	
//	int connectivity = 4;	//连通领域方式
//	int maskVal = 255;	//掩码图像的数值
//	int flags = connectivity | (maskVal << 8) | FLOODFILL_FIXED_RANGE;	//漫水填充操作方式标志
//
//	//设置与选中像素点的差值
//	Scalar loDiff = Scalar(20, 20, 20);
//	Scalar upDiff = Scalar(20, 20, 20);
//
//	//声明掩码矩阵变量
//	Mat mask = Mat::zeros(img.rows + 2, img.cols + 2, CV_8UC1);
//
//	while (true)
//	{
//		//随机产生图像中某一像素点
//		int py = rng.uniform(0, img.rows - 1);
//		int px = rng.uniform(0, img.cols - 1);
//		Point point = Point(px, py);
//
//		//彩色图像中填充的像素值
//		Scalar newVal = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
//		Rect ccomp;
//		//漫水填充函数
//		int area = floodFill(img, mask, point, newVal, &ccomp, loDiff, upDiff, flags);
//
//		//输出像素点和填充的像素数目
//		cout << "像素点x: " << point.x << " y: " << point.y << "		填充像素数目:		" << area << endl;
//
//		//输出填充的图像结果
//		imshow("填充的彩色图像", img);
//		imshow("掩码图像", mask);
//
//		//判断是否结束程序
//		int c = waitKey(0);
//		if ((c & 255) == 27)
//		{
//			break;
//		}
//	}
//
//	return 0;
//}
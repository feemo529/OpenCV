//#include <opencv2/opencv.hpp>
//#include <fstream>
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
//	//读取所有图像
//	VideoCapture capture("./images/vtest.avi");
//	Mat preFrame, preGray;
//	if (!capture.read(preFrame))
//	{
//		cout << "请确认视频文件是否正确" << endl;
//		return -1;
//	}
//	
//	//输出视频相关信息
//	int fps = capture.get(CAP_PROP_FPS);
//	int width = capture.get(CAP_PROP_FRAME_WIDTH);
//	int height = capture.get(CAP_PROP_FRAME_HEIGHT);
//	int num_of_frame = capture.get(CAP_PROP_FRAME_COUNT);
//	cout << "视频宽度：" << width << " 视频高度：" << height << " 视频帧率：" << fps << " 视频总帧数" << num_of_frame << endl;
//
//	//读取视频中第一帧图像作为前一帧图像，并进行灰度变化
//	cvtColor(preFrame, preGray, COLOR_BGR2GRAY);
//
//	while (true)
//	{
//		Mat nextFrame, nextGray;
//		//视频中所有图像处理完后退出循环
//		if (!capture.read(nextFrame))
//		{
//			break;
//		}
//		imshow("视频图像", nextFrame);
//		Mat_<Point2f> flow;	//两个方向的运动速度
//		calcOpticalFlowFarneback(preGray, nextGray, flow, 0.5, 3, 15, 3, 5, 1.2, 0);
//
//		Mat xV = Mat::zeros(preFrame.size(), CV_32FC1);	//x方向移动速度
//		Mat yV = Mat::zeros(preFrame.size(), CV_32FC1);	//y方向移动速度
//
//		for (int row = 0; row < flow.rows; row++)
//		{
//			for (int col = 0; col < flow.cols; col++)
//			{
//				const Point2f& flow_xy = flow.at<Point2f>(row, col);
//				xV.at<float>(row, col) = flow_xy.x;
//				yV.at<float>(row, col) = flow_xy.y;
//			}
//		}
//
//		//计算向量角度和幅值
//		Mat magnitude, angle;
//		cartToPolar(xV, yV, magnitude, angle);
//
//		//角度转换成角度制
//		angle = angle * 180.0 / CV_PI / 2.0;
//
//		//把幅值归一化到0-255区间便于显示结果
//		normalize(magnitude, magnitude, 0, 255, NORM_MINMAX);
//
//		//计算角度和幅值的绝对值
//		convertScaleAbs(magnitude, magnitude);
//		convertScaleAbs(angle, angle);
//
//		//运动的幅值和角度生成HSV颜色空间的图像
//		Mat HSV = Mat::zeros(preFrame.size(), preFrame.type());
//		vector<Mat> result;
//		split(HSV, result);
//		result[0] = angle;	//决定颜色
//		result[1] = Scalar(255);
//		result[2] = magnitude;	//决定形态
//								//将三个多通道图像合并三通道图像
//		merge(result, HSV);
//
//		//讲HSV颜色空间图像转换到RGB颜色空间中
//		Mat rgbImg;
//		cvtColor(HSV, rgbImg, COLOR_HSV2BGR);
//
//		//显示检测结果
//		imshow("运动检测结果", rgbImg);
//
//		//5毫秒延时判断是否推出程序，按ESC键退出;
//		char c = waitKey(5);
//		if (c == 27)
//		{
//			break;
//		}
//	}
//
//	waitKey(0);
//	return 0;
//}
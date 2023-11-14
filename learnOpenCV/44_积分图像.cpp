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
//	Mat img = Mat::ones(16, 16, CV_32FC1);
//
//	//��ͼ���м����������
//	RNG rng(10086);
//	for (int y = 0; y < img.rows; y++)
//	{
//		for (int x = 0; x < img.cols; x++)
//		{
//			float d = rng.uniform(-0.5, 0.5);
//			img.at<float>(y, x) = img.at<float>(y, x) + d;
//		}
//	}
//
//	//�����׼��ͻ���
//	Mat sum;
//	integral(img, sum);
//	//������ʾ��ת��CV_8U��ʽ
//	Mat sum8U = Mat_<uchar>(sum);
//	namedWindow("sum8U", WINDOW_NORMAL);
//	imshow("sum8U", sum8U);
//
//	//����ƽ����ͻ���
//	Mat sqsum;
//	integral(img, sum, sqsum);
//	//������ʾ��ת��CV_8U��ʽ
//	Mat sqsum8U = Mat_<uchar>(sqsum);
//	namedWindow("sqsum8U", WINDOW_NORMAL);
//	imshow("sqsum8U", sqsum8U);
//
//	//������б��ͻ���
//	Mat tilted;
//	integral(img, sum, sqsum, tilted);
//	//������ʾ��ת��CV_8U��ʽ
//	Mat tilted8U = Mat_<uchar>(tilted);
//	namedWindow("tilted8U", WINDOW_NORMAL);
//	imshow("tilted8U", tilted8U);
//
//	waitKey(0);
//	return 0;
//}
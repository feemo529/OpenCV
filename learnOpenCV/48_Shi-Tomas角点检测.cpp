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
//	Mat img = imread("./images/lena.jpg", IMREAD_COLOR);
//
//	//ת�ɻҶ�ͼ��
//	Mat gray;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//
//	//��ȡ�ǵ�
//	int maxCorners = 100;	//���ǵ���Ŀ
//	double quality_level = 0.01;	//�����ȼ�������˵��ֵ����ѽǵ�ı�����ϵ
//	double minDistance = 0.04;	//�����ǵ�֮�����Сŷʽ����
//	vector<Point2f> corners;
//	goodFeaturesToTrack(gray, corners, maxCorners, quality_level, minDistance, Mat(), 3, false);
//
//	//���ƽǵ�
//	vector<KeyPoint> keyPoints; //��Žǵ��KeyPoint�࣬���ں��ڻ��ƽǵ�ʱ��
//
//	for (int i = 0; i < corners.size(); i++)
//	{
//		//���ǵ�����Key Point����
//		KeyPoint keyPoint;
//		keyPoint.pt = corners[i];
//		keyPoints.push_back(keyPoint);
//	}
//
//	//����drawKeypoints()�������ƽǵ�����
//	drawKeypoints(img, keyPoints, img);
//	imshow("�ǵ���", img);
//
//
//	waitKey(0);
//	return 0;
//}
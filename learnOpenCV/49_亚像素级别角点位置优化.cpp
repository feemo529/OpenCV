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
//	//���������ؼ���ǵ�����
//	vector<Point2f> cornersSub = corners;	//�ǵ㱸�ݣ���ֹ�������޸�
//	Size winSize = Size(5, 5);
//	Size zeroZone = Size(-1, -1);
//	TermCriteria criteria = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 40, 0.001);
//	cornerSubPix(gray, cornersSub, winSize, zeroZone, criteria);
//	
//	//�����ʼ����;�ϸ����
//	for (size_t i = 0; i < corners.size(); i++)
//	{
//		string str = to_string(i);
//		str = "��" + str + "���ǵ���ʼ����: ";
//		cout << str << corners[i] << "  ��ϸ������:  " << cornersSub[i] << endl;
//	}
//
//
//	waitKey(0);
//	return 0;
//}
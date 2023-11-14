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
//	//����ORB �����������
//	Ptr<ORB> orb = ORB::create(
//		500, //��������Ŀ
//		1.2f, //�������㼶֮������ű���
//		8,   //��Ե��ֵ
//		31,   //ԭͼ�ڽ������еĲ���								
//		0,   //��Ե��ֵ
//		2,   //ԭͼ�ڽ������еĲ���
//		ORB::HARRIS_SCORE, //ʹ�� Harris ��������������
//		31, //����������ʱ�ؼ�����Χ����ĳߴ�
//		20 //���� FAST �ǵ�ʱ����ֵ��ֵ����ֵ
//		);
//
//	
//	//����ORB�ؼ���
//	vector<KeyPoint> Keypoints;
//	orb->detect(img, Keypoints); //ȷ���ؼ���
//
//	//���� ORB ������
//	Mat descriptions;
//	orb->compute(img, Keypoints, descriptions);	//����������
//
//	//����������
//	Mat imgAngel;
//	img.copyTo(imgAngel);
//	//���Ʋ����ǶȺʹ�С�Ľ��
//	drawKeypoints(img, Keypoints, img, Scalar(255, 255, 255));
//	//���ƺ��нǶȺʹ�С�Ľ��
//	drawKeypoints(img, Keypoints, imgAngel, Scalar(255, 255, 255), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);
//
//
//	//��ʾ���
//	imshow("�����ǶȺʹ�С�Ľ��", img);
//	imshow("���ǶȺʹ�С�Ľ��", imgAngel);
//
//
//	waitKey(0);
//	return 0;
//}
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
//	system("color F0");	//��DOS������ɰ׵׺���
//	Mat img = imread("./images/lena.jpg");
//
//	RNG rng(10086);	//�����
//	
//	int connectivity = 4;	//��ͨ����ʽ
//	int maskVal = 255;	//����ͼ�����ֵ
//	int flags = connectivity | (maskVal << 8) | FLOODFILL_FIXED_RANGE;	//��ˮ��������ʽ��־
//
//	//������ѡ�����ص�Ĳ�ֵ
//	Scalar loDiff = Scalar(20, 20, 20);
//	Scalar upDiff = Scalar(20, 20, 20);
//
//	//��������������
//	Mat mask = Mat::zeros(img.rows + 2, img.cols + 2, CV_8UC1);
//
//	while (true)
//	{
//		//�������ͼ����ĳһ���ص�
//		int py = rng.uniform(0, img.rows - 1);
//		int px = rng.uniform(0, img.cols - 1);
//		Point point = Point(px, py);
//
//		//��ɫͼ������������ֵ
//		Scalar newVal = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
//		Rect ccomp;
//		//��ˮ��亯��
//		int area = floodFill(img, mask, point, newVal, &ccomp, loDiff, upDiff, flags);
//
//		//������ص������������Ŀ
//		cout << "���ص�x: " << point.x << " y: " << point.y << "		���������Ŀ:		" << area << endl;
//
//		//�������ͼ����
//		imshow("���Ĳ�ɫͼ��", img);
//		imshow("����ͼ��", mask);
//
//		//�ж��Ƿ��������
//		int c = waitKey(0);
//		if ((c & 255) == 27)
//		{
//			break;
//		}
//	}
//
//	return 0;
//}
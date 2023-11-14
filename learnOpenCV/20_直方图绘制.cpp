//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = imread("./images/apple.jpg");
//
//	Mat gray;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	//������ȡֱ��ͼ����ر���
//	Mat hist;	//���ڴ��ֱ��ͼ������
//	const int channels[1] = { 0 };	//ͨ������
//	const int bins[1] = { 256 };	//ֱ��ͼ��ά�ȣ���ʵ�������ػҶ�ֵ�����ֵ
//	float inRanges[2] = { 0,255 };
//	const float* ranges[1] = { inRanges }; //���ػҶȷ�Χ
//
//	calcHist(&gray, 1, channels, Mat(), hist, 1, bins, ranges); //����ͼ��ֱ��ͼ
//
//	//����ֱ��ͼ
//	int hist_w = 512;
//	int hist_h = 200;
//	int width = 2;
//	Mat histImage = Mat::zeros(hist_h, hist_w, CV_8UC3);
//	//for (int i = 1; i <= hist.rows; i++)
//	//{
//	//	rectangle(histImage, Point(width * (i - 1), hist_h - 1), 
//	//		Point(width * i - 1, hist_h - cvRound(hist.at<float>(i - 1) / 15)), 
//	//		Scalar(255, 255, 255), -1);
//	//}
//
//	Mat hist_INF;
//	normalize(hist, hist_INF, 1, 0, NORM_INF, -1, Mat());
//	for (int i = 1; i <= hist_INF.rows; i++)
//	{
//		rectangle(histImage, Point(width * (i - 1), hist_h - 1),
//			Point(width * i - 1, hist_h - cvRound(hist_h * hist_INF.at<float>(i - 1)) - 1),
//			Scalar(255, 255, 255), -1);
//	}
//
//	imshow("histImage", histImage);
//	imshow("gray", gray);
//
//
//	waitKey(0); 
//
//	return 0;
//}
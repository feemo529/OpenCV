//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//void drawHist(Mat& hist, int type, string name);
//
//int main()
//{
//	Mat img1 = imread("./images/histMatch.jpg");
//	Mat img2 = imread("./images/Lena.bmp");
//
//	Mat hist1, hist2;
//	//��������ͼ��ֱ��ͼ
//	const int channels[1] = { 0 };
//	float inRanges[2] = { 0,255 };
//	const float* ranges[1] = { inRanges };
//	const int bins[1] = { 256 };
//	calcHist(&img1, 1, channels, Mat(), hist1, 1, bins, ranges);
//	calcHist(&img2, 1, channels, Mat(), hist2, 1, bins, ranges);
//	//��һ������ͼ���ֱ��ͼ
//	drawHist(hist1, NORM_L1, "hist1");
//	drawHist(hist2, NORM_L1, "hist2");
//
//	//��������ͼ��ֱ��ͼ���ۻ�����
//	float hist1_cdf[256] = { hist1.at<float>(0) };
//	float hist2_cdf[256] = { hist2.at<float>(0) };
//	for (int i = 1; i < 256; i++)
//	{
//		hist1_cdf[i] = hist1_cdf[i - 1] + hist1.at<float>(i);
//		hist2_cdf[i] = hist2_cdf[i - 1] + hist2.at<float>(i);
//	}
//
//	//�����ۻ�����������
//	float diff_cdf[256][256];
//	for (int i = 0; i < 256; i++)
//	{
//		for (int j = 0; j < 256; j++)
//		{
//			diff_cdf[i][j] = fabs(hist1_cdf[i] - hist2_cdf[j]);
//		}
//	}
//	
//	//����LUTӳ���
//	Mat lut(1, 256, CV_8U);
//	for (int i = 0; i < 256; i++)
//	{
//		//����Դ�Ҷȼ�Ϊi��ӳ��Ҷ�
//		//��i���ۻ����ʲ�ֵ��С�Ĺ涨���Ҷ�
//		float min = diff_cdf[i][0];
//		int index = 0;
//		//Ѱ���ۻ�������������ÿһ���е���Сֵ
//		for (int j = 1; j < 256; j++)
//		{
//			if (min > diff_cdf[i][j])
//			{
//				min = diff_cdf[i][j];
//				index = j;
//			}
//		}
//		lut.at<uchar>(i) = (uchar)index;
//	}
//
//	Mat result, hist3;
//	LUT(img1, lut, result);
//	imshow("��ƥ��ͼ��", img1);
//	imshow("ƥ���ģ��ͼ��", img2);
//	imshow("ֱ��ͼ��ƥ����", result);
//
//	calcHist(&result, 1, channels, Mat(), hist3, 1, bins, ranges);
//	drawHist(hist3, NORM_L1, "hist");
//	waitKey(0);
//	return 0;
//}
//
//void drawHist(Mat& hist, int type, string name) //��һ��������ֱ��ͼ����
//{
//	int hist_w = 512;
//	int hist_h = 400;
//	int width = 2;
//	Mat histImage = Mat::zeros(hist_h, hist_w, CV_8UC3);
//	normalize(hist, hist, 1, 0, NORM_INF, -1, Mat());
//	for (int i = 1; i <= hist.rows; i++)
//	{
//		rectangle(histImage, Point(width * (i - 1), hist_h - 1),
//			Point(width * i - 1, hist_h - cvRound(20*hist_h * hist.at<float>(i - 1)) - 1),
//			Scalar(255, 255, 255), -1);
//	}
//	imshow(name, histImage);
//}

//#include <opencv2/opencv.hpp>
//#include <fstream>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//void draw_lines(Mat& image, vector<Point2f> pt1, vector<Point2f> pt2);
//vector<Scalar> color_lut; //��ɫ���ұ�
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	//��ȡ����ͼ��
//	VideoCapture capture("./images/vtest.avi");
//	Mat preFrame, preImg;
//	if (!capture.read(preFrame))
//	{
//		cout << "��ȷ����Ƶ�ļ��Ƿ���ȷ" << endl;
//		return -1;
//	}
//
//
//	//��ȡ��Ƶ�е�һ֡ͼ����Ϊǰһ֡ͼ�񣬲����лҶȱ仯
//	cvtColor(preFrame, preImg, COLOR_BGR2GRAY);
//
//	//�ǵ�����ز�������
//	vector<Point2f> Points;
//	double qualityLevel = 0.01;
//	int minDistance = 10;
//	int blockSize = 3;
//	bool useHarrisDetector = false;
//	double k = 0.04;
//	int Corners = 5000;
//	//�ǵ���
//	goodFeaturesToTrack(preImg, Points, Corners, qualityLevel, minDistance, Mat(), blockSize, useHarrisDetector, k);
//
//	//ϡ����������ز�������
//	vector<Point2f> prePts;	//ǰһ֡ͼ��ǵ�����
//	vector<Point2f> nextPts; //��ǰ֡ͼ��ǵ�����
//	vector<uchar> status;	//��⵽��״̬
//	vector<float> err;
//	TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, 0.01);
//	double derivlambda = 0.5;
//	int flags = 0;
//
//	//��ʼ״̬�Ľǵ�
//	vector<Point2f> initPoints;
//	initPoints.insert(initPoints.end(), Points.begin(), Points.end());
//
//	//ǰһ֡ͼ������Ľǵ�����
//	prePts.insert(prePts.end(), Points.begin(), Points.end());
//
//	while (true)
//	{
//		Mat nextframe, nextImg;
//		if (!capture.read(nextframe))
//		{
//			break;
//		}
//		imshow("nextframe", nextframe);
//
//		//��������
//		cvtColor(nextframe, nextImg, COLOR_BGR2GRAY);
//		calcOpticalFlowPyrLK(preImg, nextImg, prePts, nextPts, status, err,
//			Size(31, 31), 3, criteria, derivlambda, flags);
//
//		//�жϽǵ��Ƿ��ƶ���������ƶ���ɾ��
//		size_t i, k;
//		for (i = k = 0; i < nextPts.size(); i++)
//		{
//			//������״̬����
//			double dist = abs(prePts[i].x - nextPts[i].x) + abs(prePts[i].y - nextPts[i].y);
//			if (status[i] && dist > 2)
//			{
//				prePts[k] = prePts[i];
//				initPoints[k] = initPoints[i];
//				nextPts[k++] = nextPts[i];
//				circle(nextframe, nextPts[i], 3, Scalar(0, 255, 0), -1, -8);
//			}
//		}
//		//�����ƶ�����Ŀ
//		nextPts.resize(k);
//		prePts.resize(k);
//		initPoints.resize(k);
//
//		//�����ٹ켣
//		draw_lines(nextframe, initPoints, nextPts);
//		imshow("result", nextframe);
//
//		char c = waitKey(5);
//		if (c == 27)
//		{
//			break;
//		}
//
//		//���½ǵ������ǰһ֡ͼ��
//		std::swap(nextPts, prePts);
//		nextImg.copyTo(preImg);
//
//		//����ǵ���Ŀ����30�� �����¼��ǵ�
//		if (initPoints.size() < 30)
//		{
//			goodFeaturesToTrack(preImg, Points, Corners, qualityLevel,
//				minDistance, Mat(), blockSize, useHarrisDetector, k);
//			initPoints.insert(initPoints.end(), Points.begin(), Points.end());
//			prePts.insert(prePts.end(), Points.begin(), Points.end());
//			printf("total feature points: %d\n", prePts.size());
//		}
//
//	}
//
//	return 0;
//}
//
//void draw_lines(Mat& image, vector<Point2f> pt1, vector<Point2f> pt2)
//{
//	RNG rng(5000);
//	if (color_lut.size() < pt1.size())
//	{
//		for (size_t t = 0; t < pt1.size(); t++)
//		{
//			color_lut.push_back(Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)));
//		}
//	}
//	for (size_t t = 0; t < pt1.size(); t++)
//	{
//		line(image, pt1[t], pt2[t], color_lut[t], 2, 8, 0);
//	}
//}
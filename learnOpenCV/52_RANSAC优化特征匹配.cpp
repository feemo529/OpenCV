//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//void match_min(vector<DMatch> matches, vector<DMatch>& good_matches)
//{
//	//ͨ����������ɸѡƥ����
//	double min_dist = 10000, max_dist = 0;
//	for (int i = 0; i < matches.size(); i++)
//	{
//		double dist = matches[i].distance;
//		if (dist < min_dist)
//			min_dist = dist;
//		if (dist > max_dist)
//			max_dist = dist;
//	}
//	//�������ƥ������������������С��������
//	cout << "min_dist=" << min_dist << endl;
//	cout << "max_dist=" << max_dist << endl;
//
//	//����������ϴ��ƥ����ɾ��
//	for (int i = 0; i < matches.size(); i++)
//	{
//		if (matches[i].distance <= max(2 * min_dist, 20.0))
//		{
//			good_matches.push_back(matches[i]);
//		}
//	}
//}
//
////RANSAC�㷨ʵ��
//void ransac(vector<DMatch> matches, vector<KeyPoint> queryKeyPoint, vector<KeyPoint> trainKeyPoint, vector<DMatch>& matches_ransac)
//{
//	//���屣��ƥ��������
//	vector<Point2f> srcPoints(matches.size()), dstPoints(matches.size());
//	//����ӹؼ�������ȡ����ƥ���Ե�����
//	for (int i = 0; i < matches.size(); i++)
//	{
//		srcPoints[i] = queryKeyPoint[matches[i].queryIdx].pt;
//		dstPoints[i] = trainKeyPoint[matches[i].trainIdx].pt;
//	}
//	//ƥ���Խ���RANSAC����
//	vector<int> inliersMask(srcPoints.size());
//
//	findHomography(srcPoints, dstPoints, RANSAC, 5, inliersMask);
//	//�ֶ��ı���RANSAC���˺��ƥ����
//	for (int i = 0; i < inliersMask.size(); i++)
//	{
//		if (inliersMask[i])
//			matches_ransac.push_back(matches[i]);
//	}
//
//}
//
//void orb_features(Mat& gray, vector<KeyPoint>& keypoints, Mat& descriptions)
//{
//	Ptr<ORB> orb = ORB::create(1000, 1.2f);
//	orb->detect(gray, keypoints);
//	orb->compute(gray, keypoints, descriptions);
//}
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	Mat img1, img2;
//	img1 = imread("./images/box.png");
//	img2 = imread("./images/box_in_scene.png");
//
//	//��ȡORB������
//	vector<KeyPoint> Keypoints1, Keypoints2;
//	Mat descriptions1, descriptions2;
//
//	//��������ָ��ORB��������ȡ
//	orb_features(img1, Keypoints1, descriptions1);
//	orb_features(img2, Keypoints2, descriptions2);
//
//	//������ƥ��
//	vector<DMatch> matches, good_min, good_ransac; //������ƥ�����ı���
//	BFMatcher matcher(NORM_HAMMING); //����������ƥ����࣬ʹ�ú�������
//	matcher.match(descriptions1, descriptions2, matches);	//����������ƥ��
//	cout << "matches=" << matches.size() << endl; //ƥ��ɹ���������Ŀ
//
//
//	//��С��������
//	match_min(matches, good_min);
//	cout << "good_min=" << good_min.size() << endl;
//
//	//��ransac�㷨ɸѡƥ����
//	ransac(good_min, Keypoints1, Keypoints2, good_ransac);
//	cout << "good_matches.size=" << good_ransac.size() << endl;
//
//	//����ƥ����
//	Mat outimg, outimg1, outimg2;
//	drawMatches(img1, Keypoints1, img2, Keypoints2, matches, outimg);
//	drawMatches(img1, Keypoints1, img2, Keypoints2, good_min, outimg1);
//	drawMatches(img1, Keypoints1, img2, Keypoints2, good_ransac, outimg2);
//
//	imshow("δɸѡ���", outimg);
//	imshow("��С��������ɸѡ", outimg1);
//	imshow("ransacɸѡ", outimg2);
//
//
//	waitKey(0);	
//	return 0;
//}
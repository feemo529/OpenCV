//#include <opencv2/opencv.hpp>
//#include <fstream>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//using namespace cv::ml;
//using namespace cv::dnn;
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	Mat img = imread("./images/airplane.jpg");
//	if (img.empty())
//	{
//		cout << "could not load image...\n" << endl;
//		return -1;
//	}
//
//	//��ȡ������������
//	String typeListFile = "image_recognition/imagenet_comp_graph_label_strings.txt";
//	vector<String> typeList;
//	ifstream file(typeListFile);
//	if (!file.is_open())
//	{
//		printf("��ȷ�Ϸ������������Ƿ���ȷ");
//		return -1;
//	}
//	std::string type;
//	while (!file.eof())
//	{
//		//��ȡ����
//		getline(file, type);
//		if (type.length())
//			typeList.push_back(type);
//	}
//	file.close();
//
//	//��������
//	String tf_pb_file = "image_recognition/tensorflow_inception_graph.pb";
//	Net net = readNet(tf_pb_file);
//	if (net.empty())
//	{
//		cout << "��ȷ���Ƿ�����յ�ģ���ļ�" << endl;
//		return -1;
//	}
//
//	//������ͼ�����ݽ��д���
//	Mat blob = blobFromImage(img, 1.0f, Size(224, 224), Scalar(), true, false);
//
//	//����ͼ������Ԥ��
//	Mat prob;
//	net.setInput(blob, "input");
//	prob = net.forward("softmax2");
//
//	//�õ�����ܷ������
//	Mat probMat = prob.reshape(1, 1);
//	Point classNumber;
//	double classProb;	//��������
//	minMaxLoc(probMat, NULL, &classProb, NULL, &classNumber);
//
//	string typeName = typeList.at(classNumber.x).c_str();
//	cout << "ͼ�����������Ϊ��" << typeName << " ������Ϊ��" << classProb;
//
//	//�������
//	string str = typeName + " possibility:" + to_string(classProb);
//	putText(img, str, Point(50, 50), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(0, 0, 255), 2, 8);
//	imshow("ͼ���жϽ��", img);
//
//	waitKey(0);
//	system("pause");
//	return 0;
//}
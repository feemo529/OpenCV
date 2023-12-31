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
//	//读取分类种类名称
//	String typeListFile = "image_recognition/imagenet_comp_graph_label_strings.txt";
//	vector<String> typeList;
//	ifstream file(typeListFile);
//	if (!file.is_open())
//	{
//		printf("请确认分类种类名称是否正确");
//		return -1;
//	}
//	std::string type;
//	while (!file.eof())
//	{
//		//读取名称
//		getline(file, type);
//		if (type.length())
//			typeList.push_back(type);
//	}
//	file.close();
//
//	//加载网络
//	String tf_pb_file = "image_recognition/tensorflow_inception_graph.pb";
//	Net net = readNet(tf_pb_file);
//	if (net.empty())
//	{
//		cout << "请确认是否输入空的模型文件" << endl;
//		return -1;
//	}
//
//	//对输入图像数据进行处理
//	Mat blob = blobFromImage(img, 1.0f, Size(224, 224), Scalar(), true, false);
//
//	//进行图像种类预测
//	Mat prob;
//	net.setInput(blob, "input");
//	prob = net.forward("softmax2");
//
//	//得到最可能分类输出
//	Mat probMat = prob.reshape(1, 1);
//	Point classNumber;
//	double classProb;	//最大可能性
//	minMaxLoc(probMat, NULL, &classProb, NULL, &classNumber);
//
//	string typeName = typeList.at(classNumber.x).c_str();
//	cout << "图像中物体可能为：" << typeName << " 可能性为：" << classProb;
//
//	//检测内容
//	string str = typeName + " possibility:" + to_string(classProb);
//	putText(img, str, Point(50, 50), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(0, 0, 255), 2, 8);
//	imshow("图像判断结果", img);
//
//	waitKey(0);
//	system("pause");
//	return 0;
//}
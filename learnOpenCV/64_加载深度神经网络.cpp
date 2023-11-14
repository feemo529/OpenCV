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
//	system("color F0");
//	string model = "./images/bvlc_googlenet.caffemodel";
//	string config = "./images/bvlc_googlenet.prototxt";
//
//	//����ģ��
//	Net net = dnn::readNet(model, config);
//	if (net.empty())
//	{
//		cout << "��ȷ���Ƿ�����յ�ģ���ļ�" << endl;
//		return -1;
//	}
//
//	//��ȡ������Ϣ
//	vector<String> layerNames = net.getLayerNames();
//	for (int i = 0; i < layerNames.size(); i++)
//	{
//		//��ȡÿ�������ID
//		int ID = net.getLayerId(layerNames[i]);
//		//��ȡÿ���������Ϣ
//		Ptr<Layer> layer = net.getLayer(ID);
//		//���������Ϣ
//		cout << "���������" << ID << "  ��������ƣ�" << layerNames[i] << endl
//			<< "��������ͣ�" << layer->type.c_str() << endl;
//	}
//
//	system("pause");
//	return 0;
//}
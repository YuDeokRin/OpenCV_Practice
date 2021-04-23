#include <opencv2/opencv.hpp>
#include <time.h>
using namespace std;
using namespace cv;

/*
* Point_ Ŭ����
int main()
{
	Mat img(400, 500, CV_8UC3, Scalar(255, 255, 255));
	// CV_8UC3 << C3�� ä���� 3�� ��� �� C3�� ������
	//			   ä���� �ϳ���� ������ Scalar(B,R,G,A) <�ȿ�
	//			   1�� �ۿ� ���ڰ� ���� �ʴ´�.
	//			   Scalar Ŭ������ 4���� ������ҷ� �Ǿ��ִ� (B,R,G,A)  A: ����
	// �ȼ�ũ�� �� : 300 , �� 500

	Point_<int> pt1(100, 200); //Point2i =Point
	Point_<float> pt2(92.3f, 125.23f);

	circle(img, pt1, 3, Scalar(255, 0, 0), -1);
	circle(img, pt2, 3, Scalar(0, 255, 0), -1);


	Point pt8 = pt1 + (Point)pt2;
	circle(img, pt8, 3, Scalar(0, 0, 255), -1);

	cout << "pt8 = " << pt8 << endl;
	cout << "pt8's x = " << pt8.x << endl;
	imshow("IMG", img);
waitKey();
return 0;
}
*/

/*
* size_ Ŭ����
int main()
{
	Mat img(400, 500, CV_8UC3, Scalar(255, 255, 255));



	//Size_ ��ü ���� ������
	Size_<int> sz1(100, 200);
	Size2i sz2(200, 300);
	Size sz3(300, 300);
	Size2f sz4(0.3f, 0.1f);

	cout << "sz2's width = " << sz2.width << endl;
	cout << "sz2's area =" << sz2.area() << endl;
	cout << "sz2 = " << sz2 << endl;


	imshow("IMG", img);
	waitKey();
	return 0;
}

*/

/*
int main()
{
	Mat img(400, 500, CV_8UC3, Scalar(255, 255, 255));

	Rect_<int> rect1(10, 10, 30, 50);
	// rect1 ( x, y, width, height)
	Point pt(20, 30);

	Rect rect4 = rect1 + pt;  // (20,30) ��ŭ �����̵�

	rectangle(img, rect1, Scalar(0, 0, 0), 1);
	rectangle(img, rect4, Scalar(0, 0, 255), 1);

	cout << "rect4's width =" << rect4.width << endl;
	cout << "rect4's tl() =" << rect4.tl() << endl;
	cout << "recr4's br() = " << rect4.br() << endl;
	cout << "rect4's tl().x = " << rect4.tl().x << endl;
	imshow("IMG", img);
	waitKey();
	return 0;
}
*/

/*
//vec Ŭ����
int main()
{
	Mat img(400, 500, CV_8UC3, Scalar(255, 255, 255));



	imshow("IMG", img);
	waitKey();
	return 0;
}
*/

/*
//Scalar_ Ŭ����
int main()
{
	Mat img(400, 500, CV_8UC3, Scalar(255, 255, 255));

	//�⺻ ���� ���
	Scalar_<uchar> red(0, 0, 255);      // uchar -> unsigned char
	Scalar_<int> blue(255, 0, 0);
	Scalar_<double> color1(500);
	Scalar_<float> color2(100.f, 200.f, 125.9f);

	Vec3d green(0, 0, 300.5);
	Scalar green1 = color1 + (Scalar)green;		// ����� ����ȯ �ʿ�
	Scalar green2 = color2 + (Scalar_<float>)green;		// ������ ����ȯ �߻�

	cout << "blue = " << blue[0] << ", " << blue[1];
	cout << ", " << blue[1] << ", " << blue[2] << endl;
	cout << "red = " << red << endl;
	cout << "green = " << green << endl << endl;
	cout << "green1= " << green1 << endl;
	cout << "green2 = " << green2 << endl;


	imshow("IMG", img);
	waitKey();
	return 0;
}
*/


//RotatedRect Ŭ���� 
/*
int main()
{
	Mat img(400, 500, CV_8UC3, Scalar(255, 255, 255));
	Point2f center(250, 150), pts[4];
	Size2f size(300, 100);
	RotatedRect rot_rect(center, size, 20);

	Rect bound_rect = rot_rect.boundingRect();
	rectangle(img, bound_rect, Scalar(0,0,0), 1);    //�۱� �簢��
	circle(img, rot_rect.center, 1, Scalar(0,0,0), 2);

	rot_rect.points(pts);   // ȸ���簢�� ������ ��ȯ
	// ȸ���� �簢������
	for (int i = 0; i < 4 ; i++)
	{
		circle(img, pts[i], 4, Scalar(0,0,255), 1);				// ������ ǥ��,  �β� : 1
		line(img, pts[i], pts[(i + 1) % 4], Scalar(0,0,0), 2); // ������ �մ� ����,   �α� : 2
	}


	imshow("IMG", img);
	waitKey();
	return 0;
}

*/




//����(std::vector)Ŭ���� 

//vector Ŭ������ �ʱ�ȭ 
/*
int main()
{
//	Mat img = imread("", IMREAD_COLOR);
	//Point = Point2i
	vector<Point> v1;		//Point Ÿ���� ���� vector Ŭ����  v1
	v1.push_back(Point(10, 20)); //push_back ������ �������� ���� �߰�
	v1.push_back(Point(20, 30));
	vector<float> v2(3, 9.25);
	Size arr_size[] = { Size(2,2), Size(3,3), Size(4,4) };
	//vector<Size> v3(arr_size, arr_size + sizeof(arr_size) / sizeof(Size));

	vector<Size> v3(arr_size, arr_size + 3);


	cout << "v1 =  " << (Mat)v1 << endl;
	cout << "v2 = " << ((Mat)v2).reshape(1, 1) << endl;
	cout << "v3 = " << ((Mat)v3).reshape(1, 1) << endl;

}
*/

//vector Ŭ������ ���
/*
int main()
{
	//	Mat img = imread("", IMREAD_COLOR);
	int arr[] = { 10, 20, 30, 40, 50 };
	vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
	v1.insert(v1.begin() + 2, 100);


	cout << "v1's capacity = " << v1.capacity() << endl;
	cout << "v1 = " << ((Mat)v1).reshape(1, 1) << endl;
	cout << "v1's size() = " << v1.size() << endl;

	waitKey();
	return 0;

}

*/



//vector Ŭ���� �޸� �Ҵ� 
/*
int main()
{
	vector<double> v1, v2;
	v1.reserve(10000000);

	double start_time = clock();
	for (int i = 0; i < v1.capacity(); i++) {
		v1.push_back(i);
	}

	printf("reserve() ��� %5.2f ms\n", (clock() - start_time));

	start_time = clock();
	for (int i = 0; i < v1.capacity(); i++){
		v2.push_back(i);
	}

	printf("reserve() �̻�� %5.2f ms\n", (clock() - start_time));


	waitKey();
	return 0;

}
*/






/*
//����.1
int main()
{
	Mat img(300, 500, CV_8UC1, Scalar(255));

	Rect_<int> rect1(30, 40, 100, 200);
	// rect1 ( x, y, width, height)
	Point pt(10, 10);

	Rect rect4 = rect1 + pt;  // (10,10) ��ŭ �����̵�


	rectangle(img, rect1, Scalar(0, 0, 0), 1);
	rectangle(img, rect4, Scalar(0, 0, 255), 1);

	cout << "rect4's width =" << rect4.width << endl;
	cout << "rect4's tl() =" << rect4.tl() << endl;
	cout << "recr4's br() = " << rect4.br() << endl;
	cout << "rect4's tl().x = " << rect4.tl().x << endl;
	imshow("IMG", img);
	waitKey();
	return 0;
}
*/

/*
int main()
{
	Mat img(400, 500, CV_8UC1, Scalar(255, 255, 255));
	Point2f center(250, 150), pts[4];

	float angle = 10;

	Size2f size(300, 100);
	RotatedRect rot_rect(center, size, 20);



	Rect bound_rect = rot_rect.boundingRect();
	rectangle(img, bound_rect, Scalar(0, 0, 0), 1);    //�۱� �簢��
	circle(img, rot_rect.center, 1, Scalar(0, 0, 0), 2);

	rot_rect.points(pts);   // ȸ���簢�� ������ ��ȯ
	// ȸ���� �簢������
	for (int i = 0; i < 4; i++)
	{
		circle(img, pts[i], 4, Scalar(0, 0, 255), 1);				// ������ ǥ��,  �β� : 1
		line(img, pts[i], pts[(i + 1) % 4], Scalar(0, 0, 0), 2); // ������ �մ� ����,   �β� : 2
	}


	imshow("IMG", img);
	waitKey();
	return 0;
}
*/


//P.111 Range Ŭ���� ���1 - range_test1.cpp
int main()
{
	Range r1(0, 3), r2(3, 7);
	int data[] = {
		10,11,12,13,14,15,16,
		20,21,22,23,24,25,26,
		30,31,32,33,34,35,36,
		40,41,42,43,44,45,46
	};
	Mat m1, m2;
	m1 = Mat(4, 7, CV_32S, data);
	m2 = m1(r1, r2);

	Size size;
	Point pt;

	m2.locateROI(size, pt); // m2�� �θ�matrix�� m1 
//	m2.setTo(100);

	cout << "m2's parent size = " << size << endl;
	cout << "roi's starting point = " << pt << endl;
	cout << "roi's size " << m2.size << endl;

	cout << "m1 = " << m1 << endl;
	cout << "m2 = " << m2 << endl;
	cout << "m1.row(3) = " << m1.row(3) << endl;

}


#include <iostream>
#include <ctime>
using namespace std;

//eigen库引入
#include <eigen3/Eigen/Core>
//稠密矩阵代数运算(逆 特征值等)
#include <eigen3/Eigen/Dense>

#define MATRIX_SIZE 50

int main(){

	//Eigen以矩阵为基本数据单元。它是一个模板类。他的前三个参数为  数据类型  行  列
	//声明一个2X3的float矩阵
	Eigen::Matrix<float , 2 , 3> matrix_2_3;
	
	//同时Eigen通过typedef提供了许多内置类型，不过底层都是Eigen::Matrix
	//例如Eigen::Vector3d实质上是Eigen::Matrix<double , 3 , 1 >
	Eigen::Vector3d v_3d;
	
	//还有Matrix3d实质上是Eigen::Matrix<double , 3 , 3>
	Eigen::Matrix3d matrix_3_3 = Eigen::Matrix3d::Zero();//初始化为0
	
	//如果不确定矩阵大小 可以使用动态矩阵
	Eigen::Matrix<double , Eigen::Dynamic , Eigen::Dynamic> matrix_dynamic;

	//更简单的
	//Eigen::MatrixXd matrix_x_x;
	

	//---------------------------------------------------------------------------------

	//矩阵操作
	//输入
	matrix_2_3 << 1 ,2 ,3 ,4 ,5 ,6;
	//输出
//	cout << matrix_2_3 << endl;
	
	//使用（）访问矩阵中的数据
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			
//			cout <<"矩阵" << i << "行" << j << "列的数据： "<< matrix_2_3(i , j) << endl;
		}
	}
	
	v_3d << 1 , 2 ,3;
//	cout << v_3d << endl;		

	//矩阵和向量相乘（实际上仍然是矩阵和矩阵）
	//但是并不能混合两种不同类型的矩阵，例如这样是错的
	//Eigen::Matrix<double , 2 ,1> result_wrong_type= matrix_2_3 * v_3d;

	//正确的方式 应该显示转换matrix_2_3的类型 然后再计算
	Eigen::Matrix<double , 2 , 1> result = matrix_2_3.cast<double>() * v_3d;
//	cout << result << endl;

	//注意不能搞错矩阵的维度
	//例如下面列子
//	Eigen::Matrix<double , 2 , 3> result_wrong_type = matrix_2_3.cast<double>() * v_3d;
	
	//矩阵运算
	//四则运算直接使用对应的运算符
	



	return 0;
}

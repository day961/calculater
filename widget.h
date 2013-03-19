#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_num1_clicked();
    void on_num2_clicked();
    void on_num3_clicked();
    void on_num4_clicked();
    void on_num5_clicked();
    void on_num6_clicked();
    void on_num7_clicked();
    void on_num8_clicked();
    void on_num9_clicked();
    void on_num0_clicked();
    void on_clr_clicked();
    void on_add_clicked();
    void on_equ_clicked();
    void on_sub_clicked();
    void on_del_clicked();
    void on_mul_clicked();
    void on_div_clicked();
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    void state_init();//计算器状态初始化函数
    void cul_result(void);//计算结果函数
    void display(double num);//lineEdit显示函数
    void pretrans(char key,char select); ////////未完成
    void trans(char key);//讲按键输入转换成数值
    bool state; //判断是第一次输入还是第二次输入  true为第一次 false为第二次
    bool equ_state;//判断等号状态 true为等号按过 false为等号未按过
    enum sign {ADD,SUB,MUL,DIV,NO}cur_sign;//标记当前运算状态
    double first;  //存放第一次输入的数值
    double second; //存放第二次输入的数值
    double result; //存放计算结果
};

#endif // WIDGET_H

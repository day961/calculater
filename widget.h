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
    void state_init();//������״̬��ʼ������
    void cul_result(void);//����������
    void display(double num);//lineEdit��ʾ����
    void pretrans(char key,char select); ////////δ���
    void trans(char key);//����������ת������ֵ
    bool state; //�ж��ǵ�һ�����뻹�ǵڶ�������  trueΪ��һ�� falseΪ�ڶ���
    bool equ_state;//�жϵȺ�״̬ trueΪ�ȺŰ��� falseΪ�Ⱥ�δ����
    enum sign {ADD,SUB,MUL,DIV,NO}cur_sign;//��ǵ�ǰ����״̬
    double first;  //��ŵ�һ���������ֵ
    double second; //��ŵڶ����������ֵ
    double result; //��ż�����
};

#endif // WIDGET_H

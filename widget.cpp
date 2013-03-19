#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setAlignment(Qt::AlignRight);
    state_init();
}

Widget::~Widget()
{
    delete ui;
}

/****������״̬��ʼ������*******/
void Widget::state_init()
{
    state = true;
    equ_state = false;
    cur_sign = NO;
    first = 0;
    second = 0;
    result = 0;
}

/***����������******/
void Widget::cul_result(void)
{
    switch(cur_sign)
    {
        case ADD:result=first+second;break;//�ӵ����
        case SUB:result=first-second;break;//�������
        case MUL:result=first*second;break;
        case DIV:result=(first*1.00)/second;break;
    }
        display(result);//��ʾ���
}

/****lineEdit��ʾ����*********/
void Widget::display(double num)
{
    ui->lineEdit->setText(QString::number(num));
}

void Widget::pretrans(char key,char select)
{
    if(key=='d')//�������ɾ����
    {
        first = first / 10;
        display(first);
    }
    else
    {
        first  = first  *10 + (double)key;
        display(first);//��ʾ��lineEdit��
    }
}

/****���㰴�������ֵ ����ʾ��lineEdit*****/
void Widget::trans(char key)
{
    //�жϵ��ڰ���״̬ ���Ϊture˵�����ΰ�������ʹһ���µļ������
    //���ʼ��������״̬
    if(equ_state == true)
    {
        state_init();
        equ_state = false;
    }

    if(state == true)
    {
        if(key=='d')//�������ɾ����
        {
            first = first / 10;
            display(first);
        }
        if(key=='N')//�����������
        {
            first = first * -1;
            display(first);
        }
        else
        {
            first  = first  *10 + (double)key;
            display(first);//��ʾ��lineEdit��
        }
    }
    else
    {
        if(key=='d')//�������ɾ����
        {
            second = second / 10;
            display(second);
        }
        if(key=='N')//�����������
        {
            first = first * -1;
            display(first);
        }
        else
        {
            second = second *10 + (double)key;
            display(second);//��ʾ
        }
    }
}

/*******���ּ���ť����*******/
void Widget::on_num1_clicked()//���� 1
{
    trans(1);
}
void Widget::on_num2_clicked()//���� 2
{
    trans(2);
}
void Widget::on_num3_clicked()//���� 3
{
    trans(3);
}
void Widget::on_num4_clicked()//���� 4
{
    trans(4);
}
void Widget::on_num5_clicked()//���� 5
{
    trans(5);
}
void Widget::on_num6_clicked()//���� 6
{
    trans(6);
}
void Widget::on_num7_clicked()//���� 7
{
    trans(7);
}
void Widget::on_num8_clicked()//���� 8
{
    trans(8);
}
void Widget::on_num9_clicked()//���� 9
{
    trans(9);
}
void Widget::on_num0_clicked()//���� 0
{
    trans(0);
}
void Widget::on_pushButton_clicked()
{
    trans('N');
}
/****clr��հ���*******/
void Widget::on_clr_clicked()
{
    ui->lineEdit->setText("0");
    state_init();
}

/****�ӺŰ���*********/
void Widget::on_add_clicked()
{
    equ_state = false;//���õȺ�״̬
    if(state == false)//�����ӵ����
    {
        cul_result();
        first = result;
        second = 0;
    }
    else
    {
        state = false;
    }
    cur_sign = ADD;//���μ���Ϊ�ӷ�
}

/****���Ű���*********/
void Widget::on_sub_clicked()
{
    equ_state = false;//���õȺ�״̬
    if(state == false)//�����������
    {
        cul_result();
        first = result;
        second = 0;
    }
    else
    {
        state = false;
    }
    cur_sign = SUB;//���μ���Ϊ����
}

/****�ȺŰ���*********/
void Widget::on_equ_clicked()
{
    if(equ_state == true)//�������Ⱥš���������������
        first = result;
    cul_result();
    equ_state = true;
    //cur_sign = NO;
}

void Widget::on_del_clicked()
{
    trans('d');
}

/****�˺Ű���*********/
void Widget::on_mul_clicked()
{
    equ_state = false;//���õȺ�״̬
    if(state == false)//�����˵����
    {
        cul_result();
        first = result;
        second = 0;
    }
    else
    {
        state = false;
    }
    cur_sign = MUL;//���μ���Ϊ�˷�
}

/****���Ű���*********/
void Widget::on_div_clicked()
{
    equ_state = false;//���õȺ�״̬
    if(state == false)//�����������
    {
        cul_result();
        first = result;
        second = 0;
    }
    else
    {
        state = false;
    }
    cur_sign = DIV;//���μ���Ϊ����
}



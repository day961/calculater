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

/****计算器状态初始化函数*******/
void Widget::state_init()
{
    state = true;
    equ_state = false;
    cur_sign = NO;
    first = 0;
    second = 0;
    result = 0;
}

/***计算结果函数******/
void Widget::cul_result(void)
{
    switch(cur_sign)
    {
        case ADD:result=first+second;break;//加的情况
        case SUB:result=first-second;break;//减的情况
        case MUL:result=first*second;break;
        case DIV:result=(first*1.00)/second;break;
    }
        display(result);//显示结果
}

/****lineEdit显示函数*********/
void Widget::display(double num)
{
    ui->lineEdit->setText(QString::number(num));
}

void Widget::pretrans(char key,char select)
{
    if(key=='d')//如果按下删除键
    {
        first = first / 10;
        display(first);
    }
    else
    {
        first  = first  *10 + (double)key;
        display(first);//显示到lineEdit上
    }
}

/****计算按键后的数值 并显示在lineEdit*****/
void Widget::trans(char key)
{
    //判断等于按键状态 如果为ture说明本次按键操作使一次新的计算操作
    //则初始化计算器状态
    if(equ_state == true)
    {
        state_init();
        equ_state = false;
    }

    if(state == true)
    {
        if(key=='d')//如果按下删除键
        {
            first = first / 10;
            display(first);
        }
        if(key=='N')//如果按下正负
        {
            first = first * -1;
            display(first);
        }
        else
        {
            first  = first  *10 + (double)key;
            display(first);//显示到lineEdit上
        }
    }
    else
    {
        if(key=='d')//如果按下删除键
        {
            second = second / 10;
            display(second);
        }
        if(key=='N')//如果按下正负
        {
            first = first * -1;
            display(first);
        }
        else
        {
            second = second *10 + (double)key;
            display(second);//显示
        }
    }
}

/*******数字键按钮功能*******/
void Widget::on_num1_clicked()//按键 1
{
    trans(1);
}
void Widget::on_num2_clicked()//按键 2
{
    trans(2);
}
void Widget::on_num3_clicked()//按键 3
{
    trans(3);
}
void Widget::on_num4_clicked()//按键 4
{
    trans(4);
}
void Widget::on_num5_clicked()//按键 5
{
    trans(5);
}
void Widget::on_num6_clicked()//按键 6
{
    trans(6);
}
void Widget::on_num7_clicked()//按键 7
{
    trans(7);
}
void Widget::on_num8_clicked()//按键 8
{
    trans(8);
}
void Widget::on_num9_clicked()//按键 9
{
    trans(9);
}
void Widget::on_num0_clicked()//按键 0
{
    trans(0);
}
void Widget::on_pushButton_clicked()
{
    trans('N');
}
/****clr清空按键*******/
void Widget::on_clr_clicked()
{
    ui->lineEdit->setText("0");
    state_init();
}

/****加号按键*********/
void Widget::on_add_clicked()
{
    equ_state = false;//重置等号状态
    if(state == false)//连续加的情况
    {
        cul_result();
        first = result;
        second = 0;
    }
    else
    {
        state = false;
    }
    cur_sign = ADD;//本次计算为加法
}

/****减号按键*********/
void Widget::on_sub_clicked()
{
    equ_state = false;//重置等号状态
    if(state == false)//连续减的情况
    {
        cul_result();
        first = result;
        second = 0;
    }
    else
    {
        state = false;
    }
    cur_sign = SUB;//本次计算为减法
}

/****等号按键*********/
void Widget::on_equ_clicked()
{
    if(equ_state == true)//连续按等号——连续计算的情况
        first = result;
    cul_result();
    equ_state = true;
    //cur_sign = NO;
}

void Widget::on_del_clicked()
{
    trans('d');
}

/****乘号按键*********/
void Widget::on_mul_clicked()
{
    equ_state = false;//重置等号状态
    if(state == false)//连续乘的情况
    {
        cul_result();
        first = result;
        second = 0;
    }
    else
    {
        state = false;
    }
    cur_sign = MUL;//本次计算为乘法
}

/****除号按键*********/
void Widget::on_div_clicked()
{
    equ_state = false;//重置等号状态
    if(state == false)//连续除的情况
    {
        cul_result();
        first = result;
        second = 0;
    }
    else
    {
        state = false;
    }
    cur_sign = DIV;//本次计算为除法
}



#pragma once

//c++�У��Խṹ���������չ�������ڽṹ����д����
//����Ȩ�ޣ��Խṹ��/���е����ݻ����ķ��ʼ�������
//1. public: ����Ȩ�ޣ�����������ʣ�������⣩
//2. protected: ����Ȩ�ޣ� ��̳��йأ������ƶ��ӿ��Է��ʣ�
//3. private: ˽��Ȩ�ޣ��Լ���������Է���

// �ṹ����������� Ĭ�ϵķ���Ȩ�޲�ͬ
// 1. �ṹ�壺Ĭ�Ϲ��� public
// 2. �� �� Ĭ��˽�� private
// ͨ������˽�У����ֳ�Ա�������У��ӿں�����
// ���ڷ���Ȩ�޵ļ���Ǳ����ڶ�����������

// ��Ĵ�С = ��ṹ���Сһ�����ṹ��ĵĶ��뷽ʽ������ʱ��
// ��Ա������ַ��һ���ģ���ʾͬһ����Ķ���ĳ�Ա�����ǹ��õ�
//��1�������Ƕ����ġ�
//��2����Ա�����ǹ��õġ�

// ��Ա��������ʱ��͵͵�Ĵ���thisָ�룬ͨ���Ĵ���ecx���ݣ����ִ��ݷ�ʽ��֮Ϊthiscall

// ��Ա����ָ��Ķ��壺
// 1. vc6: ����.��Ա������ cl1.SetTime��������
// 2. vs: ����::��Ա������ &tagClock::SetTime
// ��Ա����ָ���ʹ�ã�
// ������ã�(cl1.*pfn_class)(1, 2, 3);
// ����ָ����ã�(pCL->*pfn_class)(1, 2, 3);

class tagClock {

private:
    //����
    int nHour;
    int nMinute;
    int nSecond;

public:
    //��Ϊ,��������
    int __stdcall SetTime(int nH, int nM, int nS);
};
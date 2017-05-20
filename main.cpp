#include <string>
#include <iostream>

using namespace std;
class B;
class A{
public:
    A(){}
    void testA(){cout<<"test in A"<<endl;hello();}
protected:
    virtual void hello(){cout<<"hello in A"<<endl;}
};

class B:public A{
public:
    B(){}

    void hello(){cout<<"hello in B"<<endl;}

private:
    void ttß(){ return hello();}
    void world(){hello();cout<<"hello in B"<<endl;}
};

int main(void)
{
    B *b = new B();
    A *a =(A* )b;
    b->testA();
    a->testA();
    return 0;
}
//
//template <typename T>
//class CMessageProcess
//{
//public:
//    typedef void (T::*PointerToMemberFunc)();
//    CMessageProcess()
//    {}
//
//    ~CMessageProcess()
//    {}
//
//    void ProcessMessage()
//    {
//        PointerToMemberFunc msgProcFunc = GetMsgProcFunc();
//        if (msgProcFunc)
//        {
//            (((T*)this)->*msgProcFunc)();
//        }
//    }
//
//protected:
//    virtual void ProcessUnexpectedMessage() {}
//
//private:
//    inline PointerToMemberFunc GetMsgProcFunc()
//    {
//        cout<<"GetMsgProcFunc called."<<endl;
//        return &ProcessUnexpectedMessage;
//    }
//};
//
//class CPuschReceiverMasterInterface : public CMessageProcess<CPuschReceiverMasterInterface>
//{
//public:
//    CPuschReceiverMasterInterface()
//    {
//    }
//
//    virtual ~CPuschReceiverMasterInterface()
//    {
//
//    }
//    static CPuschReceiverMasterInterface  *s_puschReceiverMasterInterface;
//    static CPuschReceiverMasterInterface *GetInstance()
//    {
//        if (nullptr == s_puschReceiverMasterInterface)
//        {
//            s_puschReceiverMasterInterface = new CPuschReceiverMasterInterface();
//        }
//        return s_puschReceiverMasterInterface;
//    }
//
//protected:
//    void ProcessUnexpectedMessage(){
//        cout<<"ProcessUnexpectedMessage in master called."<<endl;
//    }
//
//};
//CPuschReceiverMasterInterface  *CPuschReceiverMasterInterface::s_puschReceiverMasterInterface = nullptr;
//int main(void)
//{
//    CPuschReceiverMasterInterface *m = CPuschReceiverMasterInterface::GetInstance();
//    m->ProcessMessage();
//    return 0;
//}


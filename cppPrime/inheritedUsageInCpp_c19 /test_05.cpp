/*************************************************************************
> File Name: test_05.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月04日 星期六 22时13分17秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

namespace std{

    class logic_error : public exception{

    public:
        explicit logic_error(const string& what_srg);
    };

    class invalid_argument : public logic_error{

    public:
        explicit invalid_argument(const string& what_arg);
    };

    class out_of_range : public logic_error{

    public:
        explicit out_of_range(const string& what_arg);
    };

    class length_error : public logic_error{

    public:
        explicit length_error(const string& what_arg);
    };

    class domain_error : public logic_error{

    public:
        explicit domain_error(const string& what_arg);
    };
}

namespace std{

    class runtime_error : public exception{

    public:
        explicit runtime_error(const string& what_arg);
    };

    class range_error : public runtime_error{

    public:
        explicit range_error(const string& what_arg);
    };

    class overflow_error : public runtime_error{

    public:
        explicit overflow_error(const string& what_arg);
    };

    class underflow_error : public runtime_error{

    public:
        explicit underflow_error(const string& what_arg);
    };
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:43:30 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 10:11:19 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

class Entity{
    public :
    Entity(){std::cout<<"default constructor created\n";}
    ~Entity(){std::cout<<"destructor called\n";}
};

class wrapper{
    private:
    Entity *e_ptr;
    std::string name;
    public:
    wrapper(){std::cout<<"default constructor created for wrapper\n";}
    wrapper(Entity *e) : e_ptr(e){std::cout<<"param const for wrapper\n";}
    ~wrapper(){std::cout <<"from warpper des\n";delete e_ptr;}
};
class att{
    private:
    std::string name;
    int number;
    public:
    att(){std::cout<<"default const called\n";}
    att(std::string n, int nb):name(n),number(nb){std::cout <<"param const called\n";}
    att(const att&);
    att &operator=(const att &);
    ~att(){std::cout<<"dest called\n";}
    att& rt_att();
};

att::att(const att& cp_at) :name(cp_at.name),number(cp_at.number){
    std::cout << "copy const called\n"<<std::endl;
}

att& att::operator=(const att& cop){
    name  = cop.name;
    number = cop.number;
    std::cout<<"assignemt worked\n";
    return (*this);
}

att& att::rt_att(){
    std::cout << "rt const \n"<<name<<std::endl;
    return (*this);
}

void p_o (int p){
    std::cout<<p<<std::endl;
}

class sp{
    public:
    std::string name;
    int number;
    public:
    // static std::string sp::*data_name(){return &sp::name;}
    int func(){return 50;}
    int func2(){return 60;}
    sp(){std::cout<<"default constructor created for wrapper\n";}
    sp(std::string n, int nb) : name(n) , number(nb){}
    sp(const sp&);
    sp &operator=(const sp &);
    ~sp(){}
};

// std::string sp::*data_name(){
//     return &sp::name;
// }

sp::sp(const sp& cp): name(cp.name) , number(cp.number){}

sp& sp::operator=(const sp& p){
    name = p.name;
    number = p.number;
    return (*this);
}

std::ostream &operator<<(std::ostream &os , const sp &ob){
    
 os << ob.name << " " << ob.number;
 return os;
}

std::istream &operator>>(std::istream &is,sp &ob){
    is >> ob.name >> ob.number;
    if (!is)
        ob = sp();
    return is;
}


sp operator+(const sp &ob1,const sp &ob2){
    sp sum = ob1;
    sum.number = sum.number + ob2.number;
    return (sum);
}

sp operator*(const sp &ob1, const sp &ob2){
    sp mul = ob1;
    mul.number = mul.number * ob2.number;
    return (mul);
}

int b(){std::cout<<"je";return 0;}


class cl1{
    public:
    std::string name;
    int nb;
    public:
    cl1(){}
    cl1(std::string n, int nb):name(n),nb(nb){}
    bool operator==(const cl1& ob1){
    if ((*this).name == ob1.name)
    return true;
    return false;
    }
};

class cl2{
    public:
    std::string name;
    int nb;
    public:
    cl2(){}
    cl2(std::string n, int nb):name(n),nb(nb){}
    bool operator==(const cl2& ob1){
    if ((*this).name == ob1.name)
    return true;
    return false;
    }
};

class k{
    public:
    k(){std::cout<<"default constructor created\n";}
    ~k(){std::cout<<"destructor called\n";}
};
class l{
    public:
    k *d;
    public:
    l(){std::cout <<"df const \n";}
    l(k*m):d(m){std::cout<<"pr const \n";}
   ~l(){std::cout <<"from l des\n";delete d;}
};

int main()
{
    // Entity *e = new Entity();delete e;
    // wrapper e = new Entity();
    l o = new k();
    // std::ifstream in("file1");
    // std::ofstream  os;
    // std::stringstream ss;
    // os.open("file2");
    // ss << "ss";
    // cl1 k1("hello",20);
    // cl1 k2("hello",20);
    // if (k1 == k2){
    //     std::cout<<"equal\n";
    // }
    // int (*p)(void) = b;
    // p();
    // os << ss.str();
    // sp ob("hello",29);
    // sp *op;
    // sp op("p" , 22);
    // sp op2("p2",66);
    // std::string sp::*hold_name = &sp::name;
    // int (sp::*nm[])(void) = {&sp::func,&sp::func2};
    // std::cout<<ob.*hold_name;
    // std::cout<<(ob.*nm[1])();
    // sp cop = op * op2;
    // std::cout << cop;
    // att ob(op);
    // std::cin >> op;
    // std::cin >>op2;
    // std::cout << op + op2;
    // op = ob;
    // std::ifstream in ("file");
    // std::stringstream ss;
    // ss << in.rdbuf();
    // std::string s;
    // ss >> s;
    // std::cout<<s<<std::endl;
    // op = &ob;
    //std::string sp::*n = &sp::name;
    // std::string sp::*n = sp::data_name();
    // int (sp::*kl)(void) = &sp::func;
    // void (*s)(int) = p_o;
    // s(10);
    // std::cout<<(ob.*kl)();
    // int (sp::*m[])(void) = {&sp::func,&sp::func2};
    // ob.*n = "l";
    // std::cout << ob.*n << std::endl;
    // std::cout<<(ob.*m[1])()<<std::endl;
    // void (*p)(int) = p_o;
    // p(9);
    // void (&l)(int) = p_o;
    // l(8);
    // void (*func_arr[])(int) = {p,l};
    // func_arr[0](99);
    // att a("name",10);
    // att p = a.rt_att();
    // p.name = "ch";
    // std::cout<<a.name<<std::endl;
}
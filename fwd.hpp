#include <type_traits>
struct FWD {
    float value;
    float derivative;
};
template<class F>
struct foward_impl {

};
template<class Ret, class...Args>
struct forward_impl<Ret(*)(Args...)>
{
    static Ret impl(Args&&...args) {
        
    }
};

template<class F>
auto forward(F&& f) {
    return forward_impl<F>::impl(f);
}


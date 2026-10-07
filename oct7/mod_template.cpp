/// Author: Mazed Hossain Parag (mhparag25@gmail.com)

#ifdef DeBuG
#include "debug.h"
#else
#include <bits/stdc++.h>
#define dbg(...)
#endif

using namespace std;
typedef long long int ll;
#define nl "\n"
#define sp " "
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define pii pair<int,int>

// MOD must be prime for division to work
template<ll MOD>
class ModNum {
    ll val;

public:
    ModNum (ll val_ = 0) : val(val_ % MOD) {}
    operator ll() const { return val; }

    ModNum pow (ll p) const {
        ModNum res = 1;
        for (ModNum base = val; p > 0; p >>= 1, base *= base)
            if (p & 1ll)
                res *= base;
        return res;
    }

    ModNum inverse () const {
        static_assert (MOD >= 2);
        assert (val != 0);

        return pow(MOD - 2);
    }

    ModNum operator+(const ModNum& other) const { return (val + other.val) % MOD; }
    ModNum operator-(const ModNum& other) const { return (val + MOD - other.val) % MOD; }
    ModNum operator*(const ModNum& other) const { return (val * other.val) % MOD; }
    ModNum operator/(const ModNum& other) const { return (*this) * other.inverse(); }

    ModNum& operator+=(const ModNum& other) { return *this = *this + other; }
    ModNum& operator-=(const ModNum& other) { return *this = *this - other; }
    ModNum& operator*=(const ModNum& other) { return *this = *this * other; }
    ModNum& operator/=(const ModNum& other) { return *this = *this / other; }

    bool operator==(const ModNum& other) const { return val == other.val; }


    friend ModNum operator+(ll a, const ModNum& b) { return ModNum(a) + b; }
    friend ModNum operator-(ll a, const ModNum& b) { return ModNum(a) - b; }
    friend ModNum operator*(ll a, const ModNum& b) { return ModNum(a) * b; }
    friend ModNum operator/(ll a, const ModNum& b) { return ModNum(a) / b; }

    friend bool operator==(ll a, const ModNum& b) { return ModNum(a) == b; }

    friend ostream& operator<<(ostream& os, const ModNum& num) { return os << num.val; }
    friend istream& operator>>(istream& is, ModNum& num) { return is >> num.val; }
};

const int P = 7; // Set the Prime
using mint = ModNum<P>;

void testModNum () {
    mint x = 10;
    mint y = 2;
    const auto z = mint(10);
    cout<<x/y<<nl;
    cout<<z<<nl;
}

int main(){
    ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
    testModNum();
    return 0;
}

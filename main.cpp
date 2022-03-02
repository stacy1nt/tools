#include <iostream>
using namespace std;

class Tool{
protected:
    int m_strength;
    char m_type;
public:
    Tool (int strength, char type){
        m_strength = strength;
        m_type = type;
    }
    void setStrength (int tmp_strength){
        m_strength = tmp_strength;
    }

    int get_m_strength() const {
        return m_strength;
    }
};

class Rock : public Tool{
public:
    Rock(int strength, char type, int r_strength, char r_type = 'r') : Tool(strength, type) {
        m_strength = r_strength;
        m_type = r_type;
    }

    bool fight (Tool tmp_tool){
        if (tmp_tool.get_m_strength() < m_strength){
            return true;
        } else return false;
    }
};

class Paper : public Tool{
public:
    Paper(int strength, char type, int p_strength, char p_type = 'p') : Tool(strength, type) {
        m_strength = p_strength;
        m_type = p_type;
    }
    bool fight (Tool tmp_tool){
        if (tmp_tool.get_m_strength() < m_strength){
            return true;
        } else return false;
    }
};

class Scissors : public Tool{
public:
    Scissors(int strength, char type, int s_strength, char s_type = 's') : Tool(strength, type) {
        m_strength = s_strength;
        m_type = s_type;
    }

    bool fight (Tool tmp_tool){
        if (tmp_tool.get_m_strength() < m_strength){
            return true;
        } else return false;
    }
};



int main() {
    Scissors s1(0, 0, 5);
    Paper p1(0, 0, 7);
    Rock r1(0, 0, 15);
    cout << s1.fight(p1) << p1.fight(s1) << endl;
    cout << p1.fight(r1) << r1.fight(p1) << endl;
    cout << r1.fight(s1) << s1.fight(r1) << endl;
    return 0;
}

/*
Losowanie liczb, nowy styl C++11 plus stary.

I. UZYCIE rand_func (stara styl):
    rnd::init();
    for(int i = 0; i < 5; i++)
        std::cout << rnd::rand_func(0, 5) << std::endl;

II. UZYCIE KLASY rand_tool (nowy styl):

    // argumenty: [skad], [dokad]
    rand_tool numbers(20, 30);
    for(int i = 0; i < 5; i++)
        std::cout << numbers.rand() << std::endl;

    std::cout << std::endl;

    // taki sam przedzial, ale da inne losowe liczby
    rand_tool month(20, 30);
    for(int i = 0; i < 5; i++)
        std::cout << month.rand() << std::endl;

@Marszal
*/

#ifndef RAND_TOOL_H
#define RAND_TOOL_H

#include <random>
#include <time.h>

/*
 * Stary styl. 3 proste funkcje.
 */

namespace rnd
{

// musi byc wywolna przed uzyciem funkcji losujących
inline void init()
{
    srand((unsigned int)time(NULL));
    //randf();
}

// losowanie w przedziale liczb calkowitych
inline int rand_func(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

// losowanie floatow w przedziale [0, 1]
inline float randf()
{
    return static_cast<float>(rand()) / RAND_MAX;
}

} // rnd

/*
 * Styl C++11
 */

// nowy obiekt == losowanie z innego przedzialu
class rand_tool
{
private:
    static uint32_t seed_counter;
    typedef std::mt19937 rand_gen;
    uint32_t own_seed;
    rand_gen own_gen;
    std::uniform_int_distribution<uint32_t> own_dist;
    //std::random_device rd; // zamiast time(NULL)
public:
    rand_tool(int from, int to)
        : own_dist(from, to)
    {
        seed_counter++;
        if(seed_counter > 100) seed_counter = 0;
        own_seed = (uint32_t)time(NULL) + seed_counter;
        own_gen.seed(own_seed);
    }

    inline int rand()
    {
        return own_dist(own_gen);
    }
};

#endif // RAND_TOOL_H

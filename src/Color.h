#ifndef EX1_COLOR_H
#define EX1_COLOR_H
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>


/**
 * this is an enum class representing different colors.
 */


enum class Color{
    Red, Blue, Green, Pink, White
};

namespace boost
{
    namespace serialization
    {

        template< class Archive >
        void save(Archive & ar, const Color & t, unsigned int version)
        {
            unsigned char c = (unsigned char) t;
            ar & c;
        }

        template< class Archive >
        void load(Archive & ar, Color & t, unsigned int version)
        {
            unsigned char c;
            ar & c;
            t = (Color) c;
        }

    } // namespace serialization
} // namespace boost

BOOST_SERIALIZATION_SPLIT_FREE(Color)

#endif //EX1_COLOR_H
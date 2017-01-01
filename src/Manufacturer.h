#ifndef EX1_MANUFACTURER_H
#define EX1_MANUFACTURER_H
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>


/**
 * enum class for types of car manufacturers.
 */

enum class Manufacturer{
    Honda, Subaro, Tesla, Fiat
};

namespace boost
{
    namespace serialization
    {

        template< class Archive >
        void save(Archive & ar, const Manufacturer & t, unsigned int version)
        {
            unsigned char c = (unsigned char) t;
            ar & c;
        }

        template< class Archive >
        void load(Archive & ar, Manufacturer & t, unsigned int version)
        {
            unsigned char c;
            ar & c;
            t = (Manufacturer) c;
        }

    } // namespace serialization
} // namespace boost

BOOST_SERIALIZATION_SPLIT_FREE(Manufacturer)

#endif //EX1_MANUFACTURER_H
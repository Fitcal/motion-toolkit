/*  Guts - Generic Utilities 
    Copyright (c) 2006 Gino van den Bergen, DTECTA 

    Source published under the terms of the MIT License. 
    For details please see COPYING file or visit 
    http://opensource.org/licenses/MIT
*/

#ifndef GUTS_MAP_HPP
#define GUTS_MAP_HPP

#include <map>
#include "Allocator.hpp"

namespace guts
{
    template <typename Key, typename Data, typename Compare = std::less<Key> >
    struct Map
    {
        typedef std::map<Key, Data, Compare, guts::Allocator<std::pair<const Key, Data> > > RT;
    };
    
    template <typename Key, typename Data, typename Compare = std::less<Key> >
    struct Multimap
    {
        typedef std::multimap<Key, Data, Compare, guts::Allocator<std::pair<const Key, Data> > > RT;
    };
}

#endif

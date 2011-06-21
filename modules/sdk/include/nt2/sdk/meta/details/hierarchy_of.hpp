//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_SDK_META_DETAILS_HIERARCHY_OF_HPP_INCLUDED
#define NT2_SDK_META_DETAILS_HIERARCHY_OF_HPP_INCLUDED

#include <boost/utility/enable_if.hpp>
#include <nt2/sdk/meta/property_of.hpp>
#include <nt2/sdk/meta/enable_if_type.hpp>
#include <nt2/sdk/meta/details/scalar.hpp>
#include <boost/type_traits/is_fundamental.hpp>

namespace nt2 { namespace details
{
  //============================================================================
  // Base case for unknown types
  //============================================================================
  template<class T, class Origin = T, class Enable = void>
  struct  hierarchy_of
  {
    typedef meta::unspecified_<typename meta::strip<Origin>::type> type;
  };

  //============================================================================
  // Overload for fundamental types
  //============================================================================
  template<class T,class Origin>
  struct  hierarchy_of< T
                      , Origin
                      , typename
                        boost::enable_if< boost::is_fundamental<T> >::type
                      >
  {
    typedef meta::scalar_< typename property_of<T,Origin>::type > type;
  };
} }

#endif

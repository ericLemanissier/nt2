//==============================================================================
//         Copyright 2003 & onward LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 & onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_TOOLBOX_OPERATORS_FUNCTION_LOGICAL_OR_HPP_INCLUDED
#define NT2_TOOLBOX_OPERATORS_FUNCTION_LOGICAL_OR_HPP_INCLUDED
#include <nt2/include/simd.hpp>
#include <nt2/include/functor.hpp>
#include <nt2/toolbox/operators/include.hpp>
#include <nt2/toolbox/operators/specific/common.hpp>

#include <boost/proto/tags.hpp>

namespace nt2
{
  namespace tag
  {
    typedef boost::proto::tag::logical_or logical_or_;
  }
  
  NT2_FUNCTION_IMPLEMENTATION(tag::logical_or_      , logical_or     , 2 )
  NT2_FUNCTION_IMPLEMENTATION(tag::logical_or_      , l_or           , 2 )
}

#include <nt2/toolbox/operators/function/scalar/logical_or.hpp>
#include NT2_OPERATORS_INCLUDE(logical_or.hpp)

#endif

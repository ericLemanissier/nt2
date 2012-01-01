//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II         
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI         
//                                                                              
//          Distributed under the Boost Software License, Version 1.0.          
//                 See accompanying file LICENSE.txt or copy at                 
//                     http://www.boost.org/LICENSE_1_0.txt                     
//==============================================================================
#ifndef NT2_TOOLBOX_OPERATOR_FUNCTIONS_COMPLEX_GENERIC_IS_NOT_INFINITE_HPP_INCLUDED
#define NT2_TOOLBOX_OPERATOR_FUNCTIONS_COMPLEX_GENERIC_IS_NOT_INFINITE_HPP_INCLUDED
#include <nt2/include/functions/is_not_infinite.hpp>
#include <nt2/include/functions/logical_or.hpp>
#include <nt2/sdk/complex/complex.hpp>
#include <nt2/sdk/complex/imaginary.hpp>
#include <nt2/sdk/simd/logical.hpp>

namespace nt2 { namespace ext
{
  // complex
  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::is_not_infinite_, tag::cpu_, (A0)
                            , (generic_< complex_< arithmetic_<A0> > >)
                            )
  {
    typedef typename  meta::real_of<A0>::type rA0; 
    typedef typename meta::as_logical<rA0>::type result_type;
    NT2_FUNCTOR_CALL(1)
    {
      return logical_and(is_not_infinite(imag(a0)),is_not_infinite(real(a0))); 
    }
  };

  // imaginary
  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::is_not_infinite_, tag::cpu_, (A0), 
                              (generic_< imaginary_< arithmetic_<A0> > > )
                            )
  {
    typedef typename  meta::real_of<A0>::type rA0; 
    typedef typename meta::as_logical<rA0>::type result_type;
    NT2_FUNCTOR_CALL(1)
    {
      return is_not_infinite(a0()); 
    }
  };
} }

#endif

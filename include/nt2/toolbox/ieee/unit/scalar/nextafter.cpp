//////////////////////////////////////////////////////////////////////////////
///   Copyright 2003 and onward LASMEA UMR 6602 CNRS/U.B.P Clermont-Ferrand
///   Copyright 2009 and onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
///
///          Distributed under the Boost Software License, Version 1.0
///                 See accompanying file LICENSE.txt or copy at
///                     http://www.boost.org/LICENSE_1_0.txt
//////////////////////////////////////////////////////////////////////////////
#define NT2_UNIT_MODULE "nt2 ieee toolbox - nextafter/scalar Mode"

//////////////////////////////////////////////////////////////////////////////
// Test behavior of ieee components in scalar mode
//////////////////////////////////////////////////////////////////////////////
/// created by jt the 04/12/2010
/// modified by jt the 24/01/2011
#include <boost/type_traits/is_same.hpp>
#include <nt2/sdk/functor/meta/call.hpp>
#include <nt2/sdk/unit/tests.hpp>
#include <nt2/sdk/unit/module.hpp>
#include <nt2/sdk/memory/buffer.hpp>
#include <nt2/sdk/constant/real.hpp>
#include <nt2/sdk/constant/infinites.hpp>
#include <nt2/toolbox/ieee/include/nextafter.hpp>

NT2_TEST_CASE_TPL ( nextafter_float_2,  (float))
{
  using nt2::nextafter;
  using nt2::tag::nextafter_;
  typedef typename nt2::meta::call<nextafter_(T,T)>::type r_t;
  typedef typename nt2::meta::upgrade<T>::type u_t;
  typedef T wished_r_t;

  // return type conformity test 
  NT2_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;

} // end of test for float

NT2_TEST_CASE_TPL ( nextafter_double_2,  (double))
{
  using nt2::nextafter;
  using nt2::tag::nextafter_;
  typedef typename nt2::meta::call<nextafter_(T,T)>::type r_t;
  typedef typename nt2::meta::upgrade<T>::type u_t;
  typedef T wished_r_t;

  // return type conformity test 
  NT2_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;

} // end of test for double

NT2_TEST_CASE_TPL ( nextafter_unsigned_int__2,  NT2_UNSIGNED_TYPES)
{
  using nt2::nextafter;
  using nt2::tag::nextafter_;
  typedef typename nt2::meta::call<nextafter_(T,T)>::type r_t;
  typedef typename nt2::meta::upgrade<T>::type u_t;
  typedef T wished_r_t;

  // return type conformity test 
  NT2_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;

} // end of test for unsigned_int_

NT2_TEST_CASE_TPL ( nextafter_signed_int__2,  NT2_INTEGRAL_SIGNED_TYPES)
{
  using nt2::nextafter;
  using nt2::tag::nextafter_;
  typedef typename nt2::meta::call<nextafter_(T,T)>::type r_t;
  typedef typename nt2::meta::upgrade<T>::type u_t;
  typedef T wished_r_t;

  // return type conformity test 
  NT2_TEST( (boost::is_same < r_t, wished_r_t >::value) );
  std::cout << std::endl; 
  double ulpd;

} // end of test for signed_int_
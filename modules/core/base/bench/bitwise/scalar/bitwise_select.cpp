//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#define NT2_BENCH_MODULE "nt2 bitwise toolbox - bitwise_select/scalar Mode"

//////////////////////////////////////////////////////////////////////////////
// timing Test behavior of bitwise components in scalar mode
//////////////////////////////////////////////////////////////////////////////
#include <nt2/bitwise/include/functions/bitwise_select.hpp>
#include <nt2/sdk/bench/benchmark.hpp>
#include <nt2/sdk/bench/timing.hpp>
#include <nt2/include/constants/valmax.hpp>
#include <nt2/include/constants/valmin.hpp>
#include <boost/dispatch/meta/as_integer.hpp>
#include <cmath>


//////////////////////////////////////////////////////////////////////////////
// scalar runtime benchmark for functor<bitwise_select_> from bitwise
//////////////////////////////////////////////////////////////////////////////
using nt2::tag::bitwise_select_;

//////////////////////////////////////////////////////////////////////////////
// range macro
//////////////////////////////////////////////////////////////////////////////
#define RS(T,V1,V2) (T, T(V1) ,T(V2))

namespace n1 {
  typedef float T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n2 {
  typedef double T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n3 {
  typedef nt2::int8_t T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n4 {
  typedef nt2::int16_t T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n5 {
  typedef nt2::int32_t T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n6 {
  typedef nt2::int64_t T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n7 {
  typedef nt2::uint8_t T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n8 {
  typedef nt2::uint16_t T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n9 {
  typedef nt2::uint32_t T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}
namespace n10 {
  typedef nt2::uint64_t T;
  typedef boost::dispatch::meta::as_integer<T>::type iT;
  NT2_TIMING(bitwise_select_,(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2))(RS(T,nt2::Valmin<T>()/2,nt2::Valmax<T>()/2)))
}

#undef RS

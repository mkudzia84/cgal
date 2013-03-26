#include "types.h"
#include "interface_test.h"
#include <CGAL/Periodic_2_triangulation_2.h>


#include <CGAL/Exact_predicates_exact_constructions_kernel.h>
typedef CGAL::Exact_predicates_exact_constructions_kernel            K2;
typedef CGAL::Periodic_2_triangulation_traits_2<K2>                  PTT2;
// Explicit instantiation of the whole class :
template class CGAL::Periodic_2_Delaunay_triangulation_2<PTT2>;

#include <CGAL/MP_Float.h>
#include <CGAL/Simple_homogeneous.h>
typedef CGAL::Simple_homogeneous<CGAL::MP_Float>                     K3;
typedef CGAL::Periodic_2_triangulation_traits_2<K3>                  PTT3;
// Explicit instantiation of the whole class :
template class CGAL::Periodic_2_Delaunay_triangulation_2<PTT3>;

int main() {
  typedef Periodic_2_triangulation_2<Gt>              P2T2;
  typedef Periodic_2_Delaunay_triangulation_2<Gt>     DP2T2;

  test<P2T2>(false);
  test<DP2T2>(false);
  test<PTH_Dt>(false);
  test<Delaunay_triangulation_hierarchy>(false);

  test_delaunay<DP2T2>();
  test_delaunay<PTH_Dt>();
  test_delaunay<Delaunay_triangulation_hierarchy>();

  return 0;
}

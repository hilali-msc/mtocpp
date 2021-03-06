#include "rectgrid.m"
namespace grid{
namespace rect{


/* (Autoinserted by mtoc++)
 * This source code has been filtered by the mtoc++ executable,
 * which generates code that can be processed by the doxygen documentation tool.
 *
 * On the other hand, it can neither be interpreted by MATLAB, nor can it be compiled with a C++ compiler.
 * Except for the comments, the function bodies of your M-file functions are untouched.
 * Consequently, the FILTER_SOURCE_FILES doxygen switch (default in our Doxyfile.template) will produce
 * attached source files that are highly readable by humans.
 *
 * Additionally, links in the doxygen generated documentation to the source code of functions and class members refer to
 * the correct locations in the source code browser.
 * However, the line numbers most likely do not correspond to the line numbers in the original MATLAB source files.
 */

mlhsInnerSubst<matlabtypesubstitute,p> grid::rect::rectgrid::plot(::plot_params params) {


/*  Bernard Haasdonk 9.5.2007 */

if (nargin <2)
  params = [];
end;

/*  simply forward the call */
p = plot_polygon_grid(grid,params);
/* */
/** \docupdate  */

}
/** @fn mlhsInnerSubst<matlabtypesubstitute,p> grid::rect::rectgrid::plot(::plot_params params)
  * @brief  plot function
  *
  *
  *  plot of a rectgrid via plot_polygon_grid
  *  see help plot_polygon_grid for further information
  *
  * @param params     object 
  *
  * @retval p    p
  * @synupdate Syntax needs to be updated! 
  */

};
};

#ifndef FLOWLINE_H
#define FLOWLINE_H

#include <grass/raster3d.h>
#include <grass/vector.h>

static const double VELOCITY_EPSILON = 1e-8;

void compute_flowline(RASTER3D_Region * region, const struct Seed *seed,
		      RASTER3D_Map ** velocity_field,
		      struct Integration *integration,
		      struct Map_info *flowline_vec, struct line_cats *cats,
		      struct line_pnts *points, const int cat);
#endif // FLOWLINE_H
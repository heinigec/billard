#version 3.6; // 3.7;
global_settings{ assumed_gamma 1.0 }
default{ finish{ ambient 0.2 diffuse 0.8 }} 

#include "colors.inc"
#include "textures.inc"

// camera ------------------------------------------------------------------
#declare Cam0 =camera {ultra_wide_angle angle 45
                                        location  <0.0 , 3 ,-10.0>
                                        right     x*image_width/image_height
                                        look_at   <0.0 , 0.0 , 0.0>}
					
camera{Cam0}

// sun ---------------------------------------------------------------------
light_source{<1500,2500,-2500> color White}

// sky ---------------------------------------------------------------------
sphere{<0,0,0>,1 
	pigment{ image_map{gif "images/ball_yellow_half.gif" map_type 1 once} }
	rotate <0, -90, 0>
}



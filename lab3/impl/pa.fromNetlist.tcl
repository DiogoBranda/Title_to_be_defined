
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name psdlab3 -dir "C:/Users/up201909554/Desktop/Title_to_be_defined/lab3/impl/planAhead_run_2" -part xc6slx45csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/up201909554/Desktop/Title_to_be_defined/lab3/impl/s6base_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/up201909554/Desktop/Title_to_be_defined/lab3/impl} }
set_property target_constrs_file "C:/Users/up201909554/Desktop/Title_to_be_defined/lab3/src/data/s6base.ucf" [current_fileset -constrset]
add_files [list {C:/Users/up201909554/Desktop/Title_to_be_defined/lab3/src/data/s6base.ucf}] -fileset [get_property constrset [current_run]]
link_design

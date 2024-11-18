set_project("worgen-engine")

add_requires("glfw", {alias = "glfw"})
add_packages("glfw")

add_rules("mode.debug", "mode.release")

if is_mode("release") then
	set_optimize("fastest")
		
	if is_kind("shared") then
		add_rules("utils.symbols.export_all")
	end
end

includes("src")
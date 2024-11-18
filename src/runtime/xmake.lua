add_requires("conan::bgfx/cci.20230216", {alias = "bgfx"})
add_requires("conan::glm/cci.20230113", {alias = "glm"})

target("runtime")
    set_kind("shared")
	add_files("**.cpp")
	add_headerfiles("**.h")
    add_packages("bgfx", "glm")
	add_includedirs("./")
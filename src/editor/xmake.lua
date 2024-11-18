add_requires("conan::fmt/11.0.2", {alias = "fmt"})

target("editor")
	set_kind("binary")
	add_files("**.cpp")
	add_headerfiles("**.h")
    add_packages("fmt")
	add_deps("runtime")
	add_includedirs(".", "../runtime")
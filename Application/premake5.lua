project "Application"

    kind "ConsoleApp"
    location(projectPath)

    targetdir(targetBuildPath .. "/%{prj.name}")
    debugdir(targetBuildPath .. "/%{prj.name")
    objdir(objBuildPath .. "/%{prj.name}")
	
    files {
        "src/**.hpp",
        "src/**.cpp"
    }

    includedirs {
        "../Library/include"
    }
	
    libdirs {
        "../Build/target/Library"
    }

    links {
        AddQuotation("Library")
    }



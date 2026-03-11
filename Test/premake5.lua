project "Test"

    kind "ConsoleApp"
    location(rootPath .. "/Generated") -- projectPath

    targetdir(targetBuildPath .. "/%{prj.name}")
    objdir(objBuildPath .. "/%{prj.name}")

    files {
        "include/**.hpp",
        "src/**.cpp"
    }

    includedirs {
        "../Library/include",
        "../Application/include",
        targetBuildPath .. "/External/include"
    }

    libdirs {
        targetBuildPath .. "/External/lib",
        targetBuildPath .. "/Library"
    }

    dependson {
        "GoogleTest",
        "Library"
    }

    -- Sometimes libraries cannot be found even though the library directory has been specified in libdirs{}.
    -- AddQuotation adds quotes around the library strings, fixing the issue for some currently unknown reason.
    links {
        AddQuotation("Library"),
        AddQuotation("gtest")
    }
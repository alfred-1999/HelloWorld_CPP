function(add_git_submodule dir)
    find_package(Git REQUIRED)
    if (NOT EXISTS ${dir}/CMakeLists.txt)
        message(STATUS "Adding git submodule ${dir}")
        execute_process(COMMAND ${GIT_EXECUTABLE}
             submodule update --init --recursive -- ${dir}
                        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
                        RESULT_VARIABLE result)
        if (result)
            message(FATAL_ERROR "Failed to add git submodule ${dir}")
        endif()
    else()
        message(STATUS "Git submodule ${dir} already exists")
    endif()
    add_subdirectory(${dir})
endfunction(add_git_submodule)

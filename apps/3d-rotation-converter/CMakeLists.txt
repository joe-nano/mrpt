# ================================================
# TARGET: 3d-rotation-converter
# ================================================
project(3d-rotation-converter)

if(NOT CMAKE_MRPT_HAS_NANOGUI)
    message(STATUS "Skipping ${PROJECT_NAME} due to missing dependency NANOGUI")
    return()
endif()


# Define the executable target:
add_executable(${PROJECT_NAME}
	3d-rotation-converter_main.cpp
	 ${MRPT_VERSION_RC_FILE}
	)
# Add the required libraries for linking:
DeclareAppForInstall(${PROJECT_NAME})
# Dependencies on MRPT libraries: Just mention the top-level dependency, the rest will be detected automatically,
#  and all the needed #include<> dirs added (see the script DeclareAppDependencies.cmake for further details)
DeclareAppDependencies(${PROJECT_NAME} mrpt::gui)
AppStartMenuLink(${PROJECT_NAME} "3D rotation converter")   # Add link to the Start menu (in Windows Installable packages)

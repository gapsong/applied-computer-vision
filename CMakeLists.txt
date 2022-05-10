#####################################################
cmake_minimum_required (VERSION 2.8)
project (<Project-Name>)
set(raspicam_DIR "/usr/local/lib/cmake")
find_package(raspicam REQUIRED) # for RasPi Camera
find_package(OpenCV REQUIRED) # for OpenCV
# Interface to robot is compiled as a library
add_library(interface
/home/pi/software/software_appcvrobot/libs/robot/source/robot/HardwareInterface.cpp
/home/pi/software/software_appcvrobot/libs/robot/source/robot/HardwareInterface.h )
include_directories(
${/home/pi/software/software_appcvrobot/libs/robot/source/robot}
${OpenCV_INCLUDE_DIRS})
# Add all your source files
add_executable( <name>
<file1.cpp>
<file1.h>
<...>
)
set(CMAKE_CXX_FLAGS "-lpigpio")
target_link_libraries( camera
interface
${OpenCV_LIBS}
${raspicam_CV_LIBS})
#####################################################
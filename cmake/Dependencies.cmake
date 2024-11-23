#######################################################################
# Find all necessary and optional qt_tutorial dependencies
#######################################################################

# qt6
find_package(Qt6 REQUIRED COMPONENTS 
	Core 
	Widgets 
	OpenGLWidgets 
	Concurrent 
	Network 
	Multimedia 
	PdfWidgets
)
qt_standard_project_setup()                 # Qt6标准工程配置（会开启自动MOC和UIC）
set(CMAKE_AUTORCC ON)                       # 开启自动RCC

# vtk pcl
find_package(VTK)
find_package(PCL)


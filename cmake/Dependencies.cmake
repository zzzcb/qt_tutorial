find_package(Qt6 REQUIRED COMPONENTS
	Core
	Widgets
)
qt_standard_project_setup()  # uic  和 moc
set(CMAKE_AUTORCC ON)

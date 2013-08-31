cmake_minimum_required (VERSION 2.8.7)
project (AnMap)

if (WIN32)
	list (APPEND AnMap_LIBRARIES
		winmm)
endif ()

set (AnMap_SOURCES
	AnMap.cpp
	AnMapDoc.cpp
	AnMapView.cpp
	brushview.cpp
	MainFrm.cpp
	Minimap.cpp
	MiniMapView.cpp
	MiniView.cpp
	NewMap.cpp
	OptionDialog.cpp
	ProgressBar.cpp
	Properties.cpp
	RenderDialog.cpp
	Splash.cpp
	Sprite.cpp
	StdAfx.cpp
	Tile.cpp	
	TileSpr.cpp
	Undo.cpp)

set (AnMap_HEADERS
	AnMap.h
	AnMapDoc.h
	AnMapView.h
	brushview.h
	MainFrm.h
	Minimap.h
	MiniMapView.h
	MiniView.h
	NewMap.h
	OptionDialog.h
	ProgressBar.h
	Properties.h
	RenderDialog.h
	resource.h
	Splash.h
	Sprite.h
	StdAfx.h
	Tile.h
	TileSpr.h
	Undo.h)

source_group ("Header Files"
	FILES ${AnMap_HEADERS})

include_directories (
	.)
add_definitions (-D_AFXDLL)
add_executable (AnMap
	${AnMap_SOURCES}
	${AnMap_HEADERS})
target_link_libraries (AnMap
	${AnMap_LIBRARIES})
IF (WIN32)
	IF (MSVC)
		set_target_properties(AnMap PROPERTIES LINK_FLAGS_DEBUG "/SUBSYSTEM:windows")
		set_target_properties(AnMap PROPERTIES LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:windows")
		set_target_properties(AnMap PROPERTIES LINK_FLAGS_RELEASE "/SUBSYSTEM:windows")
		set_target_properties(AnMap PROPERTIES LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:windows")
	ENDIF (MSVC)
ENDIF (WIN32)
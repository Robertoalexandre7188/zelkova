cmake_minimum_required(VERSION 3.31)

execute_process(
	COMMAND git describe --tags --always --abbrev=0
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
	OUTPUT_VARIABLE PROJECT_FULL_VERSION
	OUTPUT_STRIP_TRAILING_WHITESPACE
)

#### Automatic project version detection based on the latest git tag

if(PROJECT_FULL_VERSION MATCHES "^v([0-9]+)\\.([0-9]+)\\.([0-9]+)(-([a-zA-Z]+)\\.([0-9]+))?")
	set(PROJECT_MAJOR_VERSION "${CMAKE_MATCH_1}")
	set(PROJECT_MINOR_VERSION "${CMAKE_MATCH_2}")
	set(PROJECT_PATCH_VERSION "${CMAKE_MATCH_3}")
	set(PROJECT_PRERELEASE "${CMAKE_MATCH_4}")
	set(PROJECT_PRERELEASE_VERSION "${CMAKE_MATCH_5}")

	if(PROJECT_PRERELEASE)
		set(IS_PRERELEASE 1)
	else()
		set(IS_PRERELEASE 0)
	endif()
else()
	message(FATAL_ERROR "Could not fetch project version")
endif()

#############################################################################################################

project(zelkova
	LANGUAGES C
	VERSION "${PROJECT_MAJOR_VERSION}.${PROJECT_MINOR_VERSION}.${PROJECT_PATCH_VERSION}"
	DESCRIPTION "A lightweight build system focused on integration with C and native dependency manageament"
)

include(GNUInstallDirs)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_definitions(
	MAJOR="${PROJECT_MAJOR_VERSION}"
	MINOR="${PROJECT_MINOR_VERSION}"
	PATCH="${PROJECT_PATCH_VERSION}"
	IS_PRERELEASE="${IS_PRERELEASE}"
)

include_directories(BEFORE include)

if(IS_PRERELEASE)
	add_compile_definitions(PRERELEASE_VERSION="${PROJECT_PRERELEASE_VERSION}")
endif()

add_executable(${PROJECT_NAME}
	src/main.c
)

set_target_properties(${PROJECT_NAME} PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_INSTALL_BINDIR}
)

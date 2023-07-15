
# Set project name
project(
	main_game
	VERSION 1.0.0
	DESCRIPTION "Main Game"
)

# Set the projects root directory
message ("\n****************************************")
set(CODE_DIR ${PROJECT_SOURCE_DIR})
message (" Project Name: ${PROJECT_NAME} \n Root Directory: ${CODE_DIR}")
message ("****************************************")


# Set sources for project
set(projectSOURCES
	main_game.cpp
	
	MainGame.cpp
)

# Set headers for project
set(projectHEADERS
	MainGame.hpp
)

# Create executable target
add_executable(${PROJECT_NAME} 
	${projectSOURCES}
	${projectHEADERS}
)

# Link libraries
target_link_libraries(${PROJECT_NAME} 
	raylib
)

# Set the install directory for the executable
install(TARGETS ${PROJECT_NAME}
	CONFIGURATIONS Debug
	RUNTIME DESTINATION Debug/bin
)
		
install(TARGETS ${PROJECT_NAME}
	CONFIGURATIONS Release
	RUNTIME DESTINATION Release/bin
)
cmake_minimum_required(VERSION 3.5) # Минимальная версия CMake
project(ObjectDetection) # Имя проекта
#set(OpenCV_DIR "C:/msys64/mingw64/lib/opencv4/3rdparty")
find_package(OpenCV REQUIRED) # Поиск пакета OpenCV
add_executable(ObjectDetection main.cpp) # Создание исполняемого файла
target_link_libraries(ObjectDetection ${OpenCV_LIBS}) # Линковка с библиотеками OpenCV
find_package(OpenSSL REQUIRED) # Поиск пакета OpenCV
target_link_libraries(ObjectDetection ${OPENSSL_LIBRARIES}) # Линковка с библиотеками OpenCV

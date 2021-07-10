import glob


def WriteToFile(files: int):
    with open("CMakeLists.txt", "w+") as file:
        file.writelines("cmake_minimum_required(VERSION 3.19)\nproject(Compiti_informatica_vacanze_2021)\n\nset(CMAKE_CXX_STANDARD 14)\ninclude_directories(src)")
        for i in range(10, 10 + files, 1):
            file.writelines(' \nadd_executable(' + str(i) + " " + str(i) + '.cpp)')
            file.writelines('\nset_target_properties(' + str(
                i) + ' PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/out/")')
    print("Fatto!")

    file.close()


def HowManyFiles(dir: str):
    return len(glob.glob1(dir, "*.cpp"))


if __name__ == '__main__':
    WriteToFile(HowManyFiles("."))

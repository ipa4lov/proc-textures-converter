add_executable(main converter.cpp)
target_link_libraries(main -lclang -lLLVM-8 -lclangAST -lclangBasic -lclangFrontend -lclangLex -lclangParse -lclangRewrite -lclangSerialization )

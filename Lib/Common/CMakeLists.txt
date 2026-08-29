
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(module_title        "Common")

Include (${common_cmake_dir}/BuildCommon/ConfigModule.cmake)
Include (${common_cmake_dir}/BuildCommon/ConfigTarget.cmake)

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

set(library_source_files
        DateTimeFormat.cpp
        ErrorDetectionCode.cpp
        ProcessManager.cpp
        ProgressCallback.cpp
        TextParser.cpp
)

set(inclib_header_files
        ${inclib_source_dir}/DateTimeFormat.h
        ${inclib_source_dir}/ErrorDetectionCode.h
        ${inclib_source_dir}/ProcessManager.h
        ${inclib_source_dir}/ProgressCallback.h
        ${inclib_source_dir}/Score4CoreSettings.h
        ${inclib_source_dir}/Score4Types.h
        ${inclib_source_dir}/ScoreInterface.h
        ${inclib_source_dir}/TextParser.h
)

set(module_needs_libraries
)

##----------------------------------------------------------------
##
##    ビルドとインストールの設定。
##

Include (${common_cmake_dir}/BuildCommon/BuildLib.cmake)
Include (${common_cmake_dir}/BuildCommon/Install.cmake)

##----------------------------------------------------------------
##
##    テストの設定。
##

Add_SubDirectory (Tests)


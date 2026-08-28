
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(module_title        "Document")

Include (${common_cmake_dir}/BuildCommon/ConfigModule.cmake)
Include (${common_cmake_dir}/BuildCommon/ConfigTarget.cmake)

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

set(library_source_files
        DocumentFile.cpp
        ScoreDocument.cpp
)

set(inclib_header_files
        ${inclib_source_dir}/DocumentFile.h
        ${inclib_source_dir}/ScoreDocument.h
)

set(module_needs_libraries
        ${project_target_prefix}Downloader
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


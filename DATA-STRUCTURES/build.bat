MD bin
clang -Icore\include -o bin\data-structures.lib core\src\*.c -fuse-ld=llvm-lib
clang -Iapp\include -Icore\include -o bin\app.exe app\src\*.c -L bin -l data-structures
clang -Itest\include -Icore\include -o bin\test.exe test\src\*c -L bin -l data-structures
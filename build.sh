if [ ! -d "build" ]; then
    mkdir build;
    cd ./build;
    echo '*' > .gitignore
    cd ..
fi

echo "==START BUILDING PROJECT=="

cd ./build

cmake -G Ninja ../lib

ninja

echo "==STOP BUILDING PROJECT=="
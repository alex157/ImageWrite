#First Project and git lesson.

git init

git add .

git commit -am "Initial commit"

git remote add origin git@github.com:alex157/ImageWrite.git

git push origin master

touch ImageWrite.pro src/main.cpp

git status
git add .

qtcreator ImageWrite.pro

touch include/ImageWrite.h src/ImageWrite.cpp
git add .

#Continue from last session

Created the image using PPM file format

#Adding Bresenham's line algorithm
Plotting a line on the image

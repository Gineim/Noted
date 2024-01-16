#include <stdio.h>

// Check if the correct path to OpenCV header is used
// #include <opencv2/opencv.hpp>

// using namespace std;

// Function to save text to a file
void saveText(char filename[], char text[]) {
    printf("filename %s\n", filename);
    printf("text %s\n", text);
    FILE *fptr;

    fptr = fopen("a.txt", "w");

    fprintf(fptr, "hello world");

    fclose(fptr);
}
void main (){
    saveText("a.txt", "hello world a");
    saveText("b.txt", "hello world b");
    saveText("c.txt", "hello world c");
}
// Function to save an image to a file (assuming OpenCV)
// void saveImage(const string& filename, const cv::Mat& image) {
//     try {
//         cv::imwrite(filename, image);
//         cout << "Image saved to " << filename << endl;
//     } catch (cv::Exception& e) {
//         cerr << "Error: " << e.what() << endl;
//     }
// }

// void main() {
//     // Example text
//     string lessonText = "This is a lesson about C++ programming.";

//     // Example image (assuming OpenCV)
//     cv::Mat lessonImage = cv::Mat::zeros(300, 300, CV_8UC3);
//     cv::putText(lessonImage, "C++ Lesson", cv::Point(50, 150), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 255, 255), 2);

//     // Save text and image
//     saveText("lesson.txt", lessonText);
//     saveImage("lesson_image.png", lessonImage);


// }

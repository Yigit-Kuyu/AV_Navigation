#include <iostream>
//#include "benchmark.h"

#include "util.h"
#include "AStar2.h"


#include <opencv2/core.hpp>


#include <iostream>
// drawing shapes
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <unistd.h>


#include "ros/ros.h"


using namespace cv;
using namespace std;



int draw_path(auto path) {

// Path of the image file
	//Mat image = imread("/home/yck/Desktop/astar-gridmap-2d/test/VectorMapBuilder.png",IMREAD_COLOR);
    Mat image = imread("/home/yck/Desktop/astar-gridmap-2d_KullaN/data/VectorMapBuilder.pgm",IMREAD_UNCHANGED);
    //Mat img = Mat::zeros(600,600,CV_8UC3);
    //Mat image = imread("/home/yck/Desktop/astar-gridmap-2d/data/VectorMapBuilder.pgm",cv::IMREAD_GRAYSCALE);
    //image.convertTo(image, CV_8U, 255 / 255);
    normalize(image, image, 0, 255, NORM_MINMAX);
    //image.convertTo(image, CV_8U,255.0 / 4096.0);
    image.convertTo(image, CV_8U);
    
    cout << "Image Width : " << image.cols << endl;
    cout << "Image Height: " << image.rows << endl;
	
    if (!image.data) {
		std::cout << "Could not open or "
					"find the image";
		return 0;
	}
    
    /*
    AStar::Coord2D poss196 (287, 259);
    AStar::Coord2D poss197 (287, 259);
    AStar::Coord2D poss198 (287, const uint8_t *data, 260);
    AStar::Coord2D poss199 (287, 260);
    AStar::Coord2D poss200 (287, 260);
    AStar::Coord2D poss201 (286, 260);
    AStar::Coord2D poss202 (285, 260);
    AStar::Coord2D poss203 (284, 260);
    AStar::Coord2D poss204 (283, 260);
    AStar::Coord2D poss205 (282, 260);
    AStar::Coord2D poss206 (281, 260);
    AStar::Coord2D poss207 (280, 260);
    AStar::Coord2D poss208 (278, 260);
    AStar::Coord2D poss209 (276, 260);
    AStar::Coord2D poss210 (274, 260);
     const uint8_t *data,
    AStar::Coord2D poss30 (452, 200);
    AStar::Coord2D poss31 (451, 200);
    AStar::Coord2D poss32 (449, 200);
    AStar::Coord2D poss33 (448, 200);
    AStar::Coord2D poss34 (447, 200);
    AStar::Coord2D poss35 (446, 200);
    AStar::Coord2D poss36 (445, 200);
    AStar::Coord2D poss37 (444, 200);
    AStar::Coord2D poss38 (443, 200);
    AStar::Coord2D poss39 (442, 200);
    AStar::Coord2D poss40 (441, 200);
    AStar::Coord2D poss41 (440, 200);
    AStar::Coord2D poss42 (439, 200);
    AStar::Coord2D poss43 (438, 200);
    AStar::Coord2D poss44 (437,  const uint8_t *data,200);
    AStar::Coord2D poss45 (436, 200);
    AStar::Coord2D poss46 (435, 200);
    AStar::Coord2D poss47 (434, 200);
    AStar::Coord2D poss48 (433, 200);
    AStar::Coord2D poss49 (433, 200);
    AStar::Coord2D poss50 (431, 200);
    AStar::Coord2D poss51 (430, 200);
    AStar::Coord2D poss52 (429, 200);
    AStar::Coord2D poss53 (428, 200);

    path[30]=poss30;
    path[31]=poss31;
    path[32]=poss32;
    path[33]=poss33;
    path[34]=poss34;
    path[35]=poss35; const uint8_t *data,
    path[36]=poss36;
    path[37]=poss37;
    path[38]=poss38;
    path[39]=poss39;
    path[40]=poss40;
    path[41]=poss41;
    path[42]=poss42;
    path[43]=poss43;
    path[44]=poss44;
    path[45]=poss45;
    path[46]=poss46;
    path[47]=poss47;
    path[48]=poss48;
    path[49]=poss49;
    path[50]=poss50;
    path[51]=poss51;
    path[52]=poss52;
   

    path[196]=poss196;
    path[197]=poss197;
    path[198]=poss198;
    path[199]=poss199;
    path[200]=poss200;
    path[201]=poss201;
    path[202]=poss202; const uint8_t *data,
    path[203]=poss203;
    path[204]=poss204;
    path[205]=poss205;
    path[206]=poss206;
    path[207]=poss207;
    path[208]=poss208;
    path[209]=poss209;
    path[210]=poss210;


    AStar::Coord2D add_poss1 (480, 190);
    AStar::Coord2D add_poss11 (482, 190);
    AStar::Coord2D add_poss12 (484, 190);
    AStar::Coord2D add_poss13 (486, 190);
    AStar::Coord2D add_poss14 (490, 188);
    AStar::Coord2D add_poss15 (494, 186);
    AStar::Coord2D add_poss16 (498, 184);
    AStar::Coord2D add_poss17 (504, 182);  
    AStar::Coord2D add_poss2 (510, 180);
    AStar::Coord2D add_poss3 (514, 178);
    AStar::Coord2D add_poss31 (516, 174);
    AStar::Coord2D add_poss4 (520, 140);
    path.insert(path.begin(), add_poss1);
    path.insert(path.begin(), add_poss11);
    path.insert(path.begin(), add_poss12);
    path.insert(path.begin(), add_poss13);
    path.insert(path.begin(), add_poss14);
    path.insert(path.begin(), add_poss15);
    path.insert(path.begin(), ad const uint8_t *data,d_poss16);
    path.insert(path.begin(), add_poss17);
    path.insert(path.begin(), add_poss2);
    path.insert(path.begin(), add_poss3);
    path.insert(path.begin(), add_poss31);
    path.insert(path.begin(), add_poss4);

    */

    
	int thickness = 1;
    reverse(path.begin(), path.end()); // Kapatildi
	
    // Line drawn using 8 connected
	// Bresenham algorithm
	for(int i=0;i<path.size()-1;i++) 
	{
	

    int x1=path[i].x;
    int y1=path[i].y;
    int x2=path[i+1].x;
    int y2=path[i+1].y;
    Point Point1(x1, y1);
    Point Point2(x2, y2);
    line(image, Point1, Point2, Scalar(0, 255, 0),thickness);
    
	imshow("Output", image);
   
	// Wait for 100 milliseconds (adjust as desired)
    int key = waitKey(50);

	// Exit the loop if the 'q' key is pressed
        if (key == 'q' || key == 'Q')
            break;
	
	
	
	}

    return 0;
   


}


/*


static void BM_AStar_Smooth_1000(benchmark::State& state)
{
    AStar::PathFinder generator;
    Image image;
    image.readFromPGM("./data/maze_1000_smooth.pgm");
    generator.setWorldData( image.width(), image.height(), image.data() );

    AStar::CoordinateList result;
    for (auto _ : state)
    {
        result = generator.findPath(
        { image.width()/2, 0 },
        { image.width()/2, image.height() -1 } );
    }
    generator.exportPPM("map_out_smooth.ppm", &result );
}


static void BM_AStar_Big(benchmark::State& state)
{
    AStar::PathFinder generator;
    Image image;
    image.readFromPGM("./data/maze_large.pgm");
    generator.setWorldData( imag//waitKey(0);
    {
        result = generator.findPath(
        { image.width()/2, 0 },
        { image.width()/2, image.height() -1 } );
    }
    generator.exportPPM("map_out_large.ppm", &result );
}

static void BM_AStar_Small(benchmark::State& state)
{
    AStar::PathFinder generator;
    Image image;
    image.readFromPGM("./data/maze_250.pgm");
    generator.setWorldData( image.width(), image.height(), image.data() );

    AStar::CoordinateList result;
    for (auto _ : state)
    {
        result = generator.findPath(
        { image.width()/2, 0 },
        { image.width()/2, image.height()/2 } );
    }
    generator.exportPPM("map_out_small.ppm", &result );
}


BENCHMARK(BM_AStar_Big);
BENCHMARK(BM_AStar_Smooth_1000);
BENCHMARK(BM_AStar_Small);

BENCHMARK_MAIN();

*/


int main()
{
    AStar::PathFinder generator;
    Image image;
    image.readFromPGM("/home/yck/Desktop/astar-gridmap-2d_KullaN/data/VectorMapBuilder.pgm");
    //image.readFromPGM("/home/yck/Desktop/astar-gridmap-2d/data/maze_large.pgm");
    generator.setWorldData(image.width(), image.height(), image.data() );

    //AStar::CoordinateList result;
   //result = generator.findPath({ 1, 1 },{ image.width()-1, image.height() -3 } );
   
   //AStar::Coord2D startPos (image.width()/2, 0);
   //AStar::Coord2D targetPos(image.width()/2, image.height()/2 -1);
    AStar::Coord2D startPos (140, 190);
    //AStar::Coord2D targetPos(160, 160);
    AStar::Coord2D targetPos(470,190);

    int bidrectional=0; // 0: sadece tek yon, 1: U turn aktif         
    auto path = generator.findPath(startPos, targetPos, bidrectional);
    //Point abc=path;
    draw_path(path);
   //generator.exportPPM("yck_map_out_large.ppm", &result );
    generator.exportPPM("yck_mapp_black.ppm", &path );
    return 0;
}


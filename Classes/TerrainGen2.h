//
//  TerrainGen2.h
//  Eden
//
//  Created by Ari Ronen on 10/25/12.
//
//

#ifndef Eden_TerrainGen2_h
#define Eden_TerrainGen2_h

#define BLOCKZ_SIZE (T_HEIGHT)*(T_SIZE)*(T_SIZE)
#define CAP(y,max) ((y)>=(max)?(max):(y))
#define BLOCK(x,z,y) blockz[((int)(x)*(T_SIZE*T_HEIGHT)+(int)(z)*(T_HEIGHT)+(int)(y))]
#define COLOR(x,z,y) colorz[((int)(x)*(T_SIZE*T_HEIGHT)+(int)(z)*(T_HEIGHT)+(int)(y))]





void makeDirt();
void makeMars();
void makeRiverTrees();
void makeMountains();
void makeDesert();
void makeBeach();
void makePonies();
void clear();
void makeCave(int xs,int zs,int ys,int sizex,int sizez,int sizey,int colorScheme);

int tg2_init();


#endif
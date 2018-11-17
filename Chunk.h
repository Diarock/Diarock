#pragma once

#include "stdafx.h"
#include "Chunk.h"
#include "Block.h"
#include "Location.h"

class Chunk
{
public:
	Chunk(World* world, int x, int y, Block blocks[]);
	~Chunk();
	World* get_world();
	int get_x();
	int get_y();
	Block* get_blocks();
	Block operator[](Location* location);
private:
	World* world;
	int x;
	int y;
	Block blocks[WORLD_HEIGHT * CHUNKS_SIZE * CHUNKS_SIZE]; // To find a block at x, y, z: (z * (CHUNK_SIZE * CHUNK_SIZE)) + (y * CHUNK_SIZE) + x
};


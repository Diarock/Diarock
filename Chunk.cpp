#include "stdafx.h"
#include "Chunk.h"

Chunk::Chunk(World* world, int x, int y, Block blocks[])
	:world{world}, x{x}, y{y}, blocks{*blocks}
{}

Chunk::~Chunk()
{
	
}

Block* Chunk::get_blocks()
{
	return blocks;
}

int Chunk::get_x()
{
	return x;
}

int Chunk::get_y()
{
	return y;
}

World* Chunk::get_world()
{
	return world;
}

Block Chunk::operator[](Location* location)
{
	if (location->get_z() >= 256)
		throw std::out_of_range("z too large");

	return blocks[location->get_block_z() * (CHUNKS_SIZE * CHUNKS_SIZE) + (location->get_block_y() * CHUNKS_SIZE) + location->get_block_x()];
}


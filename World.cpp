#include "stdafx.h"

#include "World.h"
#include "Chunk.h"
#include "Vector3.h"

World::World(std::vector<Chunk>* chunks, Vector3* spawn_location)
	:chunks{chunks}, spawn_location{spawn_location}
{
	
}


World::~World()
{
	
}


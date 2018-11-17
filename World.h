#pragma once
#include <vector>
#include "Location.h"
#include "Chunk.h"
#include "Vector3.h"

class World
{
public:
	World(std::vector<Chunk>* chunks, Vector3* spawn_location);
	~World();
	Location* get_spawn_location();
	std::vector<Chunk>* get_chunks;
private:
	std::vector<Chunk>* chunks;
	Vector3* spawn_location;
};


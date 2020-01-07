#ifndef EU4_MERGE_BLOCK_H_
#define EU4_MERGE_BLOCK_H_

#include "newParser.h"
#include <set>


namespace EU4
{
	class MergeBlock : commonItems::parser
	{
	public:
		MergeBlock(std::istream& theStream);
		std::string getMaster() const { return master; }
		std::set<std::string> getSlaves() const { return slaves; }
		bool getMerge() const { return merge; }

	private:
		std::string master;
		std::set<std::string> slaves;
		bool merge = false;
	};
}

#endif // EU4_MERGE_BLOCK_H_
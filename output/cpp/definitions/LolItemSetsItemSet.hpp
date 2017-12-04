#ifndef SWAGGER_TYPES_LolItemSetsItemSet_HPP
#define SWAGGER_TYPES_LolItemSetsItemSet_HPP
#include <json.hpp>
#include "LolItemSetsItemSetBlock.hpp"
#include "LolItemSetsPreferredItemSlot.hpp"
namespace leagueapi {
  // 
  struct LolItemSetsItemSet {
    // 
    std::string map;
    // 
    std::vector<LolItemSetsPreferredItemSlot> preferredItemSlots;
    // 
    std::vector<LolItemSetsItemSetBlock> blocks;
    // 
    std::vector<int32_t> associatedChampions;
    // 
    std::string startedFrom;
    // 
    std::string title;
    // 
    std::string mode;
    // 
    std::vector<int32_t> associatedMaps;
    // 
    std::string type;
    // 
    int32_t sortrank;
    // 
    std::string uid;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSet& v) {
    j["map"] = v.map;
    j["preferredItemSlots"] = v.preferredItemSlots;
    j["blocks"] = v.blocks;
    j["associatedChampions"] = v.associatedChampions;
    j["startedFrom"] = v.startedFrom;
    j["title"] = v.title;
    j["mode"] = v.mode;
    j["associatedMaps"] = v.associatedMaps;
    j["type"] = v.type;
    j["sortrank"] = v.sortrank;
    j["uid"] = v.uid;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSet& v) {
    v.map = j.at("map").get<std::string>;
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot>>;
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock>>;
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>;
    v.startedFrom = j.at("startedFrom").get<std::string>;
    v.title = j.at("title").get<std::string>;
    v.mode = j.at("mode").get<std::string>;
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>;
    v.type = j.at("type").get<std::string>;
    v.sortrank = j.at("sortrank").get<int32_t>;
    v.uid = j.at("uid").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsItemSet_HPP

#ifndef SWAGGER_TYPES_LolItemSetsItemSet_HPP
#define SWAGGER_TYPES_LolItemSetsItemSet_HPP
#include <json.hpp>
#include "LolItemSetsItemSetBlock.hpp"
#include "LolItemSetsPreferredItemSlot.hpp"
namespace leagueapi {
  // 
  struct LolItemSetsItemSet {
    // 
    std::vector<int32_t> associatedChampions;
    // 
    std::vector<int32_t> associatedMaps;
    // 
    std::vector<LolItemSetsItemSetBlock> blocks;
    // 
    std::string map;
    // 
    std::string mode;
    // 
    std::vector<LolItemSetsPreferredItemSlot> preferredItemSlots;
    // 
    int32_t sortrank;
    // 
    std::string startedFrom;
    // 
    std::string title;
    // 
    std::string type;
    // 
    std::string uid;
  };

  void to_json(nlohmann::json& j, const LolItemSetsItemSet& v) {
    j["associatedChampions"] = v.associatedChampions;
    j["associatedMaps"] = v.associatedMaps;
    j["blocks"] = v.blocks;
    j["map"] = v.map;
    j["mode"] = v.mode;
    j["preferredItemSlots"] = v.preferredItemSlots;
    j["sortrank"] = v.sortrank;
    j["startedFrom"] = v.startedFrom;
    j["title"] = v.title;
    j["type"] = v.type;
    j["uid"] = v.uid;
  }

  void from_json(const nlohmann::json& j, LolItemSetsItemSet& v) {
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>;
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>;
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock>>;
    v.map = j.at("map").get<std::string>;
    v.mode = j.at("mode").get<std::string>;
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot>>;
    v.sortrank = j.at("sortrank").get<int32_t>;
    v.startedFrom = j.at("startedFrom").get<std::string>;
    v.title = j.at("title").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.uid = j.at("uid").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsItemSet_HPP
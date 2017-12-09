#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsPreferredItemSlot.hpp"
#include "LolItemSetsItemSetBlock.hpp"
namespace leagueapi {
  struct LolItemSetsItemSet_t {
    std::string uid;
    int32_t sortrank;
    std::vector<int32_t> associatedChampions;
    std::vector<LolItemSetsItemSetBlock_t> blocks;
    std::vector<LolItemSetsPreferredItemSlot_t> preferredItemSlots;
    std::vector<int32_t> associatedMaps;
    std::string title;
    std::string startedFrom;
    std::string mode;
    std::string type;
    std::string map;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSet_t& v) {
    j["uid"] = v.uid;
    j["sortrank"] = v.sortrank;
    j["associatedChampions"] = v.associatedChampions;
    j["blocks"] = v.blocks;
    j["preferredItemSlots"] = v.preferredItemSlots;
    j["associatedMaps"] = v.associatedMaps;
    j["title"] = v.title;
    j["startedFrom"] = v.startedFrom;
    j["mode"] = v.mode;
    j["type"] = v.type;
    j["map"] = v.map;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSet_t& v) {
    v.uid = j.at("uid").get<std::string>();
    v.sortrank = j.at("sortrank").get<int32_t>();
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>();
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock_t>>();
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot_t>>();
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>();
    v.title = j.at("title").get<std::string>();
    v.startedFrom = j.at("startedFrom").get<std::string>();
    v.mode = j.at("mode").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.map = j.at("map").get<std::string>();
  }
  inline std::string to_string(const LolItemSetsItemSet_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSetBlock.hpp"
#include "LolItemSetsPreferredItemSlot.hpp"
namespace leagueapi {
  struct LolItemSetsItemSet_t {
    std::string type;
    std::vector<int32_t> associatedMaps;
    std::vector<int32_t> associatedChampions;
    std::string uid;
    int32_t sortrank;
    std::string startedFrom;
    std::string title;
    std::vector<LolItemSetsItemSetBlock_t> blocks;
    std::vector<LolItemSetsPreferredItemSlot_t> preferredItemSlots;
    std::string map;
    std::string mode;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSet_t& v) {
    j["type"] = v.type;
    j["associatedMaps"] = v.associatedMaps;
    j["associatedChampions"] = v.associatedChampions;
    j["uid"] = v.uid;
    j["sortrank"] = v.sortrank;
    j["startedFrom"] = v.startedFrom;
    j["title"] = v.title;
    j["blocks"] = v.blocks;
    j["preferredItemSlots"] = v.preferredItemSlots;
    j["map"] = v.map;
    j["mode"] = v.mode;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSet_t& v) {
    v.type = j.at("type").get<std::string>();
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>();
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>();
    v.uid = j.at("uid").get<std::string>();
    v.sortrank = j.at("sortrank").get<int32_t>();
    v.startedFrom = j.at("startedFrom").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock_t>>();
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot_t>>();
    v.map = j.at("map").get<std::string>();
    v.mode = j.at("mode").get<std::string>();
  }
  inline std::string to_string(const LolItemSetsItemSet_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

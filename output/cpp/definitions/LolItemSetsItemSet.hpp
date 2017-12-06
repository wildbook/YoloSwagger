#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSetBlock.hpp"
#include "LolItemSetsPreferredItemSlot.hpp"
namespace leagueapi {
  struct LolItemSetsItemSet_t {
    std::string startedFrom;
    std::vector<int32_t> associatedMaps;
    std::vector<LolItemSetsPreferredItemSlot_t> preferredItemSlots;
    int32_t sortrank;
    std::vector<int32_t> associatedChampions;
    std::string type;
    std::string uid;
    std::string title;
    std::string mode;
    std::vector<LolItemSetsItemSetBlock_t> blocks;
    std::string map;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSet_t& v) {
    j["startedFrom"] = v.startedFrom;
    j["associatedMaps"] = v.associatedMaps;
    j["preferredItemSlots"] = v.preferredItemSlots;
    j["sortrank"] = v.sortrank;
    j["associatedChampions"] = v.associatedChampions;
    j["type"] = v.type;
    j["uid"] = v.uid;
    j["title"] = v.title;
    j["mode"] = v.mode;
    j["blocks"] = v.blocks;
    j["map"] = v.map;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSet_t& v) {
    v.startedFrom = j.at("startedFrom").get<std::string>();
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>();
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot_t>>();
    v.sortrank = j.at("sortrank").get<int32_t>();
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>();
    v.type = j.at("type").get<std::string>();
    v.uid = j.at("uid").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.mode = j.at("mode").get<std::string>();
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock_t>>();
    v.map = j.at("map").get<std::string>();
  }
}

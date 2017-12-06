#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsPreferredItemSlot.hpp"
#include "LolItemSetsItemSetBlock.hpp"
namespace leagueapi {
  struct LolItemSetsItemSet_t {
    std::vector<int32_t> associatedChampions;
    std::vector<int32_t> associatedMaps;
    std::vector<LolItemSetsItemSetBlock_t> blocks;
    std::string map;
    std::string mode;
    std::vector<LolItemSetsPreferredItemSlot_t> preferredItemSlots;
    int32_t sortrank;
    std::string startedFrom;
    std::string title;
    std::string type;
    std::string uid;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSet_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSet_t& v) {
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>();
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>();
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock_t>>();
    v.map = j.at("map").get<std::string>();
    v.mode = j.at("mode").get<std::string>();
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot_t>>();
    v.sortrank = j.at("sortrank").get<int32_t>();
    v.startedFrom = j.at("startedFrom").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.uid = j.at("uid").get<std::string>();
  }
}

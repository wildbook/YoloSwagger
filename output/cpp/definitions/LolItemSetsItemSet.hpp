#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSetBlock.hpp"
#include "LolItemSetsPreferredItemSlot.hpp"
namespace leagueapi {
  struct LolItemSetsItemSet_t {
    std::string_t map;
    std::vector<LolItemSetsPreferredItemSlot_t> preferredItemSlots;
    std::vector<LolItemSetsItemSetBlock_t> blocks;
    std::vector<int32_t> associatedChampions;
    std::string_t startedFrom;
    std::string_t title;
    std::string_t mode;
    std::vector<int32_t> associatedMaps;
    std::string_t type;
    int32_t_t sortrank;
    std::string_t uid;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSet_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSet_t& v) {
    v.map = j.at("map").get<std::string_t>();
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot_t>>();
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock_t>>();
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>();
    v.startedFrom = j.at("startedFrom").get<std::string_t>();
    v.title = j.at("title").get<std::string_t>();
    v.mode = j.at("mode").get<std::string_t>();
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>();
    v.type = j.at("type").get<std::string_t>();
    v.sortrank = j.at("sortrank").get<int32_t_t>();
    v.uid = j.at("uid").get<std::string_t>();
  }
  inline std::string to_string(const LolItemSetsItemSet_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

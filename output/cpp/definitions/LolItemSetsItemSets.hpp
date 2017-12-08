#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSet.hpp"
namespace leagueapi {
  struct LolItemSetsItemSets_t {
    uint64_t timestamp;
    std::vector<LolItemSetsItemSet_t> itemSets;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSets_t& v) {
    j["timestamp"] = v.timestamp;
    j["itemSets"] = v.itemSets;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSets_t& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.itemSets = j.at("itemSets").get<std::vector<LolItemSetsItemSet_t>>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolItemSetsItemSets_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

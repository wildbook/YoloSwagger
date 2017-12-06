#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSet.hpp"
namespace leagueapi {
  struct LolItemSetsItemSets_t {
    std::vector<LolItemSetsItemSet_t> itemSets;
    uint64_t accountId;
    uint64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSets_t& v) {
    j["itemSets"] = v.itemSets;
    j["accountId"] = v.accountId;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSets_t& v) {
    v.itemSets = j.at("itemSets").get<std::vector<LolItemSetsItemSet_t>>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
  }
}

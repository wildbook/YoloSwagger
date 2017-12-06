#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSet.hpp"
namespace leagueapi {
  struct LolItemSetsItemSets_t {
    uint64_t accountId;
    std::vector<LolItemSetsItemSet_t> itemSets;
    uint64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSets_t& v) {
    j["accountId"] = v.accountId;
    j["itemSets"] = v.itemSets;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSets_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.itemSets = j.at("itemSets").get<std::vector<LolItemSetsItemSet_t>>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
  }
}

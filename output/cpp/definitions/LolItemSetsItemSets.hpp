#ifndef SWAGGER_TYPES_LolItemSetsItemSets_HPP
#define SWAGGER_TYPES_LolItemSetsItemSets_HPP
#include <json.hpp>
#include "LolItemSetsItemSet.hpp"
namespace leagueapi {
  // 
  struct LolItemSetsItemSets {
    // 
    uint64_t timestamp;
    // 
    std::vector<LolItemSetsItemSet> itemSets;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSets& v) {
    j["timestamp"] = v.timestamp;
    j["itemSets"] = v.itemSets;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSets& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>;
    v.itemSets = j.at("itemSets").get<std::vector<LolItemSetsItemSet>>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsItemSets_HPP

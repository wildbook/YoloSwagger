#ifndef SWAGGER_TYPES_LolItemSetsItemSets_HPP
#define SWAGGER_TYPES_LolItemSetsItemSets_HPP
#include <json.hpp>
#include "LolItemSetsItemSet.hpp"
namespace test {
  // 
  struct LolItemSetsItemSets {
'    // 
    uint64_t accountId;
    // 
    std::vector<LolItemSetsItemSet> itemSets;
    // 
    uint64_t timestamp;
  };

  void to_json(nlohmann::json& j, const LolItemSetsItemSets& v) {
    j["accountId"] = v.accountId;
    j["itemSets"] = v.itemSets;
    j["timestamp"] = v.timestamp;
  }

  void from_json(const nlohmann::json& j, LolItemSetsItemSets& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.itemSets = j.at("itemSets").get<std::vector<LolItemSetsItemSet>>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsItemSets_HPP

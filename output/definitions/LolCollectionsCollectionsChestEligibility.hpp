#ifndef SWAGGER_TYPES_LolCollectionsCollectionsChestEligibility_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsChestEligibility_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolCollectionsCollectionsChestEligibility {
'    // 
    uint32_t earnableChests;
    // 
    uint32_t maximumChests;
    // 
    uint64_t nextChestRechargeTime;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsChestEligibility& v) {
    j["earnableChests"] = v.earnableChests;
    j["maximumChests"] = v.maximumChests;
    j["nextChestRechargeTime"] = v.nextChestRechargeTime;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsChestEligibility& v) {
    v.earnableChests = j.at("earnableChests").get<uint32_t>;
    v.maximumChests = j.at("maximumChests").get<uint32_t>;
    v.nextChestRechargeTime = j.at("nextChestRechargeTime").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsChestEligibility_HPP

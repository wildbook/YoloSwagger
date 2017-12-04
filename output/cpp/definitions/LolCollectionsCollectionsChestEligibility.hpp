#ifndef SWAGGER_TYPES_LolCollectionsCollectionsChestEligibility_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsChestEligibility_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsChestEligibility {
    // 
    uint32_t maximumChests;
    // 
    uint32_t earnableChests;
    // 
    uint64_t nextChestRechargeTime;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsChestEligibility& v) {
    j["maximumChests"] = v.maximumChests;
    j["earnableChests"] = v.earnableChests;
    j["nextChestRechargeTime"] = v.nextChestRechargeTime;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsChestEligibility& v) {
    v.maximumChests = j.at("maximumChests").get<uint32_t>;
    v.earnableChests = j.at("earnableChests").get<uint32_t>;
    v.nextChestRechargeTime = j.at("nextChestRechargeTime").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsChestEligibility_HPP

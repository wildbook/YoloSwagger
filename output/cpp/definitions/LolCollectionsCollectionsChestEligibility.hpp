#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsChestEligibility_t {
    uint32_t earnableChests;
    uint32_t maximumChests;
    uint64_t nextChestRechargeTime;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsChestEligibility_t& v) {
    j["earnableChests"] = v.earnableChests;
    j["maximumChests"] = v.maximumChests;
    j["nextChestRechargeTime"] = v.nextChestRechargeTime;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsChestEligibility_t& v) {
    v.earnableChests = j.at("earnableChests").get<uint32_t>();
    v.maximumChests = j.at("maximumChests").get<uint32_t>();
    v.nextChestRechargeTime = j.at("nextChestRechargeTime").get<uint64_t>();
  }
}

#pragma once
#include <json.hpp>
#include <optional>
#include "LolBannersClashV2FlagRewardSpec.hpp"
namespace leagueapi {
  struct LolBannersCapClashFlagEntitlementPayload_t {
    LolBannersClashV2FlagRewardSpec_t rewardSpec;
    std::string eventId;
    std::string rewardType;
  };

  inline void to_json(nlohmann::json& j, const LolBannersCapClashFlagEntitlementPayload_t& v) {
    j["rewardSpec"] = v.rewardSpec;
    j["eventId"] = v.eventId;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, LolBannersCapClashFlagEntitlementPayload_t& v) {
    v.rewardSpec = j.at("rewardSpec").get<LolBannersClashV2FlagRewardSpec_t>();
    v.eventId = j.at("eventId").get<std::string>();
    v.rewardType = j.at("rewardType").get<std::string>();
  }
  inline std::string to_string(const LolBannersCapClashFlagEntitlementPayload_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

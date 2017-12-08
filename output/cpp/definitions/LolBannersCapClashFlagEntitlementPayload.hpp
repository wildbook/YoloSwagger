#pragma once
#include <json.hpp>
#include <optional>
#include "LolBannersClashV2FlagRewardSpec.hpp"
namespace leagueapi {
  struct LolBannersCapClashFlagEntitlementPayload_t {
    std::string rewardType;
    std::string eventId;
    LolBannersClashV2FlagRewardSpec_t rewardSpec;
  };

  inline void to_json(nlohmann::json& j, const LolBannersCapClashFlagEntitlementPayload_t& v) {
    j["rewardType"] = v.rewardType;
    j["eventId"] = v.eventId;
    j["rewardSpec"] = v.rewardSpec;
  }

  inline void from_json(const nlohmann::json& j, LolBannersCapClashFlagEntitlementPayload_t& v) {
    v.rewardType = j.at("rewardType").get<std::string>();
    v.eventId = j.at("eventId").get<std::string>();
    v.rewardSpec = j.at("rewardSpec").get<LolBannersClashV2FlagRewardSpec_t>();
  }
  inline std::string to_string(const LolBannersCapClashFlagEntitlementPayload_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
#include "LolBannersClashV2FlagRewardSpec.hpp"
namespace leagueapi {
  struct LolBannersCapClashFlagEntitlementPayload_t {
    std::string_t eventId;
    LolBannersClashV2FlagRewardSpec_t rewardSpec;
    std::string_t rewardType;
  };

  inline void to_json(nlohmann::json& j, const LolBannersCapClashFlagEntitlementPayload_t& v) {
    j["eventId"] = v.eventId;
    j["rewardSpec"] = v.rewardSpec;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, LolBannersCapClashFlagEntitlementPayload_t& v) {
    v.eventId = j.at("eventId").get<std::string_t>();
    v.rewardSpec = j.at("rewardSpec").get<LolBannersClashV2FlagRewardSpec_t>();
    v.rewardType = j.at("rewardType").get<std::string_t>();
  }
  inline std::string to_string(const LolBannersCapClashFlagEntitlementPayload_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

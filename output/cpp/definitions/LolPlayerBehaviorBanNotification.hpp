#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorBanNotification_t {
    bool displayReformCard;
    LolPlayerBehaviorNotificationSource_t source;
    bool isPermaBan;
    std::string reason;
    uint64_t id;
    uint64_t timeUntilBanExpires;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorBanNotification_t& v) {
    j["displayReformCard"] = v.displayReformCard;
    j["source"] = v.source;
    j["isPermaBan"] = v.isPermaBan;
    j["reason"] = v.reason;
    j["id"] = v.id;
    j["timeUntilBanExpires"] = v.timeUntilBanExpires;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorBanNotification_t& v) {
    v.displayReformCard = j.at("displayReformCard").get<bool>();
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource_t>();
    v.isPermaBan = j.at("isPermaBan").get<bool>();
    v.reason = j.at("reason").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorBanNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

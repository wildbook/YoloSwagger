#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorBanNotification_t {
    bool displayReformCard;
    uint64_t id;
    LolPlayerBehaviorNotificationSource_t source;
    bool isPermaBan;
    uint64_t timeUntilBanExpires;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorBanNotification_t& v) {
    j["displayReformCard"] = v.displayReformCard;
    j["id"] = v.id;
    j["source"] = v.source;
    j["isPermaBan"] = v.isPermaBan;
    j["timeUntilBanExpires"] = v.timeUntilBanExpires;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorBanNotification_t& v) {
    v.displayReformCard = j.at("displayReformCard").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource_t>();
    v.isPermaBan = j.at("isPermaBan").get<bool>();
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>();
    v.reason = j.at("reason").get<std::string>();
  }
}

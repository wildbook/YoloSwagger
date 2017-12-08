#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorBanNotification_t {
    bool displayReformCard;
    bool isPermaBan;
    uint64_t timeUntilBanExpires;
    LolPlayerBehaviorNotificationSource_t source;
    std::string reason;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorBanNotification_t& v) {
    j["displayReformCard"] = v.displayReformCard;
    j["isPermaBan"] = v.isPermaBan;
    j["timeUntilBanExpires"] = v.timeUntilBanExpires;
    j["source"] = v.source;
    j["reason"] = v.reason;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorBanNotification_t& v) {
    v.displayReformCard = j.at("displayReformCard").get<bool>();
    v.isPermaBan = j.at("isPermaBan").get<bool>();
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>();
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource_t>();
    v.reason = j.at("reason").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorBanNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

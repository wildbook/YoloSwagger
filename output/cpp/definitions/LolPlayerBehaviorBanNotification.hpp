#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorBanNotification_t {
    uint64_t id;
    std::string reason;
    bool isPermaBan;
    LolPlayerBehaviorNotificationSource_t source;
    uint64_t timeUntilBanExpires;
    bool displayReformCard;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorBanNotification_t& v) {
    j["id"] = v.id;
    j["reason"] = v.reason;
    j["isPermaBan"] = v.isPermaBan;
    j["source"] = v.source;
    j["timeUntilBanExpires"] = v.timeUntilBanExpires;
    j["displayReformCard"] = v.displayReformCard;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorBanNotification_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.reason = j.at("reason").get<std::string>();
    v.isPermaBan = j.at("isPermaBan").get<bool>();
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource_t>();
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>();
    v.displayReformCard = j.at("displayReformCard").get<bool>();
  }
  inline std::string to_string(const LolPlayerBehaviorBanNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

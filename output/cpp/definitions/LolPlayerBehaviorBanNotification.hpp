#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorBanNotification_t {
    std::string reason;
    bool displayReformCard;
    uint64_t id;
    uint64_t timeUntilBanExpires;
    bool isPermaBan;
    LolPlayerBehaviorNotificationSource_t source;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorBanNotification_t& v) {
    j["reason"] = v.reason;
    j["displayReformCard"] = v.displayReformCard;
    j["id"] = v.id;
    j["timeUntilBanExpires"] = v.timeUntilBanExpires;
    j["isPermaBan"] = v.isPermaBan;
    j["source"] = v.source;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorBanNotification_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.displayReformCard = j.at("displayReformCard").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>();
    v.isPermaBan = j.at("isPermaBan").get<bool>();
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorBanNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

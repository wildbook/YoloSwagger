#ifndef SWAGGER_TYPES_LolPlayerBehaviorBanNotification_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorBanNotification_HPP
#include <json.hpp>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  // 
  struct LolPlayerBehaviorBanNotification {
    // 
    bool displayReformCard;
    // 
    bool isPermaBan;
    // 
    uint64_t timeUntilBanExpires;
    // 
    LolPlayerBehaviorNotificationSource source;
    // 
    std::string reason;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorBanNotification& v) {
    j["displayReformCard"] = v.displayReformCard;
    j["isPermaBan"] = v.isPermaBan;
    j["timeUntilBanExpires"] = v.timeUntilBanExpires;
    j["source"] = v.source;
    j["reason"] = v.reason;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorBanNotification& v) {
    v.displayReformCard = j.at("displayReformCard").get<bool>;
    v.isPermaBan = j.at("isPermaBan").get<bool>;
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>;
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>;
    v.reason = j.at("reason").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorBanNotification_HPP

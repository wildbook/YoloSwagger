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
    uint64_t id;
    // 
    bool isPermaBan;
    // 
    std::string reason;
    // 
    LolPlayerBehaviorNotificationSource source;
    // 
    uint64_t timeUntilBanExpires;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorBanNotification& v) {
    j["displayReformCard"] = v.displayReformCard;
    j["id"] = v.id;
    j["isPermaBan"] = v.isPermaBan;
    j["reason"] = v.reason;
    j["source"] = v.source;
    j["timeUntilBanExpires"] = v.timeUntilBanExpires;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorBanNotification& v) {
    v.displayReformCard = j.at("displayReformCard").get<bool>;
    v.id = j.at("id").get<uint64_t>;
    v.isPermaBan = j.at("isPermaBan").get<bool>;
    v.reason = j.at("reason").get<std::string>;
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>;
    v.timeUntilBanExpires = j.at("timeUntilBanExpires").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorBanNotification_HPP

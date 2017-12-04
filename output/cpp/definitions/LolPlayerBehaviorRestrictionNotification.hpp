#ifndef SWAGGER_TYPES_LolPlayerBehaviorRestrictionNotification_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorRestrictionNotification_HPP
#include <json.hpp>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  // 
  struct LolPlayerBehaviorRestrictionNotification {
    // 
    bool displayReformCard;
    // 
    int64_t gamesRemaining;
    // 
    uint64_t id;
    // 
    LolPlayerBehaviorNotificationSource source;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorRestrictionNotification& v) {
    j["displayReformCard"] = v.displayReformCard;
    j["gamesRemaining"] = v.gamesRemaining;
    j["id"] = v.id;
    j["source"] = v.source;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorRestrictionNotification& v) {
    v.displayReformCard = j.at("displayReformCard").get<bool>;
    v.gamesRemaining = j.at("gamesRemaining").get<int64_t>;
    v.id = j.at("id").get<uint64_t>;
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorRestrictionNotification_HPP

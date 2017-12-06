#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorRestrictionNotification_t {
    LolPlayerBehaviorNotificationSource_t source;
    bool displayReformCard;
    uint64_t id;
    int64_t gamesRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorRestrictionNotification_t& v) {
    j["source"] = v.source;
    j["displayReformCard"] = v.displayReformCard;
    j["id"] = v.id;
    j["gamesRemaining"] = v.gamesRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorRestrictionNotification_t& v) {
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource_t>();
    v.displayReformCard = j.at("displayReformCard").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.gamesRemaining = j.at("gamesRemaining").get<int64_t>();
  }
}

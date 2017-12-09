#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorRestrictionNotification_t {
    bool displayReformCard;
    int64_t gamesRemaining;
    uint64_t id;
    LolPlayerBehaviorNotificationSource_t source;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorRestrictionNotification_t& v) {
    j["displayReformCard"] = v.displayReformCard;
    j["gamesRemaining"] = v.gamesRemaining;
    j["id"] = v.id;
    j["source"] = v.source;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorRestrictionNotification_t& v) {
    v.displayReformCard = j.at("displayReformCard").get<bool>();
    v.gamesRemaining = j.at("gamesRemaining").get<int64_t>();
    v.id = j.at("id").get<uint64_t>();
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorRestrictionNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

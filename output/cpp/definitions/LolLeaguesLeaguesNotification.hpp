#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueNotificationItem.hpp"
#include "LolLeaguesSeverity.hpp"
namespace leagueapi {
  struct LolLeaguesLeaguesNotification_t {
    bool acknowledgedByPlayer;
    LolLeaguesLeagueNotificationItem_t data;
    uint64_t id;
    uint64_t priority;
    LolLeaguesSeverity_t severity;
    std::string titleType;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification_t& v) {
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["data"] = v.data;
    j["id"] = v.id;
    j["priority"] = v.priority;
    j["severity"] = v.severity;
    j["titleType"] = v.titleType;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification_t& v) {
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>();
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem_t>();
    v.id = j.at("id").get<uint64_t>();
    v.priority = j.at("priority").get<uint64_t>();
    v.severity = j.at("severity").get<LolLeaguesSeverity_t>();
    v.titleType = j.at("titleType").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
}

#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesSeverity.hpp"
#include "LolLeaguesLeagueNotificationItem.hpp"
namespace leagueapi {
  struct LolLeaguesLeaguesNotification_t {
    uint64_t priority;
    bool acknowledgedByPlayer;
    uint64_t id;
    std::string type;
    LolLeaguesSeverity_t severity;
    LolLeaguesLeagueNotificationItem_t data;
    std::string titleType;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification_t& v) {
    j["priority"] = v.priority;
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["id"] = v.id;
    j["type"] = v.type;
    j["severity"] = v.severity;
    j["data"] = v.data;
    j["titleType"] = v.titleType;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification_t& v) {
    v.priority = j.at("priority").get<uint64_t>();
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.severity = j.at("severity").get<LolLeaguesSeverity_t>();
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem_t>();
    v.titleType = j.at("titleType").get<std::string>();
  }
}

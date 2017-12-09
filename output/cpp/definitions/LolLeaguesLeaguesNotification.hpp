#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueNotificationItem.hpp"
#include "LolLeaguesSeverity.hpp"
namespace leagueapi {
  struct LolLeaguesLeaguesNotification_t {
    bool acknowledgedByPlayer;
    LolLeaguesSeverity_t severity;
    std::string type;
    LolLeaguesLeagueNotificationItem_t data;
    uint64_t id;
    std::string titleType;
    uint64_t priority;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification_t& v) {
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["severity"] = v.severity;
    j["type"] = v.type;
    j["data"] = v.data;
    j["id"] = v.id;
    j["titleType"] = v.titleType;
    j["priority"] = v.priority;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification_t& v) {
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>();
    v.severity = j.at("severity").get<LolLeaguesSeverity_t>();
    v.type = j.at("type").get<std::string>();
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem_t>();
    v.id = j.at("id").get<uint64_t>();
    v.titleType = j.at("titleType").get<std::string>();
    v.priority = j.at("priority").get<uint64_t>();
  }
  inline std::string to_string(const LolLeaguesLeaguesNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

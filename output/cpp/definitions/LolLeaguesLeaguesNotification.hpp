#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueNotificationItem.hpp"
#include "LolLeaguesSeverity.hpp"
namespace leagueapi {
  struct LolLeaguesLeaguesNotification_t {
    uint64_t priority;
    uint64_t id;
    std::string type;
    LolLeaguesLeagueNotificationItem_t data;
    std::string titleType;
    LolLeaguesSeverity_t severity;
    bool acknowledgedByPlayer;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification_t& v) {
    j["priority"] = v.priority;
    j["id"] = v.id;
    j["type"] = v.type;
    j["data"] = v.data;
    j["titleType"] = v.titleType;
    j["severity"] = v.severity;
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification_t& v) {
    v.priority = j.at("priority").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem_t>();
    v.titleType = j.at("titleType").get<std::string>();
    v.severity = j.at("severity").get<LolLeaguesSeverity_t>();
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>();
  }
  inline std::string to_string(const LolLeaguesLeaguesNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

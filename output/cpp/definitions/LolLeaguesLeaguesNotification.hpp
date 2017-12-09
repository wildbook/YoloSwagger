#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueNotificationItem.hpp"
#include "LolLeaguesSeverity.hpp"
namespace leagueapi {
  struct LolLeaguesLeaguesNotification_t {
    bool acknowledgedByPlayer;
    std::string titleType;
    LolLeaguesLeagueNotificationItem_t data;
    std::string type;
    uint64_t id;
    uint64_t priority;
    LolLeaguesSeverity_t severity;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification_t& v) {
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["titleType"] = v.titleType;
    j["data"] = v.data;
    j["type"] = v.type;
    j["id"] = v.id;
    j["priority"] = v.priority;
    j["severity"] = v.severity;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification_t& v) {
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>();
    v.titleType = j.at("titleType").get<std::string>();
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem_t>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.priority = j.at("priority").get<uint64_t>();
    v.severity = j.at("severity").get<LolLeaguesSeverity_t>();
  }
  inline std::string to_string(const LolLeaguesLeaguesNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

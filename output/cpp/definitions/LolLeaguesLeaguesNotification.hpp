#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesSeverity.hpp"
#include "LolLeaguesLeagueNotificationItem.hpp"
namespace leagueapi {
  struct LolLeaguesLeaguesNotification_t {
    bool acknowledgedByPlayer;
    std::string titleType;
    LolLeaguesLeagueNotificationItem_t data;
    uint64_t priority;
    LolLeaguesSeverity_t severity;
    uint64_t id;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification_t& v) {
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["titleType"] = v.titleType;
    j["data"] = v.data;
    j["priority"] = v.priority;
    j["severity"] = v.severity;
    j["id"] = v.id;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification_t& v) {
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>();
    v.titleType = j.at("titleType").get<std::string>();
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem_t>();
    v.priority = j.at("priority").get<uint64_t>();
    v.severity = j.at("severity").get<LolLeaguesSeverity_t>();
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolLeaguesLeaguesNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

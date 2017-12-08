#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueNotificationItem.hpp"
#include "LolLeaguesSeverity.hpp"
namespace leagueapi {
  struct LolLeaguesLeaguesNotification_t {
    LolLeaguesSeverity_t severity;
    std::string_t type;
    bool_t acknowledgedByPlayer;
    uint64_t_t priority;
    std::string_t titleType;
    LolLeaguesLeagueNotificationItem_t data;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification_t& v) {
    j["severity"] = v.severity;
    j["type"] = v.type;
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["priority"] = v.priority;
    j["titleType"] = v.titleType;
    j["data"] = v.data;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification_t& v) {
    v.severity = j.at("severity").get<LolLeaguesSeverity_t>();
    v.type = j.at("type").get<std::string_t>();
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool_t>();
    v.priority = j.at("priority").get<uint64_t_t>();
    v.titleType = j.at("titleType").get<std::string_t>();
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem_t>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLeaguesLeaguesNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

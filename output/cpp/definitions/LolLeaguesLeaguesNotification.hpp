#ifndef SWAGGER_TYPES_LolLeaguesLeaguesNotification_HPP
#define SWAGGER_TYPES_LolLeaguesLeaguesNotification_HPP
#include <json.hpp>
#include "LolLeaguesLeagueNotificationItem.hpp"
#include "LolLeaguesSeverity.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeaguesNotification {
    // 
    LolLeaguesSeverity severity;
    // 
    std::string type;
    // 
    bool acknowledgedByPlayer;
    // 
    uint64_t priority;
    // 
    std::string titleType;
    // 
    LolLeaguesLeagueNotificationItem data;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification& v) {
    j["severity"] = v.severity;
    j["type"] = v.type;
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["priority"] = v.priority;
    j["titleType"] = v.titleType;
    j["data"] = v.data;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification& v) {
    v.severity = j.at("severity").get<LolLeaguesSeverity>;
    v.type = j.at("type").get<std::string>;
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>;
    v.priority = j.at("priority").get<uint64_t>;
    v.titleType = j.at("titleType").get<std::string>;
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeaguesNotification_HPP

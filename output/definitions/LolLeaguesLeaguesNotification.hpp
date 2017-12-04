#ifndef SWAGGER_TYPES_LolLeaguesLeaguesNotification_HPP
#define SWAGGER_TYPES_LolLeaguesLeaguesNotification_HPP
#include <json.hpp>
#include "LolLeaguesSeverity.hpp"
#include "LolLeaguesLeagueNotificationItem.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeaguesNotification {
    // 
    bool acknowledgedByPlayer;
    // 
    LolLeaguesLeagueNotificationItem data;
    // 
    uint64_t id;
    // 
    uint64_t priority;
    // 
    LolLeaguesSeverity severity;
    // 
    std::string titleType;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeaguesNotification& v) {
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["data"] = v.data;
    j["id"] = v.id;
    j["priority"] = v.priority;
    j["severity"] = v.severity;
    j["titleType"] = v.titleType;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeaguesNotification& v) {
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>;
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem>;
    v.id = j.at("id").get<uint64_t>;
    v.priority = j.at("priority").get<uint64_t>;
    v.severity = j.at("severity").get<LolLeaguesSeverity>;
    v.titleType = j.at("titleType").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeaguesNotification_HPP

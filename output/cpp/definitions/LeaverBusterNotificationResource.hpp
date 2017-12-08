#pragma once
#include <json.hpp>
#include <optional>
#include "LeaverBusterNotificationType.hpp"
namespace leagueapi {
  struct LeaverBusterNotificationResource_t {
    std::string_t msgId;
    LeaverBusterNotificationType_t type;
    uint32_t_t id;
    int32_t_t punishedGamesRemaining;
  };

  inline void to_json(nlohmann::json& j, const LeaverBusterNotificationResource_t& v) {
    j["msgId"] = v.msgId;
    j["type"] = v.type;
    j["id"] = v.id;
    j["punishedGamesRemaining"] = v.punishedGamesRemaining;
  }

  inline void from_json(const nlohmann::json& j, LeaverBusterNotificationResource_t& v) {
    v.msgId = j.at("msgId").get<std::string_t>();
    v.type = j.at("type").get<LeaverBusterNotificationType_t>();
    v.id = j.at("id").get<uint32_t_t>();
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t_t>();
  }
  inline std::string to_string(const LeaverBusterNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

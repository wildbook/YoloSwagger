#pragma once
#include <json.hpp>
#include <optional>
#include "LeaverBusterNotificationType.hpp"
namespace leagueapi {
  struct LeaverBusterNotificationResource_t {
    LeaverBusterNotificationType_t type;
    uint32_t id;
    int32_t punishedGamesRemaining;
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const LeaverBusterNotificationResource_t& v) {
    j["type"] = v.type;
    j["id"] = v.id;
    j["punishedGamesRemaining"] = v.punishedGamesRemaining;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, LeaverBusterNotificationResource_t& v) {
    v.type = j.at("type").get<LeaverBusterNotificationType_t>();
    v.id = j.at("id").get<uint32_t>();
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>();
    v.msgId = j.at("msgId").get<std::string>();
  }
  inline std::string to_string(const LeaverBusterNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

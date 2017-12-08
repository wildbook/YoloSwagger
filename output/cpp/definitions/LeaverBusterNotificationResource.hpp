#pragma once
#include <json.hpp>
#include <optional>
#include "LeaverBusterNotificationType.hpp"
namespace leagueapi {
  struct LeaverBusterNotificationResource_t {
    int32_t punishedGamesRemaining;
    uint32_t id;
    LeaverBusterNotificationType_t type;
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const LeaverBusterNotificationResource_t& v) {
    j["punishedGamesRemaining"] = v.punishedGamesRemaining;
    j["id"] = v.id;
    j["type"] = v.type;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, LeaverBusterNotificationResource_t& v) {
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>();
    v.id = j.at("id").get<uint32_t>();
    v.type = j.at("type").get<LeaverBusterNotificationType_t>();
    v.msgId = j.at("msgId").get<std::string>();
  }
  inline std::string to_string(const LeaverBusterNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

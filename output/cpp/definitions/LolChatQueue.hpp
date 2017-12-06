#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolChatQueue_t {
    LolChatQueueGameTypeConfig_t gameTypeConfig;
    std::string gameMode;
    int32_t id;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolChatQueue_t& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["gameMode"] = v.gameMode;
    j["id"] = v.id;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChatQueue_t& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChatQueueGameTypeConfig_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.type = j.at("type").get<std::string>();
  }
}

#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolChatQueue_t {
    LolChatQueueGameTypeConfig_t gameTypeConfig;
    std::string gameMode;
    std::string type;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatQueue_t& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["gameMode"] = v.gameMode;
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatQueue_t& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChatQueueGameTypeConfig_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolChatQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

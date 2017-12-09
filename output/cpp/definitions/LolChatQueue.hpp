#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolChatQueue_t {
    std::string type;
    int32_t id;
    std::string gameMode;
    LolChatQueueGameTypeConfig_t gameTypeConfig;
  };

  inline void to_json(nlohmann::json& j, const LolChatQueue_t& v) {
    j["type"] = v.type;
    j["id"] = v.id;
    j["gameMode"] = v.gameMode;
    j["gameTypeConfig"] = v.gameTypeConfig;
  }

  inline void from_json(const nlohmann::json& j, LolChatQueue_t& v) {
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChatQueueGameTypeConfig_t>();
  }
  inline std::string to_string(const LolChatQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

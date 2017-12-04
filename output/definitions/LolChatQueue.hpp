#ifndef SWAGGER_TYPES_LolChatQueue_HPP
#define SWAGGER_TYPES_LolChatQueue_HPP
#include <json.hpp>
#include "LolChatQueueGameTypeConfig.hpp"
namespace leagueapi {
  // 
  struct LolChatQueue {
    // 
    std::string gameMode;
    // 
    LolChatQueueGameTypeConfig gameTypeConfig;
    // 
    int32_t id;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolChatQueue& v) {
    j["gameMode"] = v.gameMode;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolChatQueue& v) {
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChatQueueGameTypeConfig>;
    v.id = j.at("id").get<int32_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatQueue_HPP

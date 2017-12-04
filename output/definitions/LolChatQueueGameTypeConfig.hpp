#ifndef SWAGGER_TYPES_LolChatQueueGameTypeConfig_HPP
#define SWAGGER_TYPES_LolChatQueueGameTypeConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatQueueGameTypeConfig {
    // 
    int64_t id;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChatQueueGameTypeConfig& v) {
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChatQueueGameTypeConfig& v) {
    v.id = j.at("id").get<int64_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatQueueGameTypeConfig_HPP

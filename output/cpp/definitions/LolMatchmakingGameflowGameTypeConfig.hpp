#ifndef SWAGGER_TYPES_LolMatchmakingGameflowGameTypeConfig_HPP
#define SWAGGER_TYPES_LolMatchmakingGameflowGameTypeConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchmakingGameflowGameTypeConfig {
    // 
    bool reroll;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowGameTypeConfig& v) {
    j["reroll"] = v.reroll;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowGameTypeConfig& v) {
    v.reroll = j.at("reroll").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingGameflowGameTypeConfig_HPP

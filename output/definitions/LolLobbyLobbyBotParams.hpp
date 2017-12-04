#ifndef SWAGGER_TYPES_LolLobbyLobbyBotParams_HPP
#define SWAGGER_TYPES_LolLobbyLobbyBotParams_HPP
#include <json.hpp>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace test {
  // 
  struct LolLobbyLobbyBotParams {
'    // 
    LolLobbyLobbyBotDifficulty botDifficulty;
    // 
    int32_t championId;
    // 
    std::string teamId;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyBotParams& v) {
    j["botDifficulty"] = v.botDifficulty;
    j["championId"] = v.championId;
    j["teamId"] = v.teamId;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyBotParams& v) {
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>;
    v.championId = j.at("championId").get<int32_t>;
    v.teamId = j.at("teamId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyBotParams_HPP

#ifndef SWAGGER_TYPES_LolLobbyLobbyBotParams_HPP
#define SWAGGER_TYPES_LolLobbyLobbyBotParams_HPP
#include <json.hpp>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyBotParams {
    // 
    std::string teamId;
    // 
    int32_t championId;
    // 
    LolLobbyLobbyBotDifficulty botDifficulty;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotParams& v) {
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
    j["botDifficulty"] = v.botDifficulty;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotParams& v) {
    v.teamId = j.at("teamId").get<std::string>;
    v.championId = j.at("championId").get<int32_t>;
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyBotParams_HPP

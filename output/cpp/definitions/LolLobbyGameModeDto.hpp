#ifndef SWAGGER_TYPES_LolLobbyGameModeDto_HPP
#define SWAGGER_TYPES_LolLobbyGameModeDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyGameModeDto {
    // 
    int32_t queueId;
    // 
    std::string botDifficulty;
    // 
    std::string gameType;
    // 
    int32_t maxPartySize;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameModeDto& v) {
    j["queueId"] = v.queueId;
    j["botDifficulty"] = v.botDifficulty;
    j["gameType"] = v.gameType;
    j["maxPartySize"] = v.maxPartySize;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameModeDto& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.botDifficulty = j.at("botDifficulty").get<std::string>;
    v.gameType = j.at("gameType").get<std::string>;
    v.maxPartySize = j.at("maxPartySize").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameModeDto_HPP

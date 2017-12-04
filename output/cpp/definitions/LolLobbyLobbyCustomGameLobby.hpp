#ifndef SWAGGER_TYPES_LolLobbyLobbyCustomGameLobby_HPP
#define SWAGGER_TYPES_LolLobbyLobbyCustomGameLobby_HPP
#include <json.hpp>
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyCustomGameLobby {
    // 
    uint64_t gameId;
    // 
    std::vector<LolLobbyLobbyMember> spectators;
    // 
    std::vector<LolLobbyLobbyMember> teamOne;
    // 
    std::string lobbyName;
    // 
    std::vector<LolLobbyLobbyMember> teamTwo;
    // 
    std::string lobbyPassword;
    // 
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    // 
    LolLobbyLobbyCustomGameConfiguration configuration;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameLobby& v) {
    j["gameId"] = v.gameId;
    j["spectators"] = v.spectators;
    j["teamOne"] = v.teamOne;
    j["lobbyName"] = v.lobbyName;
    j["teamTwo"] = v.teamTwo;
    j["lobbyPassword"] = v.lobbyPassword;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["configuration"] = v.configuration;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameLobby& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember>>;
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember>>;
    v.lobbyName = j.at("lobbyName").get<std::string>;
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember>>;
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>;
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>;
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyCustomGameLobby_HPP

#ifndef SWAGGER_TYPES_LolLobbyLobbyCustomGameLobby_HPP
#define SWAGGER_TYPES_LolLobbyLobbyCustomGameLobby_HPP
#include <json.hpp>
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyCustomGameLobby {
    // 
    LolLobbyLobbyCustomGameConfiguration configuration;
    // 
    uint64_t gameId;
    // 
    std::string lobbyName;
    // 
    std::string lobbyPassword;
    // 
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    // 
    std::vector<LolLobbyLobbyMember> spectators;
    // 
    std::vector<LolLobbyLobbyMember> teamOne;
    // 
    std::vector<LolLobbyLobbyMember> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameLobby& v) {
    j["configuration"] = v.configuration;
    j["gameId"] = v.gameId;
    j["lobbyName"] = v.lobbyName;
    j["lobbyPassword"] = v.lobbyPassword;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["spectators"] = v.spectators;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameLobby& v) {
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.lobbyName = j.at("lobbyName").get<std::string>;
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>;
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>;
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember>>;
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember>>;
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyCustomGameLobby_HPP

#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameLobby_t {
    LolLobbyLobbyCustomGameConfiguration_t configuration;
    uint64_t gameId;
    std::string lobbyName;
    std::string lobbyPassword;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::vector<LolLobbyLobbyMember_t> spectators;
    std::vector<LolLobbyLobbyMember_t> teamOne;
    std::vector<LolLobbyLobbyMember_t> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameLobby_t& v) {
    j["configuration"] = v.configuration;
    j["gameId"] = v.gameId;
    j["lobbyName"] = v.lobbyName;
    j["lobbyPassword"] = v.lobbyPassword;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["spectators"] = v.spectators;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameLobby_t& v) {
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember_t>>();
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember_t>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember_t>>();
  }
}

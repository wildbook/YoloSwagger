#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameLobby_t {
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::vector<LolLobbyLobbyMember_t> teamTwo;
    std::vector<LolLobbyLobbyMember_t> spectators;
    LolLobbyLobbyCustomGameConfiguration_t configuration;
    std::vector<LolLobbyLobbyMember_t> teamOne;
    std::string lobbyName;
    uint64_t gameId;
    std::string lobbyPassword;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameLobby_t& v) {
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["teamTwo"] = v.teamTwo;
    j["spectators"] = v.spectators;
    j["configuration"] = v.configuration;
    j["teamOne"] = v.teamOne;
    j["lobbyName"] = v.lobbyName;
    j["gameId"] = v.gameId;
    j["lobbyPassword"] = v.lobbyPassword;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameLobby_t& v) {
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember_t>>();
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember_t>>();
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration_t>();
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember_t>>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>();
  }
}

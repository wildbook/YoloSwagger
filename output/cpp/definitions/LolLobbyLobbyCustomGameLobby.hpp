#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameLobby_t {
    uint64_t gameId;
    std::vector<LolLobbyLobbyMember_t> spectators;
    std::vector<LolLobbyLobbyMember_t> teamOne;
    std::string lobbyName;
    std::vector<LolLobbyLobbyMember_t> teamTwo;
    std::string lobbyPassword;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    LolLobbyLobbyCustomGameConfiguration_t configuration;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameLobby_t& v) {
    j["gameId"] = v.gameId;
    j["spectators"] = v.spectators;
    j["teamOne"] = v.teamOne;
    j["lobbyName"] = v.lobbyName;
    j["teamTwo"] = v.teamTwo;
    j["lobbyPassword"] = v.lobbyPassword;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["configuration"] = v.configuration;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameLobby_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember_t>>();
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember_t>>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember_t>>();
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration_t>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

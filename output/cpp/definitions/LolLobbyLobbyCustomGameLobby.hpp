#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameLobby_t {
    LolLobbyLobbyCustomGameConfiguration_t configuration;
    std::string lobbyName;
    std::vector<LolLobbyLobbyMember_t> teamTwo;
    uint64_t gameId;
    std::string lobbyPassword;
    std::vector<LolLobbyLobbyMember_t> teamOne;
    std::vector<LolLobbyLobbyMember_t> spectators;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameLobby_t& v) {
    j["configuration"] = v.configuration;
    j["lobbyName"] = v.lobbyName;
    j["teamTwo"] = v.teamTwo;
    j["gameId"] = v.gameId;
    j["lobbyPassword"] = v.lobbyPassword;
    j["teamOne"] = v.teamOne;
    j["spectators"] = v.spectators;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameLobby_t& v) {
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration_t>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember_t>>();
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember_t>>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

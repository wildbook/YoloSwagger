#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameLobby_t {
    std::vector<LolLobbyLobbyMember_t> spectators;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    uint64_t gameId;
    LolLobbyLobbyCustomGameConfiguration_t configuration;
    std::string lobbyPassword;
    std::vector<LolLobbyLobbyMember_t> teamOne;
    std::vector<LolLobbyLobbyMember_t> teamTwo;
    std::string lobbyName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameLobby_t& v) {
    j["spectators"] = v.spectators;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["gameId"] = v.gameId;
    j["configuration"] = v.configuration;
    j["lobbyPassword"] = v.lobbyPassword;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
    j["lobbyName"] = v.lobbyName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameLobby_t& v) {
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember_t>>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration_t>();
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember_t>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember_t>>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

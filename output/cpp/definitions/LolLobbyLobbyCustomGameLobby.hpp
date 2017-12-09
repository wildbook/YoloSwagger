#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameLobby_t {
    LolLobbyLobbyCustomGameConfiguration_t configuration;
    uint64_t gameId;
    std::vector<LolLobbyLobbyMember_t> spectators;
    std::string lobbyPassword;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::vector<LolLobbyLobbyMember_t> teamTwo;
    std::string lobbyName;
    std::vector<LolLobbyLobbyMember_t> teamOne;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameLobby_t& v) {
    j["configuration"] = v.configuration;
    j["gameId"] = v.gameId;
    j["spectators"] = v.spectators;
    j["lobbyPassword"] = v.lobbyPassword;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["teamTwo"] = v.teamTwo;
    j["lobbyName"] = v.lobbyName;
    j["teamOne"] = v.teamOne;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameLobby_t& v) {
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember_t>>();
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember_t>>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

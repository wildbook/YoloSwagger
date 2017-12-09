#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotParams_t {
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    std::string teamId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotParams_t& v) {
    j["botDifficulty"] = v.botDifficulty;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotParams_t& v) {
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.teamId = j.at("teamId").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyLobbyBotParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

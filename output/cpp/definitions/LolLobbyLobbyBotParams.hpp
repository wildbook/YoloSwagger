#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotParams_t {
    int32_t championId;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    std::string teamId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotParams_t& v) {
    j["championId"] = v.championId;
    j["botDifficulty"] = v.botDifficulty;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotParams_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.teamId = j.at("teamId").get<std::string>();
  }
}

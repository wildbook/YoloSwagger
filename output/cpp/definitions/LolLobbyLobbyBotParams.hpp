#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotParams_t {
    std::string teamId;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotParams_t& v) {
    j["teamId"] = v.teamId;
    j["botDifficulty"] = v.botDifficulty;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotParams_t& v) {
    v.teamId = j.at("teamId").get<std::string>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyLobbyBotParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

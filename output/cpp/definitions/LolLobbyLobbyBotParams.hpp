#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotParams_t {
    std::string teamId;
    int32_t championId;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotParams_t& v) {
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
    j["botDifficulty"] = v.botDifficulty;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotParams_t& v) {
    v.teamId = j.at("teamId").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
  }
  inline std::string to_string(const LolLobbyLobbyBotParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

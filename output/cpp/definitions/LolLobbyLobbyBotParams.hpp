#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotParams_t {
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    int32_t championId;
    std::string teamId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotParams_t& v) {
    j["botDifficulty"] = v.botDifficulty;
    j["championId"] = v.championId;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotParams_t& v) {
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.teamId = j.at("teamId").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyBotParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

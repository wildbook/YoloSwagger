#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotChampion_t {
    std::string name;
    std::vector<LolLobbyLobbyBotDifficulty_t> botDifficulties;
    int32_t id;
    bool active;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotChampion_t& v) {
    j["name"] = v.name;
    j["botDifficulties"] = v.botDifficulties;
    j["id"] = v.id;
    j["active"] = v.active;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotChampion_t& v) {
    v.name = j.at("name").get<std::string>();
    v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty_t>>();
    v.id = j.at("id").get<int32_t>();
    v.active = j.at("active").get<bool>();
  }
}

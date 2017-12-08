#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotChampion_t {
    std::vector<LolLobbyLobbyBotDifficulty_t> botDifficulties;
    int32_t id;
    std::string name;
    bool active;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotChampion_t& v) {
    j["botDifficulties"] = v.botDifficulties;
    j["id"] = v.id;
    j["name"] = v.name;
    j["active"] = v.active;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotChampion_t& v) {
    v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty_t>>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.active = j.at("active").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyBotChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

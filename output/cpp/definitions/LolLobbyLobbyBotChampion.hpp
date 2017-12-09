#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotChampion_t {
    std::vector<LolLobbyLobbyBotDifficulty_t> botDifficulties;
    bool active;
    std::string name;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotChampion_t& v) {
    j["botDifficulties"] = v.botDifficulties;
    j["active"] = v.active;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotChampion_t& v) {
    v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty_t>>();
    v.active = j.at("active").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyLobbyBotChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

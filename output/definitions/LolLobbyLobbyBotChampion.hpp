#ifndef SWAGGER_TYPES_LolLobbyLobbyBotChampion_HPP
#define SWAGGER_TYPES_LolLobbyLobbyBotChampion_HPP
#include <json.hpp>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyBotChampion {
    // 
    bool active;
    // 
    std::vector<LolLobbyLobbyBotDifficulty> botDifficulties;
    // 
    int32_t id;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyBotChampion& v) {
    j["active"] = v.active;
    j["botDifficulties"] = v.botDifficulties;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyBotChampion& v) {
    v.active = j.at("active").get<bool>;
    v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty>>;
    v.id = j.at("id").get<int32_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyBotChampion_HPP

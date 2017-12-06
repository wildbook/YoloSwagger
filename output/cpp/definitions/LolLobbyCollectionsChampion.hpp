#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyCollectionsChampion_t {
    int32_t id;
    std::string name;
    bool botEnabled;
    bool active;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyCollectionsChampion_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["botEnabled"] = v.botEnabled;
    j["active"] = v.active;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyCollectionsChampion_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.active = j.at("active").get<bool>();
  }
}

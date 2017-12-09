#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyCollectionsChampion_t {
    int32_t id;
    bool botEnabled;
    std::string name;
    bool active;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyCollectionsChampion_t& v) {
    j["id"] = v.id;
    j["botEnabled"] = v.botEnabled;
    j["name"] = v.name;
    j["active"] = v.active;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyCollectionsChampion_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.active = j.at("active").get<bool>();
  }
  inline std::string to_string(const LolLobbyCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyCollectionsChampion_t {
    std::string name;
    bool active;
    int32_t id;
    bool botEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyCollectionsChampion_t& v) {
    j["name"] = v.name;
    j["active"] = v.active;
    j["id"] = v.id;
    j["botEnabled"] = v.botEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyCollectionsChampion_t& v) {
    v.name = j.at("name").get<std::string>();
    v.active = j.at("active").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.botEnabled = j.at("botEnabled").get<bool>();
  }
  inline std::string to_string(const LolLobbyCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGameDataChampionSummary_t {
    int32_t id;
    std::string alias;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameDataChampionSummary_t& v) {
    j["id"] = v.id;
    j["alias"] = v.alias;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameDataChampionSummary_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.alias = j.at("alias").get<std::string>();
  }
  inline std::string to_string(const LolLobbyGameDataChampionSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

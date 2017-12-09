#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGameDataChampionSummary_t {
    std::string alias;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameDataChampionSummary_t& v) {
    j["alias"] = v.alias;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameDataChampionSummary_t& v) {
    v.alias = j.at("alias").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyGameDataChampionSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

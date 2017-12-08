#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersQueue_t {
    int32_t_t id;
    uint32_t_t minLevel;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersQueue_t& v) {
    j["id"] = v.id;
    j["minLevel"] = v.minLevel;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersQueue_t& v) {
    v.id = j.at("id").get<int32_t_t>();
    v.minLevel = j.at("minLevel").get<uint32_t_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

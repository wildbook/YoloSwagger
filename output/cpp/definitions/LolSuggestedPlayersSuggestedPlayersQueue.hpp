#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersQueue_t {
    uint32_t minLevel;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersQueue_t& v) {
    j["minLevel"] = v.minLevel;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersQueue_t& v) {
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

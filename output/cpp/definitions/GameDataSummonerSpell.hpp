#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameDataSummonerSpell_t {
    uint64_t id;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const GameDataSummonerSpell_t& v) {
    j["id"] = v.id;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, GameDataSummonerSpell_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
}

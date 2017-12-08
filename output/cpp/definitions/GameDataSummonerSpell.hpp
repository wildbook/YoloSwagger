#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameDataSummonerSpell_t {
    uint32_t summonerLevel;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const GameDataSummonerSpell_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, GameDataSummonerSpell_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const GameDataSummonerSpell_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

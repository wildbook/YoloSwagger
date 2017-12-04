#ifndef SWAGGER_TYPES_GameDataSummonerSpell_HPP
#define SWAGGER_TYPES_GameDataSummonerSpell_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct GameDataSummonerSpell {
    // 
    uint64_t id;
    // 
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const GameDataSummonerSpell& v) {
    j["id"] = v.id;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, GameDataSummonerSpell& v) {
    v.id = j.at("id").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_GameDataSummonerSpell_HPP

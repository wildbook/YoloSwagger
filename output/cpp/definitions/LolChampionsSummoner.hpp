#ifndef SWAGGER_TYPES_LolChampionsSummoner_HPP
#define SWAGGER_TYPES_LolChampionsSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampionsSummoner {
    // 
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsSummoner& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsSummoner_HPP

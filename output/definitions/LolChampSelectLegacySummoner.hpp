#ifndef SWAGGER_TYPES_LolChampSelectLegacySummoner_HPP
#define SWAGGER_TYPES_LolChampSelectLegacySummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacySummoner {
    // 
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacySummoner& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacySummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacySummoner_HPP

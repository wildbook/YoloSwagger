#ifndef SWAGGER_TYPES_SummonerLevel_HPP
#define SWAGGER_TYPES_SummonerLevel_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SummonerLevel {
    // 
    uint64_t summonerTier;
    // 
    uint64_t expToNextLevel;
    // 
    uint64_t expTierMod;
    // 
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const SummonerLevel& v) {
    j["summonerTier"] = v.summonerTier;
    j["expToNextLevel"] = v.expToNextLevel;
    j["expTierMod"] = v.expTierMod;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, SummonerLevel& v) {
    v.summonerTier = j.at("summonerTier").get<uint64_t>;
    v.expToNextLevel = j.at("expToNextLevel").get<uint64_t>;
    v.expTierMod = j.at("expTierMod").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_SummonerLevel_HPP

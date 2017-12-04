#ifndef SWAGGER_TYPES_SummonerLevel_HPP
#define SWAGGER_TYPES_SummonerLevel_HPP
#include <json.hpp>
namespace test {
  // 
  struct SummonerLevel {
'    // 
    uint64_t expTierMod;
    // 
    uint64_t expToNextLevel;
    // 
    uint32_t summonerLevel;
    // 
    uint64_t summonerTier;
  };

  void to_json(nlohmann::json& j, const SummonerLevel& v) {
    j["expTierMod"] = v.expTierMod;
    j["expToNextLevel"] = v.expToNextLevel;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerTier"] = v.summonerTier;
  }

  void from_json(const nlohmann::json& j, SummonerLevel& v) {
    v.expTierMod = j.at("expTierMod").get<uint64_t>;
    v.expToNextLevel = j.at("expToNextLevel").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
    v.summonerTier = j.at("summonerTier").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_SummonerLevel_HPP

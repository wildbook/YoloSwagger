#ifndef SWAGGER_TYPES_SummonerLevelAndPoints_HPP
#define SWAGGER_TYPES_SummonerLevelAndPoints_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SummonerLevelAndPoints {
    // 
    uint64_t infPoints;
    // 
    uint32_t summonerLevel;
    // 
    uint64_t expPoints;
    // 
    uint64_t sumId;
  };

  inline void to_json(nlohmann::json& j, const SummonerLevelAndPoints& v) {
    j["infPoints"] = v.infPoints;
    j["summonerLevel"] = v.summonerLevel;
    j["expPoints"] = v.expPoints;
    j["sumId"] = v.sumId;
  }

  inline void from_json(const nlohmann::json& j, SummonerLevelAndPoints& v) {
    v.infPoints = j.at("infPoints").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
    v.expPoints = j.at("expPoints").get<uint64_t>;
    v.sumId = j.at("sumId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_SummonerLevelAndPoints_HPP

#ifndef SWAGGER_TYPES_LolLoginSummonerCreatedResource_HPP
#define SWAGGER_TYPES_LolLoginSummonerCreatedResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginSummonerCreatedResource {
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLoginSummonerCreatedResource& v) {
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLoginSummonerCreatedResource& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLoginSummonerCreatedResource_HPP

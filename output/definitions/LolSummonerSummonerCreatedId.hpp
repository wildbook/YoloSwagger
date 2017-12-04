#ifndef SWAGGER_TYPES_LolSummonerSummonerCreatedId_HPP
#define SWAGGER_TYPES_LolSummonerSummonerCreatedId_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSummonerSummonerCreatedId {
'    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolSummonerSummonerCreatedId& v) {
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolSummonerSummonerCreatedId& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerSummonerCreatedId_HPP

#ifndef SWAGGER_TYPES_LolSummonerSummonerIdAndIcon_HPP
#define SWAGGER_TYPES_LolSummonerSummonerIdAndIcon_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerSummonerIdAndIcon {
    // 
    int32_t profileIconId;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerIdAndIcon& v) {
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerIdAndIcon& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerSummonerIdAndIcon_HPP
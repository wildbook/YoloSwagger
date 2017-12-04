#ifndef SWAGGER_TYPES_LolSummonerSummonerIcon_HPP
#define SWAGGER_TYPES_LolSummonerSummonerIcon_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSummonerSummonerIcon {
'    // 
    int32_t profileIconId;
  };

  void to_json(nlohmann::json& j, const LolSummonerSummonerIcon& v) {
    j["profileIconId"] = v.profileIconId;
  }

  void from_json(const nlohmann::json& j, LolSummonerSummonerIcon& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerSummonerIcon_HPP

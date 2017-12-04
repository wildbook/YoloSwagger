#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSummoner_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSummoner_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSuggestedPlayersSuggestedPlayersSummoner {
'    // 
    std::string displayName;
    // 
    uint64_t summonerId;
    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSummoner& v) {
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSummoner& v) {
    v.displayName = j.at("displayName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSummoner_HPP

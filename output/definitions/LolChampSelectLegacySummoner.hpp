#ifndef SWAGGER_TYPES_LolChampSelectLegacySummoner_HPP
#define SWAGGER_TYPES_LolChampSelectLegacySummoner_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChampSelectLegacySummoner {
'    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacySummoner& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacySummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacySummoner_HPP

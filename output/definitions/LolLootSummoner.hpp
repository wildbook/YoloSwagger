#ifndef SWAGGER_TYPES_LolLootSummoner_HPP
#define SWAGGER_TYPES_LolLootSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootSummoner {
    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolLootSummoner& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolLootSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootSummoner_HPP

#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMissionsCollectionsSummoner_t {
    int32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsSummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsSummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<int32_t>();
  }
}

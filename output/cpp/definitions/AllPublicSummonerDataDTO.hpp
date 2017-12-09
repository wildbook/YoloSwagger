#pragma once
#include <json.hpp>
#include <optional>
#include "BasePublicSummonerDTO.hpp"
#include "SummonerLevel.hpp"
#include "SummonerLevelAndPoints.hpp"
namespace leagueapi {
  struct AllPublicSummonerDataDTO_t {
    SummonerLevel_t summonerLevel;
    BasePublicSummonerDTO_t summoner;
    SummonerLevelAndPoints_t summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const AllPublicSummonerDataDTO_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, AllPublicSummonerDataDTO_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO_t>();
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
  }
  inline std::string to_string(const AllPublicSummonerDataDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

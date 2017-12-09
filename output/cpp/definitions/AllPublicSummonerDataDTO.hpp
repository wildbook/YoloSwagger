#pragma once
#include <json.hpp>
#include <optional>
#include "SummonerLevel.hpp"
#include "BasePublicSummonerDTO.hpp"
#include "SummonerLevelAndPoints.hpp"
namespace leagueapi {
  struct AllPublicSummonerDataDTO_t {
    BasePublicSummonerDTO_t summoner;
    SummonerLevelAndPoints_t summonerLevelAndPoints;
    SummonerLevel_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const AllPublicSummonerDataDTO_t& v) {
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, AllPublicSummonerDataDTO_t& v) {
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO_t>();
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
  }
  inline std::string to_string(const AllPublicSummonerDataDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

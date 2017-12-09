#pragma once
#include <json.hpp>
#include <optional>
#include "SummonerLevelAndPoints.hpp"
#include "SummonerLevel.hpp"
#include "BasePublicSummonerDTO.hpp"
namespace leagueapi {
  struct AllPublicSummonerDataDTO_t {
    SummonerLevel_t summonerLevel;
    SummonerLevelAndPoints_t summonerLevelAndPoints;
    BasePublicSummonerDTO_t summoner;
  };

  inline void to_json(nlohmann::json& j, const AllPublicSummonerDataDTO_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, AllPublicSummonerDataDTO_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO_t>();
  }
  inline std::string to_string(const AllPublicSummonerDataDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

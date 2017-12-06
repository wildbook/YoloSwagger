#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EligiblePlayer_t {
    int32_t championId;
    int32_t skinIndex;
    uint64_t summonerId;
    std::string summonerName;
    std::string skinName;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EligiblePlayer_t& v) {
    j["championId"] = v.championId;
    j["skinIndex"] = v.skinIndex;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["skinName"] = v.skinName;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EligiblePlayer_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinName = j.at("skinName").get<std::string>();
  }
}

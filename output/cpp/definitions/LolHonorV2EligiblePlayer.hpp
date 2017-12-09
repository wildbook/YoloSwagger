#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EligiblePlayer_t {
    std::string summonerName;
    uint64_t summonerId;
    std::string skinName;
    int32_t skinIndex;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EligiblePlayer_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["skinName"] = v.skinName;
    j["skinIndex"] = v.skinIndex;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EligiblePlayer_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2EligiblePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

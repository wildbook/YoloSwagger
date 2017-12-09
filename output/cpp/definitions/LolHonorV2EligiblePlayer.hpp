#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EligiblePlayer_t {
    uint64_t summonerId;
    int32_t skinIndex;
    std::string skinName;
    std::string summonerName;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EligiblePlayer_t& v) {
    j["summonerId"] = v.summonerId;
    j["skinIndex"] = v.skinIndex;
    j["skinName"] = v.skinName;
    j["summonerName"] = v.summonerName;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EligiblePlayer_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2EligiblePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

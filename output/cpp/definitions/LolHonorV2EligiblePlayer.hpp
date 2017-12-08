#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EligiblePlayer_t {
    int32_t skinIndex;
    int32_t championId;
    uint64_t summonerId;
    std::string skinName;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EligiblePlayer_t& v) {
    j["skinIndex"] = v.skinIndex;
    j["championId"] = v.championId;
    j["summonerId"] = v.summonerId;
    j["skinName"] = v.skinName;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EligiblePlayer_t& v) {
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const LolHonorV2EligiblePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerSummonerIdAndIcon_t {
    int32_t_t profileIconId;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerIdAndIcon_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerIdAndIcon_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolSummonerSummonerIdAndIcon_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

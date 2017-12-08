#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerSummonerIcon_t {
    int32_t_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerIcon_t& v) {
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerIcon_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
  }
  inline std::string to_string(const LolSummonerSummonerIcon_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

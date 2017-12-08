#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerSummonerIdAndName_t {
    std::string displayName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerIdAndName_t& v) {
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerIdAndName_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolSummonerSummonerIdAndName_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

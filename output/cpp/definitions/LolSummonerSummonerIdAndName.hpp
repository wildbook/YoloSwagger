#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerSummonerIdAndName_t {
    uint64_t summonerId;
    std::string displayName;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerIdAndName_t& v) {
    j["summonerId"] = v.summonerId;
    j["displayName"] = v.displayName;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerIdAndName_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
  }
  inline std::string to_string(const LolSummonerSummonerIdAndName_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

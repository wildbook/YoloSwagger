#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSummoner_t {
    uint32_t summonerLevel;
    uint64_t summonerId;
    std::string displayName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["summonerId"] = v.summonerId;
    j["displayName"] = v.displayName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

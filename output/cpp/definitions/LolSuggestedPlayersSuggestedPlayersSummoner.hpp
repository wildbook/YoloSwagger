#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSummoner_t {
    uint32_t summonerLevel;
    std::string displayName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}

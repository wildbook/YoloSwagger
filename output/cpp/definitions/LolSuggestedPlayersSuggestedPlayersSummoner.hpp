#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSummoner_t {
    std::string displayName;
    uint32_t summonerLevel;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    j["displayName"] = v.displayName;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

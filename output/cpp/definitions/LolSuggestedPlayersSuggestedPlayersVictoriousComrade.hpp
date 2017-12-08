#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t {
    std::string summonerName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

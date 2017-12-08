#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t {
    uint64_t_t summonerId;
    std::string_t summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t& v) {
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

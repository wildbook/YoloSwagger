#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersKudoedPlayer_t {
    uint64_t kudoedSummonerId;
    std::string kudoedSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersKudoedPlayer_t& v) {
    j["kudoedSummonerId"] = v.kudoedSummonerId;
    j["kudoedSummonerName"] = v.kudoedSummonerName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersKudoedPlayer_t& v) {
    v.kudoedSummonerId = j.at("kudoedSummonerId").get<uint64_t>();
    v.kudoedSummonerName = j.at("kudoedSummonerName").get<std::string>();
  }
}

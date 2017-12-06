#pragma once
#include <json.hpp>
#include <optional>
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t {
    uint64_t commonFriendId;
    std::string summonerName;
    LolSuggestedPlayersSuggestedPlayersReason_t reason;
    uint64_t summonerId;
    std::string commonFriendName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    j["commonFriendId"] = v.commonFriendId;
    j["summonerName"] = v.summonerName;
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["commonFriendName"] = v.commonFriendName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.commonFriendName = j.at("commonFriendName").get<std::string>();
  }
}

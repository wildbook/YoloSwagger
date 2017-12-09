#pragma once
#include <json.hpp>
#include <optional>
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t {
    LolSuggestedPlayersSuggestedPlayersReason_t reason;
    uint64_t summonerId;
    uint64_t commonFriendId;
    std::string commonFriendName;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["commonFriendId"] = v.commonFriendId;
    j["commonFriendName"] = v.commonFriendName;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>();
    v.commonFriendName = j.at("commonFriendName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t {
    std::string commonFriendName;
    uint64_t summonerId;
    LolSuggestedPlayersSuggestedPlayersReason_t reason;
    std::string summonerName;
    uint64_t commonFriendId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    j["commonFriendName"] = v.commonFriendName;
    j["summonerId"] = v.summonerId;
    j["reason"] = v.reason;
    j["summonerName"] = v.summonerName;
    j["commonFriendId"] = v.commonFriendId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    v.commonFriendName = j.at("commonFriendName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

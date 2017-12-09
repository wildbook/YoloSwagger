#pragma once
#include <json.hpp>
#include <optional>
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t {
    std::string commonFriendName;
    uint64_t summonerId;
    uint64_t commonFriendId;
    std::string summonerName;
    LolSuggestedPlayersSuggestedPlayersReason_t reason;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    j["commonFriendName"] = v.commonFriendName;
    j["summonerId"] = v.summonerId;
    j["commonFriendId"] = v.commonFriendId;
    j["summonerName"] = v.summonerName;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    v.commonFriendName = j.at("commonFriendName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t {
    std::string_t summonerName;
    uint64_t_t commonFriendId;
    LolSuggestedPlayersSuggestedPlayersReason_t reason;
    std::string_t commonFriendName;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    j["summonerName"] = v.summonerName;
    j["commonFriendId"] = v.commonFriendId;
    j["reason"] = v.reason;
    j["commonFriendName"] = v.commonFriendName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.commonFriendId = j.at("commonFriendId").get<uint64_t_t>();
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason_t>();
    v.commonFriendName = j.at("commonFriendName").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

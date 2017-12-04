#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_HPP
#include <json.hpp>
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace leagueapi {
  // 
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer {
    // 
    std::string summonerName;
    // 
    uint64_t commonFriendId;
    // 
    LolSuggestedPlayersSuggestedPlayersReason reason;
    // 
    std::string commonFriendName;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    j["summonerName"] = v.summonerName;
    j["commonFriendId"] = v.commonFriendId;
    j["reason"] = v.reason;
    j["commonFriendName"] = v.commonFriendName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    v.summonerName = j.at("summonerName").get<std::string>;
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>;
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason>;
    v.commonFriendName = j.at("commonFriendName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_HPP

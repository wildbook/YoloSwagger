#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_HPP
#include <json.hpp>
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace leagueapi {
  // 
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer {
    // 
    uint64_t commonFriendId;
    // 
    std::string commonFriendName;
    // 
    LolSuggestedPlayersSuggestedPlayersReason reason;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    j["commonFriendId"] = v.commonFriendId;
    j["commonFriendName"] = v.commonFriendName;
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>;
    v.commonFriendName = j.at("commonFriendName").get<std::string>;
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersSuggestedPlayer_HPP

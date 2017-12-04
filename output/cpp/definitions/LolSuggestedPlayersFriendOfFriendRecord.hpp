#ifndef SWAGGER_TYPES_LolSuggestedPlayersFriendOfFriendRecord_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersFriendOfFriendRecord_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSuggestedPlayersFriendOfFriendRecord {
    // 
    uint64_t commonFriendId;
    // 
    uint64_t summonerId;
    // 
    std::string commonFriendName;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersFriendOfFriendRecord& v) {
    j["commonFriendId"] = v.commonFriendId;
    j["summonerId"] = v.summonerId;
    j["commonFriendName"] = v.commonFriendName;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersFriendOfFriendRecord& v) {
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.commonFriendName = j.at("commonFriendName").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersFriendOfFriendRecord_HPP

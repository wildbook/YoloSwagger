#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersFriendOfFriendRecord_t {
    uint64_t commonFriendId;
    std::string summonerName;
    uint64_t summonerId;
    std::string commonFriendName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    j["commonFriendId"] = v.commonFriendId;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["commonFriendName"] = v.commonFriendName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.commonFriendName = j.at("commonFriendName").get<std::string>();
  }
}

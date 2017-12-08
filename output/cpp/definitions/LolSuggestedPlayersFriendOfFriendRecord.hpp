#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersFriendOfFriendRecord_t {
    std::string commonFriendName;
    std::string summonerName;
    uint64_t summonerId;
    uint64_t commonFriendId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    j["commonFriendName"] = v.commonFriendName;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["commonFriendId"] = v.commonFriendId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    v.commonFriendName = j.at("commonFriendName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

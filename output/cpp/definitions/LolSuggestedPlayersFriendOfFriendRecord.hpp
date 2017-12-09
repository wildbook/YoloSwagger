#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersFriendOfFriendRecord_t {
    std::string commonFriendName;
    std::string summonerName;
    uint64_t commonFriendId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    j["commonFriendName"] = v.commonFriendName;
    j["summonerName"] = v.summonerName;
    j["commonFriendId"] = v.commonFriendId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    v.commonFriendName = j.at("commonFriendName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

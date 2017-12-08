#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersFriendOfFriendRecord_t {
    uint64_t_t commonFriendId;
    uint64_t_t summonerId;
    std::string_t commonFriendName;
    std::string_t summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    j["commonFriendId"] = v.commonFriendId;
    j["summonerId"] = v.summonerId;
    j["commonFriendName"] = v.commonFriendName;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    v.commonFriendId = j.at("commonFriendId").get<uint64_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.commonFriendName = j.at("commonFriendName").get<std::string_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersFriendOfFriendRecord_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

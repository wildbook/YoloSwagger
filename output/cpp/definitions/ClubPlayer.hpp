#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubPlayer_t {
    uint64_t accountId;
    uint64_t summonerId;
    std::string summonerName;
    int32_t summonerIconId;
  };

  inline void to_json(nlohmann::json& j, const ClubPlayer_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["summonerIconId"] = v.summonerIconId;
  }

  inline void from_json(const nlohmann::json& j, ClubPlayer_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
  }
  inline std::string to_string(const ClubPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

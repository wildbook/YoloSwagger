#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubPlayer_t {
    std::string summonerName;
    uint64_t accountId;
    int32_t summonerIconId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ClubPlayer_t& v) {
    j["summonerName"] = v.summonerName;
    j["accountId"] = v.accountId;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ClubPlayer_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const ClubPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubPlayer_t {
    int32_t_t summonerIconId;
    uint64_t_t summonerId;
    std::string_t summonerName;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const ClubPlayer_t& v) {
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, ClubPlayer_t& v) {
    v.summonerIconId = j.at("summonerIconId").get<int32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const ClubPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

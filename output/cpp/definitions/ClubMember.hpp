#pragma once
#include <json.hpp>
#include <optional>
#include "ClubRole.hpp"
namespace leagueapi {
  struct ClubMember_t {
    int64_t since;
    ClubRole_t role;
    uint64_t accountId;
    std::string summonerName;
    uint64_t summonerId;
    int32_t summonerIconId;
  };

  inline void to_json(nlohmann::json& j, const ClubMember_t& v) {
    j["since"] = v.since;
    j["role"] = v.role;
    j["accountId"] = v.accountId;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["summonerIconId"] = v.summonerIconId;
  }

  inline void from_json(const nlohmann::json& j, ClubMember_t& v) {
    v.since = j.at("since").get<int64_t>();
    v.role = j.at("role").get<ClubRole_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
  }
}

#pragma once
#include <json.hpp>
#include <optional>
#include "ClubRole.hpp"
namespace leagueapi {
  struct ClubMember_t {
    uint64_t accountId;
    ClubRole_t role;
    int64_t since;
    int32_t summonerIconId;
    uint64_t summonerId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const ClubMember_t& v) {
    j["accountId"] = v.accountId;
    j["role"] = v.role;
    j["since"] = v.since;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, ClubMember_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.role = j.at("role").get<ClubRole_t>();
    v.since = j.at("since").get<int64_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}

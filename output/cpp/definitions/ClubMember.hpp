#pragma once
#include <json.hpp>
#include <optional>
#include "ClubRole.hpp"
namespace leagueapi {
  struct ClubMember_t {
    uint64_t accountId;
    ClubRole_t role;
    int64_t since;
    std::string summonerName;
    int32_t summonerIconId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ClubMember_t& v) {
    j["accountId"] = v.accountId;
    j["role"] = v.role;
    j["since"] = v.since;
    j["summonerName"] = v.summonerName;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ClubMember_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.role = j.at("role").get<ClubRole_t>();
    v.since = j.at("since").get<int64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const ClubMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

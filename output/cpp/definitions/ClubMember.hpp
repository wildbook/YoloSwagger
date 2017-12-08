#pragma once
#include <json.hpp>
#include <optional>
#include "ClubRole.hpp"
namespace leagueapi {
  struct ClubMember_t {
    uint64_t accountId;
    int32_t summonerIconId;
    std::string summonerName;
    ClubRole_t role;
    int64_t since;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ClubMember_t& v) {
    j["accountId"] = v.accountId;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerName"] = v.summonerName;
    j["role"] = v.role;
    j["since"] = v.since;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ClubMember_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.role = j.at("role").get<ClubRole_t>();
    v.since = j.at("since").get<int64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const ClubMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

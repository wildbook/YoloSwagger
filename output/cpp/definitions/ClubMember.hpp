#pragma once
#include <json.hpp>
#include <optional>
#include "ClubRole.hpp"
namespace leagueapi {
  struct ClubMember_t {
    std::string summonerName;
    int64_t since;
    ClubRole_t role;
    int32_t summonerIconId;
    uint64_t summonerId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const ClubMember_t& v) {
    j["summonerName"] = v.summonerName;
    j["since"] = v.since;
    j["role"] = v.role;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, ClubMember_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.since = j.at("since").get<int64_t>();
    v.role = j.at("role").get<ClubRole_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const ClubMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

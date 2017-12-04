#ifndef SWAGGER_TYPES_ClubMember_HPP
#define SWAGGER_TYPES_ClubMember_HPP
#include <json.hpp>
#include "ClubRole.hpp"
namespace leagueapi {
  // 
  struct ClubMember {
    // 
    std::string summonerName;
    // 
    int64_t since;
    // 
    ClubRole role;
    // 
    int32_t summonerIconId;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const ClubMember& v) {
    j["summonerName"] = v.summonerName;
    j["since"] = v.since;
    j["role"] = v.role;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, ClubMember& v) {
    v.summonerName = j.at("summonerName").get<std::string>;
    v.since = j.at("since").get<int64_t>;
    v.role = j.at("role").get<ClubRole>;
    v.summonerIconId = j.at("summonerIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_ClubMember_HPP

#ifndef SWAGGER_TYPES_ClubMember_HPP
#define SWAGGER_TYPES_ClubMember_HPP
#include <json.hpp>
#include "ClubRole.hpp"
namespace leagueapi {
  // 
  struct ClubMember {
    // 
    uint64_t accountId;
    // 
    ClubRole role;
    // 
    int64_t since;
    // 
    int32_t summonerIconId;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const ClubMember& v) {
    j["accountId"] = v.accountId;
    j["role"] = v.role;
    j["since"] = v.since;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, ClubMember& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.role = j.at("role").get<ClubRole>;
    v.since = j.at("since").get<int64_t>;
    v.summonerIconId = j.at("summonerIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubMember_HPP

#ifndef SWAGGER_TYPES_RosterItemDto_HPP
#define SWAGGER_TYPES_RosterItemDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RosterItemDto {
    // 
    uint64_t accountId;
    // 
    std::string clubRole;
    // 
    int32_t summonerIconId;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const RosterItemDto& v) {
    j["accountId"] = v.accountId;
    j["clubRole"] = v.clubRole;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, RosterItemDto& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.clubRole = j.at("clubRole").get<std::string>;
    v.summonerIconId = j.at("summonerIconId").get<int32_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RosterItemDto_HPP

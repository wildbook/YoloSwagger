#ifndef SWAGGER_TYPES_RosterItemDto_HPP
#define SWAGGER_TYPES_RosterItemDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RosterItemDto {
    // 
    int32_t summonerIconId;
    // 
    std::string clubRole;
    // 
    std::string summonerName;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RosterItemDto& v) {
    j["summonerIconId"] = v.summonerIconId;
    j["clubRole"] = v.clubRole;
    j["summonerName"] = v.summonerName;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RosterItemDto& v) {
    v.summonerIconId = j.at("summonerIconId").get<int32_t>;
    v.clubRole = j.at("clubRole").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RosterItemDto_HPP

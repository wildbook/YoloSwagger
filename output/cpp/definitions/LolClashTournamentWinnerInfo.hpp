#ifndef SWAGGER_TYPES_LolClashTournamentWinnerInfo_HPP
#define SWAGGER_TYPES_LolClashTournamentWinnerInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashTournamentWinnerInfo {
    // 
    std::string name;
    // 
    std::string shortName;
    // 
    int32_t logoColor;
    // 
    int64_t rosterId;
    // 
    int32_t tier;
    // 
    int32_t logo;
    // 
    std::vector<uint64_t> playerIds;
    // 
    int64_t averageWinDuration;
    // 
    int64_t createTime;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerInfo& v) {
    j["name"] = v.name;
    j["shortName"] = v.shortName;
    j["logoColor"] = v.logoColor;
    j["rosterId"] = v.rosterId;
    j["tier"] = v.tier;
    j["logo"] = v.logo;
    j["playerIds"] = v.playerIds;
    j["averageWinDuration"] = v.averageWinDuration;
    j["createTime"] = v.createTime;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerInfo& v) {
    v.name = j.at("name").get<std::string>;
    v.shortName = j.at("shortName").get<std::string>;
    v.logoColor = j.at("logoColor").get<int32_t>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.tier = j.at("tier").get<int32_t>;
    v.logo = j.at("logo").get<int32_t>;
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>;
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>;
    v.createTime = j.at("createTime").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentWinnerInfo_HPP

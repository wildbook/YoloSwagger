#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTournamentWinnerInfo_t {
    std::string shortName;
    int32_t logoColor;
    int32_t tier;
    std::string name;
    int64_t rosterId;
    int64_t averageWinDuration;
    int64_t createTime;
    std::vector<uint64_t> playerIds;
    int32_t logo;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerInfo_t& v) {
    j["shortName"] = v.shortName;
    j["logoColor"] = v.logoColor;
    j["tier"] = v.tier;
    j["name"] = v.name;
    j["rosterId"] = v.rosterId;
    j["averageWinDuration"] = v.averageWinDuration;
    j["createTime"] = v.createTime;
    j["playerIds"] = v.playerIds;
    j["logo"] = v.logo;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerInfo_t& v) {
    v.shortName = j.at("shortName").get<std::string>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.tier = j.at("tier").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>();
    v.createTime = j.at("createTime").get<int64_t>();
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>();
    v.logo = j.at("logo").get<int32_t>();
  }
}

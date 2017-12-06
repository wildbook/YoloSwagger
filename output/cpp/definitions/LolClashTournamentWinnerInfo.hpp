#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTournamentWinnerInfo_t {
    int64_t averageWinDuration;
    int64_t createTime;
    int32_t logo;
    int32_t logoColor;
    std::string name;
    std::vector<uint64_t> playerIds;
    int64_t rosterId;
    std::string shortName;
    int32_t tier;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerInfo_t& v) {
    j["averageWinDuration"] = v.averageWinDuration;
    j["createTime"] = v.createTime;
    j["logo"] = v.logo;
    j["logoColor"] = v.logoColor;
    j["name"] = v.name;
    j["playerIds"] = v.playerIds;
    j["rosterId"] = v.rosterId;
    j["shortName"] = v.shortName;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerInfo_t& v) {
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>();
    v.createTime = j.at("createTime").get<int64_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
  }
}

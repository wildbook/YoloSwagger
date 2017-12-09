#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTournamentWinnerInfo_t {
    int64_t rosterId;
    int64_t createTime;
    int32_t logoColor;
    std::string shortName;
    std::vector<uint64_t> playerIds;
    int64_t averageWinDuration;
    int32_t logo;
    std::string name;
    int32_t tier;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerInfo_t& v) {
    j["rosterId"] = v.rosterId;
    j["createTime"] = v.createTime;
    j["logoColor"] = v.logoColor;
    j["shortName"] = v.shortName;
    j["playerIds"] = v.playerIds;
    j["averageWinDuration"] = v.averageWinDuration;
    j["logo"] = v.logo;
    j["name"] = v.name;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerInfo_t& v) {
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.createTime = j.at("createTime").get<int64_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>();
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
  }
  inline std::string to_string(const LolClashTournamentWinnerInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

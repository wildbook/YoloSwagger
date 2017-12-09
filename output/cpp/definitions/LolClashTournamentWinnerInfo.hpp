#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTournamentWinnerInfo_t {
    int64_t averageWinDuration;
    std::vector<uint64_t> playerIds;
    std::string shortName;
    int32_t tier;
    int32_t logoColor;
    int64_t rosterId;
    std::string name;
    int32_t logo;
    int64_t createTime;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerInfo_t& v) {
    j["averageWinDuration"] = v.averageWinDuration;
    j["playerIds"] = v.playerIds;
    j["shortName"] = v.shortName;
    j["tier"] = v.tier;
    j["logoColor"] = v.logoColor;
    j["rosterId"] = v.rosterId;
    j["name"] = v.name;
    j["logo"] = v.logo;
    j["createTime"] = v.createTime;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerInfo_t& v) {
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>();
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>();
    v.shortName = j.at("shortName").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.logo = j.at("logo").get<int32_t>();
    v.createTime = j.at("createTime").get<int64_t>();
  }
  inline std::string to_string(const LolClashTournamentWinnerInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

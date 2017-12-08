#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTournamentWinnerInfo_t {
    std::string_t name;
    std::string_t shortName;
    int32_t_t logoColor;
    int64_t_t rosterId;
    int32_t_t tier;
    int32_t_t logo;
    std::vector<uint64_t> playerIds;
    int64_t_t averageWinDuration;
    int64_t_t createTime;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerInfo_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerInfo_t& v) {
    v.name = j.at("name").get<std::string_t>();
    v.shortName = j.at("shortName").get<std::string_t>();
    v.logoColor = j.at("logoColor").get<int32_t_t>();
    v.rosterId = j.at("rosterId").get<int64_t_t>();
    v.tier = j.at("tier").get<int32_t_t>();
    v.logo = j.at("logo").get<int32_t_t>();
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>();
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t_t>();
    v.createTime = j.at("createTime").get<int64_t_t>();
  }
  inline std::string to_string(const LolClashTournamentWinnerInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

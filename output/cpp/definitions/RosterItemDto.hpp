#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterItemDto_t {
    uint64_t accountId;
    std::string clubRole;
    int32_t summonerIconId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const RosterItemDto_t& v) {
    j["accountId"] = v.accountId;
    j["clubRole"] = v.clubRole;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, RosterItemDto_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.clubRole = j.at("clubRole").get<std::string>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}

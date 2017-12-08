#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterItemDto_t {
    int32_t_t summonerIconId;
    std::string_t clubRole;
    std::string_t summonerName;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RosterItemDto_t& v) {
    j["summonerIconId"] = v.summonerIconId;
    j["clubRole"] = v.clubRole;
    j["summonerName"] = v.summonerName;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RosterItemDto_t& v) {
    v.summonerIconId = j.at("summonerIconId").get<int32_t_t>();
    v.clubRole = j.at("clubRole").get<std::string_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const RosterItemDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

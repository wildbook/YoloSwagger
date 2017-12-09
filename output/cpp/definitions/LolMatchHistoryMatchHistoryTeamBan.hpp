#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeamBan_t {
    uint16_t pickTurn;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeamBan_t& v) {
    j["pickTurn"] = v.pickTurn;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeamBan_t& v) {
    v.pickTurn = j.at("pickTurn").get<uint16_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTeamBan_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeamBan_t {
    int32_t championId;
    uint16_t pickTurn;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeamBan_t& v) {
    j["championId"] = v.championId;
    j["pickTurn"] = v.pickTurn;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeamBan_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.pickTurn = j.at("pickTurn").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTeamBan_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

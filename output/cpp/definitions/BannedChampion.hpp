#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BannedChampion_t {
    int32_t_t pickTurn;
    int32_t_t championId;
    int32_t_t teamId;
  };

  inline void to_json(nlohmann::json& j, const BannedChampion_t& v) {
    j["pickTurn"] = v.pickTurn;
    j["championId"] = v.championId;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, BannedChampion_t& v) {
    v.pickTurn = j.at("pickTurn").get<int32_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.teamId = j.at("teamId").get<int32_t_t>();
  }
  inline std::string to_string(const BannedChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
